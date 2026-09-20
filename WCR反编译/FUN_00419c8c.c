// FUN_00419c8c @ 00419c8c

void FUN_00419c8c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x50) == 1) {
    FUN_004147f8(*(undefined8 *)(param_1 + 0x20),*(byte *)(param_1 + 0x58) & 1,
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0,
                 *(undefined8 *)(param_1 + 0x38));
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      FUN_00414e40(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30),0);
      FUN_00415f58(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40));
    }
    lVar1 = *(long *)(param_1 + 0x48);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00416224();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_28 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x48),PTR_s_length_0269cca0);
    }
    else {
      FUN_0041694c(local_28,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

