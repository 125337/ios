// FUN_003ffa34 @ 003ffa34

void FUN_003ffa34(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *local_28;
  undefined *local_18;
  
  local_18 = (undefined1 *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != (undefined1 *)0x0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_28 != (undefined1 *)0x0) &&
       (local_28 != (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
      local_28 = (undefined1 *)0x0;
    }
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedSegmentIndex_0269e998);
    if (puVar1 != local_28) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setSelectedSegmentIndex__0269e9e0,local_28);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

