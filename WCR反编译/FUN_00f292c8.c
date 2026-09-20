// FUN_00f292c8 @ 00f292c8

void FUN_00f292c8(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  ulong local_38;
  int local_2c;
  char *local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = "VoIPReceiverViewController";
  _objc_getClass();
  uVar1 = local_20;
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_18 = 0;
    iVar4 = 1;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar1;
    while (local_38 != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,local_28);
      uVar1 = local_38;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_2c = 1;
        goto LAB_00f293d4;
      }
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_2c = 2;
LAB_00f293d4:
    _objc_storeStrong(&local_38,0);
    iVar4 = local_2c + -2;
    if (iVar4 == 0) {
      local_18 = 0;
      iVar4 = 1;
      local_2c = 1;
    }
  }
  _objc_storeStrong(iVar4,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

