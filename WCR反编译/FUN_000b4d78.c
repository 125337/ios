// FUN_000b4d78 @ 000b4d78

void FUN_000b4d78(void)

{
  undefined *puVar1;
  undefined1 *local_58;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 *local_20;
  undefined1 *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_floatingTabBarEnabled_0269e4b8);
  local_58 = local_18;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_discoverClickToTimelineHapticInd_0269e510);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingTabBarSwitchHapticIndex_0269e508);
  }
  local_20 = local_58;
  if ((long)local_58 < 1) {
    local_30 = 1;
  }
  else {
    local_38 = 0;
    if (local_58 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_38 = 3;
    }
    else if (local_58 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_38 = 1;
    }
    else if (2 < (long)local_58) {
      local_38 = 2;
    }
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,local_38);
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(&local_40,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

