// FUN_0053d1f0 @ 0053d1f0

void FUN_0053d1f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_30 = puVar1;
  FUN_0054255c();
  if ((uVar2 & 1) == 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsDraftEnabled_026a4d60);
    if (((ulong)puVar1 & 1) == 0) {
      (*DAT_028cb2c8)(local_18,local_20,local_28);
      local_40 = 0;
    }
    else {
      uVar2 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026f4360);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefineShowCustomSaveDraftAlert_026a4cb8);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_doExit_026a4d68);
      }
      local_40 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_doExit_026a4d68);
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

