// FUN_004da4f0 @ 004da4f0

void FUN_004da4f0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  FUN_004db454();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_28;
    FUN_004db454(0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_30 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_80 = &cf_66CD00;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

