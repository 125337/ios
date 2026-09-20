// FUN_00fbcfcc @ 00fbcfcc

void FUN_00fbcfcc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20);
  pcVar1 = local_20;
  FUN_00fbc9a4();
  local_30 = pcVar1;
  local_28 = param_1;
  if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_34 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_substringWithRange__0269d138,pcVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    FUN_00fcb09c(pcVar2,&cf_displayname);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar2;
    FUN_00fcbb68();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_40;
    FUN_00fcb09c(local_40,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_00fcbb68();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       ((pcVar2 = local_50, FUN_00fba334(pcVar1), ((ulong)pcVar2 & 1) != 0 ||
        (pcVar1 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_<),
        ((ulong)pcVar1 & 1) != 0)))) {
      pcVar1 = local_50;
      FUN_00fba4e0();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        _objc_storeStrong(pcVar1,&local_50,local_58);
      }
      _objc_storeStrong(&local_58,0);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_18 = local_48;
      pcVar1 = local_50;
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

