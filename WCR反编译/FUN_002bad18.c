// FUN_002bad18 @ 002bad18

byte FUN_002bad18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_11 = ((ulong)puVar2 & 1) == 0;
  if ((bool)local_11) {
    FUN_002be008(local_20);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

