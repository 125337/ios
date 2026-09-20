// FUN_007a8ee4 @ 007a8ee4

void FUN_007a8ee4(void)

{
  char *pcVar1;
  
  pcVar1 = "MMTipsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_007a8fac,&DAT_028ccb70);
  pcVar1 = "MMToastView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_007a915c,&DAT_028ccb78);
  _MSHookMessageEx(pcVar1,PTR_s_updateLayout_026a8140,FUN_007a9198,&DAT_028ccb80);
  pcVar1 = "WeToast";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_007a91d4,&DAT_028ccb88);
  return;
}

