<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CrossOver Calculator</title>

    <style>
        body{
    margin: 0px;
    padding: 0px;

    color: #eaefe7;
    text-align: center;
    background-image: url(https://th.bing.com/th/id/R.ba01d095b9f9a650e61d8f49d2b28519?rik=rVVFOj18ozgpZw&riu=http%3a%2f%2fwww.pixelstalk.net%2fwp-content%2fuploads%2f2016%2f05%2fMath-Mathematics-Formula-Wallpaper-for-PC.jpg&ehk=%2bfTho6j8Ym8wGaYhOjf%2bGXs56O7AyL38fNlEbHjIzqQ%3d&risl=&pid=ImgRaw&r=0);
    background-position: center;
    background-repeat: no-repeat;
    background-size: cover;
    height: 200vh;
}
h1{
    font-size: 45px;
}

input{
    width: 80px;
    height: 80px;
    font-size: 65px;
    border-radius: 20px;
    margin: 10px;
    background-color: rgb(198, 188, 188);
    color: rgb(27, 22, 22);
    border-style: none;

}

.btn:hover{
    background-color:tomato;
    cursor: pointer;
}

    </style>
</head>
<body>
    <h1> Calculator</h1>
    <form action="" name="clc">
        <input type="text" name="display" style="width: 370px; height: 70px; background-color: #4c555c;color: white;"><br>
        <input class="btn" type="button" value="0" onclick="clc.display.value += '0'">
        <input class="btn" type="button" value="1" onclick="clc.display.value += '1'">
        <input class="btn" type="button" value="2" onclick="clc.display.value += '2'">
        <input class="btn" type="button" value="+" onclick="clc.display.value += '+'" style=" background-color: #cc5c11;"><br>
        <input class="btn" type="button" value="3" onclick="clc.display.value += '3'">
        <input class="btn" type="button" value="4" onclick="clc.display.value += '4'">
        <input class="btn" type="button" value="5" onclick="clc.display.value += '5'">
        <input class="btn" type="button" value="-" onclick="clc.display.value += '-'" style="background-color: #bb0be7;"><br>
        <input class="btn" type="button" value="6" onclick="clc.display.value += '6'">
        <input class="btn" type="button" value="7" onclick="clc.display.value += '7'">
        <input class="btn" type="button" value="8" onclick="clc.display.value += '8'">
        <input class="btn" type="button" value="*" onclick="clc.display.value += '*'" style="background-color: #4f06eb;"><br>
        <input class="btn" type="button" value="9" onclick="clc.display.value += '9'">
        <input class="btn" type="button" value="C" onclick="clc.display.value =''" style="background-color:#0bef79;">
        <input class="btn" type="button" value="=" onclick="clc.display.value =eval(clc.display.value)">
        <input class="btn" type="button" value="&#247;" onclick="clc.display.value += '/'" style="background-color: #10bfff;">

    </form>
</body>
</html>
