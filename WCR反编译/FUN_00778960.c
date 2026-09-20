// FUN_00778960 @ 00778960

void FUN_00778960(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  
  pcVar1 = "NewMainFrameCell";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _class_getInstanceMethod(pcVar1,PTR_s_layoutSubviews_0269de80);
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
      _method_getImplementation();
      if (pcVar3 + -0x778ae8 != (char *)0x0) {
        pcVar4 = pcVar2;
        _method_getImplementation(pcVar3 + -0x778ae8);
        DAT_028cc9a0 = pcVar4;
        _method_setImplementation(pcVar2,FUN_00778ae8);
      }
    }
    pcVar5 = &cf_onMenuOffsetChange_menuWidth_;
    _NSSelectorFromString();
    _class_getInstanceMethod(pcVar1,pcVar5);
    if (pcVar1 != (char *)0x0) {
      pcVar2 = pcVar1;
      _method_getImplementation();
      if (pcVar2 + -0x778b68 != (char *)0x0) {
        pcVar3 = pcVar1;
        _method_getImplementation(pcVar2 + -0x778b68);
        DAT_028cc9a8 = pcVar3;
        _method_setImplementation(pcVar1,FUN_00778b68);
      }
    }
  }
  pcVar1 = "NewContactsItemCell";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _class_getSuperclass();
    DAT_028cc9b0 = pcVar2;
    FUN_00778c3c(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00778d60,&DAT_028cc9b8);
    pcVar5 = &cf_onMenuOffsetChange_menuWidth_;
    _NSSelectorFromString(&cf_onMenuOffsetChange_menuWidth_);
    FUN_00778c3c(pcVar1,pcVar5,FUN_00778e18,&DAT_028cc9c0);
  }
  return;
}

