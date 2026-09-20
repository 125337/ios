// FUN_0069e3f8 @ 0069e3f8

void FUN_0069e3f8(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool local_19;
  
  if ((DAT_028cbd78 & 1) == 0) {
    pcVar1 = "WCTableViewSectionManager";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      pcVar2 = &cf_addCell_;
      _NSSelectorFromString();
      pcVar3 = pcVar1;
      _class_getInstanceMethod(pcVar1,pcVar2);
      if (pcVar3 != (char *)0x0) {
        _MSHookMessageEx(pcVar1,pcVar2,FUN_0069e73c,&DAT_028cbd80);
      }
      pcVar2 = &cf_insertCell_At_;
      _NSSelectorFromString();
      pcVar4 = pcVar1;
      _class_getInstanceMethod(pcVar1,pcVar2);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar1,pcVar2,FUN_0069e804,&DAT_028cbd88);
      }
      local_19 = pcVar4 != (char *)0x0 || pcVar3 != (char *)0x0;
      if (local_19) {
        DAT_028cbd78 = 1;
      }
    }
  }
  return;
}

