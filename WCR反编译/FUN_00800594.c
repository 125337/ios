// FUN_00800594 @ 00800594

void FUN_00800594(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_1c = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      FUN_00800738(0);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar3;
      if (puVar3 != (undefined1 *)0x0) {
        FUN_007f3908(puVar3,&PTR___NSConcreteGlobalBlock_02580360);
      }
      local_1c = (uint)(puVar3 == (undefined1 *)0x0);
      _objc_storeStrong(&local_28,0);
    }
    else {
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

