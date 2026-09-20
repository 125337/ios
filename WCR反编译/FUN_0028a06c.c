// FUN_0028a06c @ 0028a06c

void FUN_0028a06c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
    FUN_002893d0(local_18,0);
  }
  else {
    FUN_00286910(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

