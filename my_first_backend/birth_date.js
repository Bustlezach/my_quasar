const router = require('express').Router();



router.get('/', (req, res) => {
    res.send(`December 12, 1915`)
})

module.exports = router;