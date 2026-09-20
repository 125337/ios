// FUN_007a7bb4 @ 007a7bb4

uint FUN_007a7bb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint local_5c;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_5c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = local_18;
    FUN_007a80c8(local_18,local_20);
    local_5c = (uint)uVar3;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_5c & 1;
}

