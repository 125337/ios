// FUN_0004a764 @ 0004a764

void FUN_0004a764(void)

{
  char *pcVar1;
  
  pcVar1 = "MultiDeviceManageViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_0004a7ac,&DAT_028c7b70);
  return;
}

