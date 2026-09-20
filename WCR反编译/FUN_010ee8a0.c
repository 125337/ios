// FUN_010ee8a0 @ 010ee8a0

void FUN_010ee8a0(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  
  if ((DAT_028e3442 & 1) == 0) {
    DAT_028e3442 = 1;
    pcVar1 = "WCColorMgr";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      pcVar2 = &cf_loadNormalColorFromXML;
      _NSSelectorFromString();
      pcVar3 = &cf_loadSpecialColorFromXML;
      _NSSelectorFromString();
      pcVar4 = pcVar1;
      _class_getInstanceMethod(pcVar1,pcVar2);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar1,pcVar2,FUN_010efbf4,&DAT_028e3448);
      }
      pcVar4 = pcVar1;
      _class_getInstanceMethod(pcVar1,pcVar3);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar1,pcVar3,FUN_010efc88,&DAT_028e3450);
      }
    }
    pcVar1 = "MMThemeManager";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      pcVar2 = &cf_loadSimpleRuleSets;
      _NSSelectorFromString();
      pcVar3 = &cf_loadRuleSets;
      _NSSelectorFromString();
      pcVar5 = &cf_loadColors;
      _NSSelectorFromString();
      pcVar4 = pcVar1;
      _class_getInstanceMethod(pcVar1,pcVar2);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar1,pcVar2,FUN_010efd1c,&DAT_028e3458);
      }
      pcVar4 = pcVar1;
      _class_getInstanceMethod(pcVar1,pcVar3);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar1,pcVar3,FUN_010efda8,&DAT_028e3460);
      }
      pcVar4 = pcVar1;
      _class_getInstanceMethod(pcVar1,pcVar5);
      if (pcVar4 != (char *)0x0) {
        _MSHookMessageEx(pcVar1,pcVar5,FUN_010efe34,&DAT_028e3468);
      }
    }
  }
  return;
}

