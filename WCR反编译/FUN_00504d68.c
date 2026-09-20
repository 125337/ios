// FUN_00504d68 @ 00504d68

void FUN_00504d68(void)

{
  char *pcVar1;
  
  pcVar1 = "WAConfigMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isEnableWKInspectable_026a4590,FUN_00504f60,&DAT_028caf68);
  _MSHookMessageEx(pcVar1,PTR_s_pageIsUseVConsoleForAppID__026a4598,FUN_00504fc8,&DAT_028caf70);
  pcVar1 = "WAExptProxy";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isEnableWKInspectable_026a4590,FUN_0050509c,&DAT_028caf78);
  pcVar1 = "WACommonMarkMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isWeAppDevelopModeOpen__026a45a0,FUN_00505104,&DAT_028caf80);
  pcVar1 = "WAWebViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isOpenDebugAndVConsole_026a45a8,FUN_005051d8,&DAT_028caf88);
  _MSHookMessageEx(pcVar1,PTR_s_shouldEnableWKInspectable_026a45b0,FUN_00505240,&DAT_028caf90);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_005052a8,&DAT_028caf98);
  pcVar1 = "WAJSCoreService";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_shouldEnableJSContextInspectable_026a45b8,FUN_00505418,&DAT_028cafa0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_isDebugAndVConsoleOpen_026a45c0,FUN_005054ec,&DAT_028cafa8);
  pcVar1 = "MMWebViewController";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_shouldInjectVConsole_026a45c8,FUN_00505554,&DAT_028cafb0);
  pcVar1 = "WKWebView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_005055bc,&DAT_028cafb8);
  return;
}

