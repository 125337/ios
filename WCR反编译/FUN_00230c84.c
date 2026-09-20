// FUN_00230c84 @ 00230c84

byte FUN_00230c84(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_customAvatarFeatureEnabled_026a0958);
      if (((ulong)puVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_28;
        FUN_0022b864();
        if ((uVar1 & 1) == 0) {
          puVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_customAvatarContactEnabledIDs_026a09d8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_11 = (byte)puVar3 & 1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          puVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_customAvatarGroupEnabledIDs_026a09d0)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_11 = (byte)puVar3 & 1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

