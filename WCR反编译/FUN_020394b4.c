// FUN_020394b4 @ 020394b4

void FUN_020394b4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    _NSHomeDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_58 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_58;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,local_40),
       pcVar1 = local_28, ((ulong)pcVar2 & 1) == 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

