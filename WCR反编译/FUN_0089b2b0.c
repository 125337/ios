// FUN_0089b2b0 @ 0089b2b0

void FUN_0089b2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar1 = PTR__OBJC_CLASS___UIDropProposal_026ce9f8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithDropOperation__026a9868,2);
    local_18 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIDropProposal_026ce9f8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithDropOperation__026a9868,0);
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

