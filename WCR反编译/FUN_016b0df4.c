// FUN_016b0df4 @ 016b0df4

void FUN_016b0df4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint local_74;
  long local_48;
  int local_40;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x30;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
    local_40 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
    FUN_016af464();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    local_74 = 0;
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = (uint)puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_74 & 1) == 0) {
      if (599 < *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
        FUN_016abf68(&cf_N_e);
      }
      local_40 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_30,local_48)
        ;
      }
      local_40 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  if (local_40 == 0) {
    local_40 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

