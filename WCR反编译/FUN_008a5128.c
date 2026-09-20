// FUN_008a5128 @ 008a5128

/* WARNING: Type propagation algorithm not settling */

byte FUN_008a5128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_28 [2];
  byte local_11;
  
  local_28[1] = 0;
  _objc_storeStrong(local_28 + 1,param_1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar3 = local_28[0];
    FUN_008a47c0(local_28[0],PTR_s_hideOriginButton_026a2198,0);
    if ((uVar3 & 1) == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  return local_11 & 1;
}

