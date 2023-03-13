const express = require("express");
const app = express();
const port = 8080;

const public_route = require('./routes/public');
const protected_route = require('./routes/protected');



app.get('/', (req, res) => {
    const songs = [
        "Ac-cent-tchu-ate the Positive",
        "Accidents Will Happen",
        "Adeste Fideles",
        "Ad-Lib Blues",
        "An Affair to Remember (Our Love Affair)",
        "After You've Gone",
        "Ain't She Sweet",
        "Ain't Cha Ever Comin' Back?",
        "Air For English Horn",
        "Alice Blue Gown",
        "All Alone",
        "All By Myself",
        "All I Do Is Dream of You",
        "All I Need is the Girl",
        "New York New York",
        "All My Tomorrows",
        "All of Me",
        "All of You",
        "All or Nothing at All",
        "All the Way Home",
        "All This and Heaven Too",
        "All Through the Day",
        "Almost Like Being in Love",
      ];
    
      const randomSong = (min, max) => {
        return Math.floor(Math.random() * (max - min + 1) + min);
    };
     
      const num = randomSong(0, songs.length);
    
    res.send(songs[num]);
});

app.use("/birth_date", require("./birth_date"));

app.use("/birth_city", require("./birth_city"));

app.use("/wives", require("./wives"));

app.use("/picture", require("./picture"));

app.use("/", public_route);

app.use("/", protected_route);

app.listen(port);