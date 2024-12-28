<?php
function greet() {
    $var = 10;           // 整数
    echo $var . "\n";    // 输出 10

    $var = "Hello";      // 字符串
    echo $var . "\n";    // 输出 Hello

    // 隐式类型转换
    $var = 10 + "5 apples"; // 结果是 15
    echo $var . "\n";
}

function getData(){
    // 连接数据库
    $conn = new mysqli('localhost', 'dev', '123456', 'dev');

    // 检查连接
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    // 查询数据库
    $result = $conn->query("SELECT * FROM table");

    while($row = $result->fetch_assoc()) {
        echo "id: " . $row["id"]. " - Name: " . $row["name"]. "<br>";
    }

    $conn->close();
}

// PHP 支持动态类型
greet()

// 链接数据库获取数据
getData()


?>
