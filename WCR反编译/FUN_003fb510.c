// FUN_003fb510 @ 003fb510

void FUN_003fb510(void)

{
  char *pcVar1;
  
  pcVar1 = "UINavigationController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_003fb714,&DAT_028ca5c8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_003fb760,&DAT_028ca5d0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_003fb7b8,&DAT_028ca5d8);
  _MSHookMessageEx(pcVar1,PTR_s_PushViewController_animated__0269cd40,FUN_003fb810,&DAT_028ca5e0);
  pcVar1 = "MMUINavigationController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_shouldInteractivePop_026a34f8,FUN_003fb98c,&DAT_028ca5e8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_003fba94,&DAT_028ca5f0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_003fbae0,&DAT_028ca5f8);
  pcVar1 = "WCSplitDetailNavigationController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_003fbb38,&DAT_028ca600);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_003fbb84,&DAT_028ca608);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_003fbbdc,&DAT_028ca610);
  _MSHookMessageEx(pcVar1,PTR_s_initWithRootViewController_isBei_026a3500,FUN_003fbc34,&DAT_028ca618
                  );
  pcVar1 = "MainFrameTableView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setContentOffset__0269e780,FUN_003fbd84,&DAT_028ca620);
  _MSHookMessageEx(pcVar1,PTR_s_setContentOffset_animated__0269ddd8,FUN_003fbe54,&DAT_028ca628);
  return;
}

