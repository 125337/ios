// FUN_01bc2428 @ 01bc2428

void FUN_01bc2428(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  
  pcVar1 = "MultiRoomContactSelectViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_updateRightBtn;
    _NSSelectorFromString(&cf_updateRightBtn);
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar1 != (char *)0x0) {
      pcVar3 = pcVar1;
      _method_getImplementation();
      DAT_028e45c8 = pcVar3;
      _method_setImplementation(pcVar1,FUN_01bc24c4);
    }
  }
  return;
}

