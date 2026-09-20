// FUN_0013d6c4 @ 0013d6c4

void FUN_0013d6c4(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  
  if ((DAT_028c8790 & 1) == 0) {
    pcVar1 = "ThemeBoxLayout";
    _objc_getClass();
    pcVar2 = "ThemeBoxMgr";
    _objc_getClass();
    pcVar3 = "NSUserDefaults";
    _objc_getClass();
    if ((pcVar1 != (char *)0x0) || (pcVar2 != (char *)0x0)) {
      if (pcVar1 == (char *)0x0) {
        local_50 = (char *)0x0;
        local_58 = (char *)0x0;
      }
      else {
        local_50 = pcVar1;
        _class_getClassMethod(pcVar1,PTR_s_applyInputView__0269f3c0);
        local_58 = pcVar1;
        _class_getClassMethod(pcVar1,PTR_s_applyLiquidGlassInputView__0269f3c8);
      }
      if (pcVar2 == (char *)0x0) {
        local_60 = (char *)0x0;
      }
      else {
        local_60 = pcVar2;
        _class_getInstanceMethod(pcVar2,PTR_s_isOpenMsgTool_0269f3d0);
      }
      if (pcVar3 == (char *)0x0) {
        local_68 = (char *)0x0;
      }
      else {
        local_68 = pcVar3;
        _class_getInstanceMethod(pcVar3,PTR_s_boolForKey__0269f3d8);
      }
      if ((((local_50 != (char *)0x0) || (local_58 != (char *)0x0)) || (local_60 != (char *)0x0)) ||
         (local_68 != (char *)0x0)) {
        DAT_028c8790 = 1;
        if (local_50 != (char *)0x0) {
          _object_getClass(pcVar1);
          _MSHookMessageEx();
        }
        if (local_58 != (char *)0x0) {
          _object_getClass(pcVar1);
          _MSHookMessageEx();
        }
        if (local_60 != (char *)0x0) {
          _MSHookMessageEx(pcVar2,PTR_s_isOpenMsgTool_0269f3d0,FUN_00146f90,&DAT_028c87a8);
        }
        if (local_68 != (char *)0x0) {
          _MSHookMessageEx(pcVar3,PTR_s_boolForKey__0269f3d8,FUN_001470d0,&DAT_028c87b0);
        }
      }
    }
  }
  return;
}

