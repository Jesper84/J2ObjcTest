public class AbstractConnection{
    
    private AbstractConnection impl;
	
	public JSONObject doGet(String url){
        return impl.doGet(url);
	}

	public JSONObject doPost(String url, String body){
        return impl.doPost(url, body);
	}
}