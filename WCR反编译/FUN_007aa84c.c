// FUN_007aa84c @ 007aa84c

void FUN_007aa84c(void)

{
  char *pcVar1;
  
  pcVar1 = "ExptService";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getExpt_withBoolDef__026a8178,FUN_007aa9e8,&DAT_028ccb90);
  pcVar1 = "MMLimitedModeMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canShowLimitedModeEntry_026a8180,FUN_007aab8c,&DAT_028ccb98);
  pcVar1 = "PreEnterShowLimitedModeEntryStep";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_configWithContent__026a8188,FUN_007aabf4,&DAT_028ccba0);
  pcVar1 = "MMLimitedModeEntryViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initUI_026a8190,FUN_007aacc0,&DAT_028ccba8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_007aad08,&DAT_028ccbb0);
  pcVar1 = "WCFinderTimelineTabViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showTeenagerBlockAlertView_026a8198,FUN_007aaed0,&DAT_028ccbb8);
  _MSHookMessageEx(pcVar1,PTR_s_showTeenagerNavView_026a81a0,FUN_007aaf18,&DAT_028ccbc0);
  _MSHookMessageEx(pcVar1,PTR_s_onShowTeenagerRestWithScene__026a81a8,FUN_007aaf60,&DAT_028ccbc8);
  pcVar1 = "WCFinderFullShareListViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onShowTeenagerRestWithScene__026a81a8,FUN_007aafb0,&DAT_028ccbd0);
  return;
}

