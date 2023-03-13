const router = require('express').Router();

router.get('/', (req, res) => {
	res.send(`https://en.wikipedia.org/wiki/Frank_Sinatra#/media/File:Frank_Sinatra2,_Pal_Joey.jpg`)
});

module.exports = router;