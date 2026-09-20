// FUN_01e72c78 @ 01e72c78

void FUN_01e72c78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  FUN_01e6df84();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardWebRuntimeStorage_026c73d8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_30 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  puVar3 = puVar1;
  FUN_01e9474c(puVar1,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

