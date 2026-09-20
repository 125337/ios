// FUN_000a23f0 @ 000a23f0

void FUN_000a23f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  uint local_84;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 *local_48;
  byte local_39;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_30 = 0;
  local_28 = param_1;
  local_20 = param_3;
  _objc_storeStrong(&local_30,param_4);
  if (DAT_028c8050 != (code *)0x0) {
    (*DAT_028c8050)(local_28,local_18,local_20,local_30);
  }
  local_39 = 0;
  local_84 = 0;
  if ((DAT_028c8069 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_84 = (uint)puVar1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_84 & 1) != 0) {
    DAT_028c8069 = 0;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_48 = puVar2;
    if ((long)puVar2 < 1) {
      local_4c = 1;
      goto LAB_000a2644;
    }
    local_58 = 0;
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_58 = 1;
    }
    else if (2 < (long)puVar2) {
      local_58 = 2;
    }
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(&local_60,0);
  }
  local_4c = 0;
LAB_000a2644:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

