// FUN_000ca7a8 @ 000ca7a8

void FUN_000ca7a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint local_54;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_54 = 1;
  if (local_18 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_54 & 1) == 0) {
    lVar3 = local_18;
    FUN_000cab58();
    if (lVar3 == 0) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
      }
    }
    else {
      lVar3 = local_18;
      FUN_000caeb0();
      _objc_retainAutoreleasedReturnValue();
      FUN_000c8498();
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

