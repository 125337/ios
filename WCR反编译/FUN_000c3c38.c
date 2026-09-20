// FUN_000c3c38 @ 000c3c38

void FUN_000c3c38(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = "BaseMsgContentViewController";
  _objc_getClass();
  do {
    if (local_20 == 0) {
      local_18 = 0;
LAB_000c3d58:
      _objc_storeStrong(&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    if (pcVar2 != (char *)0x0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar2);
      uVar1 = local_20;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        goto LAB_000c3d58;
      }
    }
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}

