// FUN_00260a88 @ 00260a88

void FUN_00260a88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint local_64;
  long local_48;
  byte local_39;
  undefined *local_38;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9478)(param_1,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_64 = 0;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
    local_64 = 0;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_64 = (uint)puVar3 ^ 1;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_64 & 1) == 0) {
    local_48 = 0;
    lVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_actionSheet);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_48;
    local_48 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_48 != 0) {
      FUN_00261dd0(local_48);
    }
    _objc_storeStrong(&local_48,0);
  }
  return;
}

