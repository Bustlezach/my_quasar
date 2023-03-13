const router = require('express').Router();

const wife = ['Nancy Barbato', 'Ava Gardner', 'Mia Farrow', 'Barbara Marx'];

// let i = 0;
// for (let i; i < wife.length; i++ ){
// 	i;
// };

router.get('/', (req, res) => {
	res.send(`${wife[0]}, ${wife[1]}, ${wife[2]}, ${wife[3]}`)
});

module.exports = router;
