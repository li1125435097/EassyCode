function fetchData() {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      const data = "Hello, World!";
      resolve(data);
    }, 1000);
  });
}

function variableType(){
  let x = 10;    // 数字
  x = "Hello";   // 字符串，合法
  console.log(x);
  
}

function main(){
  // 异步编程示范
  fetchData().then(data => { console.log(data) });  

  //动态类型示范
  variableType()
}
main()