// FUN_0040f3ac @ 0040f3ac

void FUN_0040f3ac(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 local_98;
  cfstringStruct *local_90;
  long local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined4 local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  pcVar1 = local_50;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_68 = 1;
  }
  else {
    pcVar1 = local_58;
    FUN_004107c8();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_58;
      puVar4 = PTR_s_rangeOfString_options__0269d118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_rangeOfString_options__0269d118,&cf_<_wc_custom_link_,1);
      pcVar1 = local_58;
      local_80 = pcVar2;
      local_78 = puVar4;
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = pcVar1;
        local_68 = 1;
      }
      else {
        local_88 = 0;
        local_98 = 0;
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,
                   &cf_<_wc_custom_link_[_>__>_____<__wc_custom_link_>,9,&local_98);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_88,local_98);
        pcVar1 = local_58;
        local_90 = pcVar2;
        if ((local_88 == 0) && (pcVar2 != (cfstringStruct *)0x0)) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          local_38 = 0;
          local_30 = 0;
          local_40 = pcVar3;
          local_28 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,pcVar3,&cf__1
                    );
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_58;
          local_58 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        pcVar1 = local_58;
        FUN_0040e428();
        _objc_retainAutoreleasedReturnValue();
        local_68 = 1;
        local_48 = pcVar1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = 1;
      local_48 = pcVar1;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

