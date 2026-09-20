// FUN_0084dc30 @ 0084dc30

void FUN_0084dc30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0084d494(uVar1,(ulong)puVar3 & 0xffffffff);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_18,0);
  return;
}

