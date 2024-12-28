import java.util.concurrent.CompletableFuture;

public class Main {
  public static void main(String[] args) {
    // 同步编程示范
    sync();

    // 静态类型报错
    staticType();
  }
  public static void sync(){
    CompletableFuture<String> future = CompletableFuture.supplyAsync(() -> {
      try {
        Thread.sleep(1000);
      } catch (InterruptedException e) {
        throw new IllegalStateException(e);
      }
      return "Hello, World!";
    });

    future.thenAccept(data -> {
      System.out.println(data); // 输出: Hello, World!
    });
  }

  public static void staticType(){
    int x = 10;    // 数字
    // x = "Hello";   // 编译错误，类型不匹配
    System.out.println(x);
  }
  
  
}