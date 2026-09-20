// FUN_006dc848 @ 006dc848

void FUN_006dc848(void)

{
  char *pcVar1;
  
  pcVar1 = "CustomSubMenuFloatView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onTableViewButtonDown__026a6bd8,FUN_006dc924,&DAT_028cc298);
  pcVar1 = "MMURLHandler";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_handleHttpURL_withExtraInfo__026a6bd0,FUN_006dca68,&DAT_028cc2a0);
  pcVar1 = "GetA8KeyLogic";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_MessageReturn_Event__026a6be0,FUN_006dce80,&DAT_028cc2a8);
  pcVar1 = "WebViewA8KeyLogicImpl";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_MessageReturn_Event__026a6be0,FUN_006dcf20,&DAT_028cc2b0);
  return;
}

