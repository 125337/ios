// FUN_002f6c8c @ 002f6c8c

void FUN_002f6c8c(void)

{
  cfstringStruct *pcVar1;
  
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  _NSClassFromString(&cf_MMUINavigationBar);
  FUN_002f6f80();
  _NSClassFromString(&cf_MMNewMsgContentNavBar);
  FUN_002f6f80();
  _NSClassFromString(&cf_MMMsgContentNavBar);
  FUN_002f6f80();
  _NSClassFromString(&cf_MMTabBar);
  FUN_002f6f80();
  _NSClassFromString(&cf_WCRefineTabBar);
  FUN_002f6f80();
  _NSClassFromString(&cf_MMInputToolView);
  FUN_002f6f80();
  _NSClassFromString(&cf_ContactSelectToolView);
  FUN_002f6f80();
  _NSClassFromString(&cf_SharePreConfirmSheetView);
  FUN_002f6f80();
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
  FUN_002f6f80();
  pcVar1 = &cf_NewMainFrameViewController;
  _NSClassFromString();
  FUN_002f7470(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_002f74e0,&DAT_028c9a70);
  FUN_002f7470(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_002f7584,&DAT_028c9a78);
  pcVar1 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  FUN_002f7470(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_002f7628,&DAT_028c9a80);
  FUN_002f7470(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_002f76cc,&DAT_028c9a88);
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  _MSHookMessageEx();
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  _MSHookMessageEx();
  return;
}

