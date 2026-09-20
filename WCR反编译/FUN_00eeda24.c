// FUN_00eeda24 @ 00eeda24

void FUN_00eeda24(void)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  char *local_38;
  
  local_38 = "MultiRoomContactSelectViewController";
  _objc_getClass();
  if (local_38 == (char *)0x0) {
    local_38 = (char *)0x0;
  }
  else {
    pcVar1 = &cf_updateRightBtn;
    _NSSelectorFromString(&cf_updateRightBtn);
    _class_getInstanceMethod(local_38,pcVar1);
  }
  if (local_38 != (char *)0x0) {
    pcVar2 = local_38;
    _method_getImplementation();
    DAT_028e2ac8 = pcVar2;
    _method_setImplementation(local_38,FUN_00eedad4);
  }
  return;
}

