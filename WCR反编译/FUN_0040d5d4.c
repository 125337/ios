// FUN_0040d5d4 @ 0040d5d4

void FUN_0040d5d4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_f8;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  pcVar1 = local_40;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_48;
  local_50 = pcVar1;
  FUN_0040de6c();
  if (((pcVar1 == (cfstringStruct *)0x7fffffffffffffff) || (lVar3 == 0)) ||
     (pcVar2 = local_50, local_30 = pcVar1, local_28 = lVar3,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar2 < (cfstringStruct *)((long)&pcVar1->field0_0x0 + lVar3))) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf___;
  }
  else {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringWithRange__0269d138,pcVar1,lVar3);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_f8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_f8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

