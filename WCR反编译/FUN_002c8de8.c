// FUN_002c8de8 @ 002c8de8

undefined8 FUN_002c8de8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_floatingTabBarCustomLayoutEnable_026a19f0);
  if (((ulong)puVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatingTabBarIconSizeAdjustment_026a1ad8);
    FUN_002adba4(param_1,0xc034000000000000,0x4034000000000000);
    local_18 = param_1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

