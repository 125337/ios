// FUN_00112698 @ 00112698

void FUN_00112698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined4 local_50;
  long local_40;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_50 = 1;
  }
  else {
    pcVar1 = local_30;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString__0269d838,local_40);
    local_60 = pcVar1;
    local_58 = puVar4;
    if ((pcVar1 == (cfstringStruct *)0x7fffffffffffffff) || (pcVar1 == (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_50 = 1;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_38;
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if ((lVar2 != 0) &&
         (pcVar1 = local_68, puVar4 = PTR_s_rangeOfString_options__0269d118,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_rangeOfString_options__0269d118,local_38,4), local_78 = pcVar1,
         local_70 = puVar4, pcVar1 != (cfstringStruct *)0x7fffffffffffffff)) {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_substringFromIndex__0269d120,puVar4 + (long)pcVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_68;
        local_68 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar3 = local_68;
      FUN_0010ee50();
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,&cf___);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,&cf___);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_80;
      FUN_0010ee50();
      _objc_retainAutoreleasedReturnValue();
      local_50 = 1;
      local_28 = pcVar1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

