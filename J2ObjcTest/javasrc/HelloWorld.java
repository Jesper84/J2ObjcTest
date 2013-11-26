import java.util.ArrayList;
public class HelloWorld{
	
    public HelloWorld(){
        
    }
    
	public void getDate(){
/*        String test = "Dette er en meget lang streng";
        System.out.println(test.substring(10));
        System.out.println(test.startsWith("F"));
        System.out.println("t".equals("a"));*/
        AbstractConnection connection = new AbstractConnection();
        connection.doGet("http://date.jsontest.com/");
	}
    
    public String[] doSomething() throws JSONException{
        JSONObject object = new JSONObject("{\"DefaultPapers\":[\"DK0010274414\", \"DK11111111\"]}");
        
        
        
        
		JSONArray defPapers = object.getJSONArray("DefaultPapers");

        String[] defs = new String[defPapers.length()];
		if (defPapers != null) {
			for (int i = 0; i < defPapers.length(); i ++) {
                defs[i]= defPapers.get(i).toString();
            }
		}
        return defs;
        
    }

}

