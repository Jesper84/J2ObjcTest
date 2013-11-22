package com.trifork.android.tribank.fwk;

import java.util.ArrayList;
import java.util.Date;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import com.trifork.android.tribank.control.alerts.model.Alerts;
import com.trifork.android.tribank.fwk.model.PhoneNumbers;
import com.trifork.android.tribank.fwk.model.RealEstateSettings;

public class ServerSettings {
	final private PhoneNumbers phoneNumbers;
	final private Date serverTime;
	final private String serverTimeString;
	final private boolean isCameraSupported;
	final private ArrayList<String> defaultPapers;
	final private String logonText;
	final private boolean useTwoFactorLogon; 
	final int serverTimeout; // Max seconds before a network request should time out.
	final boolean secureMail;
	final Alerts alerts;
	final int maxTransactionsMonths;	// Current month is included
	final private String baseURL;
	final private boolean showReconciliation;
	final private RealEstateSettings realEstateSettings;

	public ServerSettings(JSONObject json) throws JSONException {
		Logger.i("JSON", json.toString(2));
		JSONObject jsonNumbers = Utils.getJSONObject(json, "ContactInformation");
		phoneNumbers = jsonNumbers == null ? null : new PhoneNumbers(jsonNumbers);
//		TimeZone serverTimeZone = Formatter.jsonDateStringToTimeZone(Utils.getJSONString(json, "ServerTime"));
		isCameraSupported = Utils.getJSONBoolean(json, "CameraSupported", true);
//		Localizations.setServerTimeZone(serverTimeZone);
		logonText =  Utils.getJSONString(json, "LogonText"); 
		serverTime = Utils.getJSONDate(json, "ServerTime");
		serverTimeString = Utils.getJSONString(json, "ServerTime");
		useTwoFactorLogon = Utils.getJSONBoolean(json, "UseTwoFactorLogon", false);
		serverTimeout = Utils.getJSONInteger(json, "Timeout");
		secureMail = Utils.getJSONBoolean(json, "SecureMailEnabled", false);
		maxTransactionsMonths = Utils.getJSONInteger(json, "MaxTransactionsMonths", 1);
		alerts = new Alerts(json);
		baseURL = Utils.getJSONString(json, "BaseURL");
		showReconciliation = Utils.getJSONBoolean(json, "ShowReconciliation", false);
		
		JSONArray defPapers = Utils.getJSONArray(json, "DefaultPapers");
		defaultPapers = new ArrayList<String>();
		if (defPapers != null) {
			for (int i = 0; i < defPapers.length(); i ++) {
				defaultPapers.add(defPapers.getString(i));
			}
		}
		
		JSONObject jsonRealEstate = Utils.getJSONObject(json, "RealEstateSettings");
		realEstateSettings = jsonRealEstate == null ? null : new RealEstateSettings(jsonRealEstate);
	}

	public Date getServerTime() {
		return serverTime;
	}
	
	public String getServerTimeString() {
		return serverTimeString;
	}

	public PhoneNumbers getPhoneNumbers() {
		return phoneNumbers;
	}

	public boolean isCameraSupported() {
		return isCameraSupported;
	}
	
	public String getLogonText() {
		return logonText;
	}
		

	public ArrayList<String> getDefaultPapers() {
		return defaultPapers;
	}

	public boolean useTwoFactorLogon() {
		return useTwoFactorLogon;
	}
	
	public int getTimeoutInSeconds() {
		return serverTimeout;
	}
	
	public boolean isSecureMailEnabled() {
		return secureMail;
	}
	
	public Alerts getAlerts() {
		return alerts;
	}
	
	public int getMaxTransactionsMonths() {
		return maxTransactionsMonths;
	}

	public String getBaseURL() {
		return baseURL;
	}

	public boolean getShowReconciliation() {
		return showReconciliation;
	}
	
	public RealEstateSettings getRealEstateSettings() {
		return realEstateSettings;
	}
}
