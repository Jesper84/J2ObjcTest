public class JSONTest{

    public JSONObject getDate(){
        AbstractConnection connection = new AbstractConnection();
        return connection.doGet("http://date.jsontest.com/");
	}

}