// FUN_007a80c8 @ 007a80c8

uint FUN_007a80c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint local_58;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homepageCornerEnabled_0269fc40);
  local_58 = 0;
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainFrameCornerEnabled_026a1ff0);
    local_58 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      uVar2 = local_18;
      FUN_007a8254(local_18,local_20);
      local_58 = (uint)uVar2;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return local_58 & 1;
}

