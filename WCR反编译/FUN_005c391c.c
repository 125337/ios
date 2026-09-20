// FUN_005c391c @ 005c391c

void FUN_005c391c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_88;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  FUN_0059d260(local_18,&cf_contentDesc);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar2 = local_18;
    FUN_0059d260(local_18,&cf_contentObj);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0059d260();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_20;
    local_20 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_20 == (cfstringStruct *)0x0) {
    local_88 = &cf___;
  }
  else {
    local_88 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_88);
  return;
}

