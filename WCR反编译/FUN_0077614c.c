// FUN_0077614c @ 0077614c

void FUN_0077614c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint local_80;
  uint local_64;
  uint local_34;
  uint local_30;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = (uint)puVar3;
    local_64 = 1;
    if (((ulong)puVar3 & 1) != 0) {
      FUN_00774728();
      local_64 = uVar1 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_64 & 1) == 0) {
      DAT_028cc998 = 1;
      local_30 = 0;
      local_34 = 0;
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_m7StepCount_026a7ea0);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m7StepCount_026a7ea0);
        local_30 = (uint)uVar4;
      }
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_hkStepCount_026a7ea8);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hkStepCount_026a7ea8);
        local_34 = (uint)uVar4;
      }
      DAT_028cc998 = 0;
      if (local_30 < local_34) {
        local_80 = local_34;
      }
      else {
        local_80 = local_30;
      }
      uVar1 = local_80;
      FUN_0077474c(local_80,1);
      if ((uVar1 != 0) || (local_80 != 0)) {
        uVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setHkStepCount__026a7f50);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHkStepCount__026a7f50,uVar1);
        }
        uVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setM7StepCount__026a7f58);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setM7StepCount__026a7f58,uVar1);
        }
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

