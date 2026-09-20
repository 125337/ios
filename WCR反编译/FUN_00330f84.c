// FUN_00330f84 @ 00330f84

void FUN_00330f84(void)

{
  char *pcVar1;
  
  pcVar1 = "UITableView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_separatorStyle_026a20e0,FUN_00331150,&DAT_028c9e20);
  _MSHookMessageEx(pcVar1,PTR_s_setSeparatorStyle__026a20b0,FUN_003311a4,&DAT_028c9e28);
  _MSHookMessageEx(pcVar1,PTR_s_separatorColor_026a20e8,FUN_0033120c,&DAT_028c9e30);
  _MSHookMessageEx(pcVar1,PTR_s_setSeparatorColor__026a20f0,FUN_0033128c,&DAT_028c9e38);
  pcVar1 = "WCColor";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_seperatorColor_026a20f8,FUN_003313cc,&DAT_028c9e40);
  pcVar1 = "UIColor";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_separatorColor_026a20e8,FUN_0033144c,&DAT_028c9e48);
  _MSHookMessageEx(pcVar1,PTR_s_opaqueSeparatorColor_026a2100,FUN_003314cc,&DAT_028c9e50);
  pcVar1 = "MMMenuContentView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addSeparatorLineInY_left_right__026a2108,FUN_0033154c,&DAT_028c9e58)
  ;
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_003315ac,&DAT_028c9e60);
  FUN_003315f8();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  FUN_003316e4();
  return;
}

