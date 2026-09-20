// FUN_002779fc @ 002779fc

void FUN_002779fc(long param_1)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    pcVar3 = "WCFinderBaseCgi";
    _objc_getClass();
    pcVar4 = "WCFinderXLabSwitchModel";
    _objc_getClass();
    bVar1 = false;
    if (pcVar3 != (char *)0x0) {
      _class_getClassMethod(pcVar3,PTR_s__canUse266_026a1600);
      bVar1 = pcVar3 != (char *)0x0;
    }
    bVar2 = false;
    if (pcVar4 != (char *)0x0) {
      _class_getInstanceMethod(pcVar4,PTR_s_enableH266Dec_026a1608);
      bVar2 = pcVar4 != (char *)0x0;
    }
    if ((bVar1) || (bVar2)) {
      pcVar3 = "WCFinderBaseCgi";
      _objc_getClass();
      _object_getClass();
      _MSHookMessageEx(pcVar3,PTR_s__canUse266_026a1600,FUN_00277c30,&DAT_028c95b0);
      pcVar3 = "WCFinderXLabSwitchModel";
      _objc_getClass();
      _MSHookMessageEx(pcVar3,PTR_s_enableH266Dec_026a1608,FUN_00277cf4,&DAT_028c95b8);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

