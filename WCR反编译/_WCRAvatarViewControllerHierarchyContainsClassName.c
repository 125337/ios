// _WCRAvatarViewControllerHierarchyContainsClassName @ 00938434

byte _WCRAvatarViewControllerHierarchyContainsClassName(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *local_40;
  char *local_38;
  int local_2c;
  char *local_28;
  char *local_20;
  byte local_11;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == (char *)0x0) ||
     (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     pcVar2 = local_28, pcVar1 == (char *)0x0)) {
    iVar3 = 1;
    local_11 = 0;
    local_2c = 1;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_UTF8String_026a2e68);
    pcVar1 = local_20;
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      iVar3 = 1;
      local_11 = 0;
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = pcVar1;
      while (local_40 != (char *)0x0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
        _class_getName();
        if ((pcVar2 != (char *)0x0) && (pcVar2 = _strstr(pcVar2,local_38), pcVar2 != (char *)0x0)) {
          local_11 = 1;
          local_2c = 1;
          goto LAB_009385d4;
        }
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_40;
        local_40 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      local_2c = 2;
LAB_009385d4:
      _objc_storeStrong(&local_40,0);
      iVar3 = local_2c + -2;
      if (iVar3 == 0) {
        iVar3 = 1;
        local_11 = 0;
        local_2c = 1;
      }
    }
  }
  _objc_storeStrong(iVar3,&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

