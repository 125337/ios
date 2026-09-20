// FUN_0071daac @ 0071daac

void FUN_0071daac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint local_74;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar3 = param_1 + 0x38;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar3;
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
    local_34 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_40 = 0;
      local_48 = 0;
      FUN_0071d13c(local_30,&local_48);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_storeStrong(&local_40,local_48);
      _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28,local_40);
      _objc_storeStrong(&local_40,0);
    }
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    local_74 = 0;
    if (lVar3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = (uint)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if ((local_74 & 1) == 0) {
      if (599 < *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
        FUN_0071cee0(local_30,0,&cf_N_e);
      }
      local_34 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
      FUN_0071c37c(local_30,0,*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

