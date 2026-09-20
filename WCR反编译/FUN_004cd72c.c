// FUN_004cd72c @ 004cd72c

void FUN_004cd72c(void)

{
  char *pcVar1;
  
  pcVar1 = "MainFrameTableView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setFrame__026ca960,FUN_004cd8a0,&DAT_028cac50);
  pcVar1 = "MMMainTableView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setFrame__026ca960,FUN_004cdb28,&DAT_028cac58);
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_004cddc0,&DAT_028cac60);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_004cde00,&DAT_028cac68);
  pcVar1 = "ContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_004cde4c,&DAT_028cac70);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_004cde8c,&DAT_028cac78);
  pcVar1 = "FindFriendEntryViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_004cded8,&DAT_028cac80);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_004cdf18,&DAT_028cac88);
  return;
}

