// FUN_001158dc @ 001158dc

void FUN_001158dc(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined4 local_70;
  cfstringStruct *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  pcVar1 = local_50;
  FUN_00114764(local_50,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_70 = 1;
  }
  else {
    pcVar1 = local_60;
    FUN_00114cf4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_0010ee50();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    pcVar2 = local_60;
    pcVar1 = local_78;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_containsString__0269d0b0,&cf_<);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<[_>__>,0,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_80;
        local_88 = pcVar2;
        if (pcVar2 != (cfstringStruct *)0x0) {
          pcVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
          local_38 = 0;
          local_30 = 0;
          local_40 = pcVar3;
          local_28 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,pcVar3,&cf___
                    );
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_80;
          local_80 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        _objc_storeStrong(&local_88,0);
      }
      pcVar1 = local_80;
      FUN_0010ee50();
      _objc_retainAutoreleasedReturnValue();
      local_70 = 1;
      local_48 = pcVar1;
      _objc_storeStrong(&local_80,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar1;
      local_70 = 1;
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

