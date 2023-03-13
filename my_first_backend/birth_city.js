const express = require("express");
const router = express.Router();



router.get('/', (req, res) => {
    res.send(`Hoboken, New Jersey`)
})

module.exports = router;