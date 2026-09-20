// FUN_006b6500 @ 006b6500

void FUN_006b6500(void)

{
  char *pcVar1;
  
  pcVar1 = "UIViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_006b6608,&DAT_028cc170);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_006b6644,&DAT_028cc178);
  pcVar1 = "UIImageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_006b668c,&DAT_028cc180);
  _MSHookMessageEx(pcVar1,PTR_s_setImage__026ca978,FUN_006b6c70,&DAT_028cc188);
  pcVar1 = "UIButton";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_006b75a4,&DAT_028cc190);
  _MSHookMessageEx(pcVar1,PTR_s_setImage_forState__0269cc60,FUN_006b7838,&DAT_028cc198);
  return;
}

