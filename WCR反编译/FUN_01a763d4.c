// FUN_01a763d4 @ 01a763d4

void FUN_01a763d4(void)

{
  char *pcVar1;
  
  pcVar1 = "WCNewCommitViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canShowLastSelectTagCell_026bd530,FUN_01a764dc,&DAT_028e44a0);
  _MSHookMessageEx(pcVar1,PTR_s_makeLastSelectTagCell__026bd538,FUN_01a76544,&DAT_028e44a8);
  _MSHookMessageEx(pcVar1,PTR_s_reloadData_0269e400,FUN_01a76618,&DAT_028e44b0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_01a76674,&DAT_028e44b8);
  pcVar1 = "WCTableViewSectionManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addCell__0269e3f8,FUN_01a766bc,&DAT_028e44c0);
  pcVar1 = "WCTableViewManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addSection__0269e3d0,FUN_01a767c0,&DAT_028e44c8);
  return;
}

