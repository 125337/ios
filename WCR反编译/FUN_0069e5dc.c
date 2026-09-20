// FUN_0069e5dc @ 0069e5dc

void FUN_0069e5dc(void)

{
  undefined *puVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = "MoreViewController";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    if ((DAT_028cbda0 & 1) == 0) {
      pcVar3 = &cf_pushPluginController;
      _NSSelectorFromString();
      pcVar4 = pcVar2;
      _class_getInstanceMethod(pcVar2,pcVar3);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar2,pcVar3,FUN_0069f200,&DAT_028cbda8);
        DAT_028cbda0 = 1;
      }
    }
    puVar1 = PTR_s_viewWillAppear__0269cd48;
    if ((DAT_028cbdb0 & 1) == 0) {
      pcVar4 = pcVar2;
      _class_getInstanceMethod(pcVar2,PTR_s_viewWillAppear__0269cd48);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar2,puVar1,FUN_0069f3a8,&DAT_028cbdb8);
      }
      puVar1 = PTR_s_viewDidAppear__0269cd50;
      pcVar5 = pcVar2;
      _class_getInstanceMethod(pcVar2,PTR_s_viewDidAppear__0269cd50);
      if (pcVar5 != (char *)0x0) {
        _MSHookMessageEx(pcVar2,puVar1,FUN_0069f4a8,&DAT_028cbdc0);
      }
      if (pcVar5 != (char *)0x0 || pcVar4 != (char *)0x0) {
        DAT_028cbdb0 = 1;
      }
    }
  }
  return;
}

