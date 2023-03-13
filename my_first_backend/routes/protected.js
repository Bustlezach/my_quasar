const router = require('express').Router();

function checks(req, res, next) {
    const authorization = req.headers.authorization;
    arr = atob(String(authorization).split(' ')[1])
    array = arr.split(':');

    username = array[0];
    password = array[1];

    if (username == "admin" && password == "admin") {
        return next();
    }

    res.set("WWW-Authenticate", 'Basic realm="Restricted Area"');
    res.status(401).send("Not authorized");
}

router.get('/protected', checks, (req, res) => {
    res.send("Welcome, authenticated client")
})

module.exports = router;