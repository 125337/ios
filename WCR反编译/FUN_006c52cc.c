// FUN_006c52cc @ 006c52cc

void FUN_006c52cc(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_20;
  FUN_006ce608();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar1 = local_30;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_28;
    FUN_006ce608(0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = local_30;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_DDA0DD;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

