// FUN_006bfb0c @ 006bfb0c

void FUN_006bfb0c(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_006bfc18,&DAT_028cc1c0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_006bfc60,&DAT_028cc1c8);
  pcVar1 = "MMTitleView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_006bfc9c,&DAT_028cc1d0);
  pcVar1 = "NewRemarkViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_006bfdac,&DAT_028cc1d8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_006bfe0c,&DAT_028cc1e0);
  _MSHookMessageEx(pcVar1,PTR_s_DismissRemarkViewControllerAnima_026a68d8,FUN_006bfe6c,&DAT_028cc1e8
                  );
  return;
}

