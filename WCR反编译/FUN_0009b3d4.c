// FUN_0009b3d4 @ 0009b3d4

void FUN_0009b3d4(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    pcVar2 = "ContactInfoViewController";
    _objc_getClass();
    pcVar3 = "AddContactToChatRoomViewController";
    _objc_getClass();
    while (local_30 != 0) {
      if (pcVar2 != (char *)0x0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar2);
        uVar1 = local_30;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
          goto LAB_0009b5bc;
        }
      }
      if (pcVar3 != (char *)0x0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar3);
        uVar1 = local_30;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
          goto LAB_0009b5bc;
        }
      }
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_18 = 0;
LAB_0009b5bc:
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

