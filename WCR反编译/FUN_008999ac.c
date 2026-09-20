// FUN_008999ac @ 008999ac

void FUN_008999ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  (*DAT_028cdc50)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar3 = param_1;
  FUN_008a2fb0(param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

