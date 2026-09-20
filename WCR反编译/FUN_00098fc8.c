// FUN_00098fc8 @ 00098fc8

void FUN_00098fc8(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_000990b0,&DAT_028c7f90);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_000990ec,&DAT_028c7f98);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00099134,&DAT_028c7fa0);
  pcVar1 = "CommonMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isShowHeadImage_0269e240,FUN_0009917c,&DAT_028c7fa8);
  pcVar1 = "TLProfileExpandableHeaderView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0009920c,&DAT_028c7fb0);
  return;
}

