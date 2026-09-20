// FUN_003e0398 @ 003e0398

void FUN_003e0398(void)

{
  char *pcVar1;
  
  pcVar1 = "ClientCheckMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addImage__026a32d8,FUN_003e072c,&DAT_028ca338);
  _MSHookMessageEx(pcVar1,PTR_s_getImageList_026a32e0,FUN_003e0858,&DAT_028ca340);
  _MSHookMessageEx(pcVar1,PTR_s_registerAddImageCallBack_026a32e8,FUN_003e08f8,&DAT_028ca348);
  _MSHookMessageEx(pcVar1,PTR_s_OnGetNewXmlMsg_Type_MsgWrap__026a32f0,FUN_003e090c,&DAT_028ca350);
  _MSHookMessageEx(pcVar1,PTR_s_onAuthOK_026a32f8,FUN_003e09a0,&DAT_028ca358);
  _MSHookMessageEx(pcVar1,PTR_s_test_026a3300,FUN_003e09b4,&DAT_028ca360);
  _MSHookMessageEx(pcVar1,PTR_s_test1_026a3308,FUN_003e09c8,&DAT_028ca368);
  pcVar1 = "MMSafeModeMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_shouldEnterSafeMode_026a3310,FUN_003e09dc,&DAT_028ca370);
  pcVar1 = "QIDevice";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_identifierForVendor_026a3318,FUN_003e09f8,&DAT_028ca378);
  pcVar1 = "UIDevice";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_identifierForVendor_026a3318,FUN_003e0c98,&DAT_028ca380);
  pcVar1 = "NSProcessInfo";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_environment_026a3320,FUN_003e0f38,&DAT_028ca388);
  pcVar1 = "NSFileManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,FUN_003e1180,&DAT_028ca390
                  );
  _MSHookMessageEx(pcVar1,PTR_s_contentsOfDirectoryAtURL_includi_026a3328,FUN_003e1378,&DAT_028ca398
                  );
  pcVar1 = "NSBundle";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_pathForResource_ofType__026a3330,FUN_003e1624,&DAT_028ca3a0);
  _MSHookMessageEx(pcVar1,PTR_s_appStoreReceiptURL_026a3338,FUN_003e197c,&DAT_028ca3a8);
  pcVar1 = "NSString";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_stringWithContentsOfFile_encodin_026a3340,FUN_003e1b94,&DAT_028ca3b0
                  );
  pcVar1 = "NSDictionary";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_dictionaryWithContentsOfFile__026a3348,FUN_003e1dd4,&DAT_028ca3b8);
  pcVar1 = "WCCrashBlockMonitorPlugin";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_start_0269f448,FUN_003e20c4,&DAT_028ca3c0);
  pcVar1 = "KSCrash";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_install_026a3350,FUN_003e2108,&DAT_028ca3c8);
  _MSHookMessageEx(pcVar1,PTR_s_setMonitoring__026a3358,FUN_003e2190,&DAT_028ca3d0);
  pcVar1 = "WCCrashBlockExtensionHandler";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_renewInfoForReport_026a3360,FUN_003e21d8,&DAT_028ca3d8);
  return;
}

