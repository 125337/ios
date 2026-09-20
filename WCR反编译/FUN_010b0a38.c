// FUN_010b0a38 @ 010b0a38

void FUN_010b0a38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    local_38 = (cfstringStruct *)0x0;
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    FUN_010aaf58();
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = pcVar3;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

