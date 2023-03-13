const router = require('express').Router();



router.get('/public', (req, res) => {
    res.send(`Everybody can see this page`)
})

module.exports = router;