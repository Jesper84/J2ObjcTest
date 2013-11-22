
import java.util.ArrayList;


public class ServerSettings {

	final private ArrayList<String> defaultPapers;


	public ServerSettings(JSONObject json) throws JSONException {

		
		JSONArray defPapers = json.getJSONArray("DefaultPapers");
		defaultPapers = new ArrayList<String>();
		if (defPapers != null) {
			for (int i = 0; i < defPapers.length(); i ++) {
				defaultPapers.add(defPapers.getString(i));
			}
		}
		
	}

	
	public ArrayList<String> getDefaultPapers() {
		return defaultPapers;
	}
	
}
