// FUN_0067da68 @ 0067da68

void FUN_0067da68(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_0067de38();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    FUN_0067e194();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_0067de38();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    local_20 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = local_18;
    FUN_0067e29c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_20;
    local_20 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_0067e29c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_20;
    local_20 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

