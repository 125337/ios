// FUN_002cae04 @ 002cae04

byte FUN_002cae04(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long local_40;
  undefined1 *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_floatingTabBarBackgroundStyleInd_026a1a48);
  local_11 = false;
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonEnabled_0269e4c0);
    local_11 = false;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_floatingTabBarBackgroundMediaLay_026a1ab0);
      local_11 = false;
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        local_40 = local_20;
        FUN_002b0af0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        lVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = lVar4 != 0;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

