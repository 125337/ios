// _WCRGroupingState @ 01a9aaac

void _WCRGroupingState(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    puVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028e4508);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR_WCRGroupingRuntimeState_026cf2f0;
      _objc_alloc_init();
      puVar1 = local_30;
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_setAssociatedObject(local_20,&DAT_028e4508,local_30,1);
    }
    puVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

