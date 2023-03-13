const router = require("express").Router();

router.get("/protected", (req, res) => {
  const authorization = req.headers.authorization;

  array = atob(authorization.split(" ")).split(':');

  const username = array[0];
  const password = array[1];


  if (username == "admin" && password == "admin") {
    return res.send("Welcome, authenticated client");
  }
  
  res.status(401).send("Not authorized");

});

module.exports = router;

