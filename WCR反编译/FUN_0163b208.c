// FUN_0163b208 @ 0163b208

void FUN_0163b208(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    _WCRSuperFloatShutdown();
  }
  else {
    FUN_0163aeec();
    _WCRSuperFloatApplyRuntimeState();
  }
  _objc_storeStrong(&local_20,0);
  return;
}

