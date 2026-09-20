// FUN_002b4fe4 @ 002b4fe4

void FUN_002b4fe4(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *local_38;
  undefined8 local_30;
  undefined1 *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (0 < (long)puVar2) {
    local_30 = 0;
    local_18 = puVar2;
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      uVar3 = 0xd;
      FUN_002b0a2c(0);
      if ((uVar3 & 1) != 0) {
        local_30 = 3;
      }
    }
    else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_30 = 1;
    }
    else if (2 < (long)puVar2) {
      local_30 = 2;
    }
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

