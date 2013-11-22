package j2objc;
public class HelloWorld{
	
    public HelloWorld(){
        
    }
    
	public void sayHello(){

        String test = "Dette er en meget lang streng";
        System.out.println(test.substring(10));
        System.out.println(test.startsWith("F"));
        System.out.println("t".equals("a"));
	}

	class Hest{
		HelloWorld world = new HelloWorld();

	}
}

