// FUN_00eae82c @ 00eae82c

void FUN_00eae82c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  long local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_70 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_70,param_1);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_2);
  pcVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = &cf___;
    local_7c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_70;
    puVar3 = PTR_s_rangeOfString__0269d838;
    local_90 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rangeOfString__0269d838,local_88);
    if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf___;
    }
    else {
      pcVar1 = (cfstringStruct *)(puVar3 + (long)&pcVar1->field0_0x0);
      pcVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      pcVar6 = local_70;
      puVar3 = local_90;
      if (pcVar1 < pcVar5) {
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        local_40 = (long)pcVar5 - (long)pcVar1;
        local_38 = pcVar1;
        local_30 = pcVar1;
        local_28 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_rangeOfString_options_range__0269d130,puVar3,0,pcVar1,local_40);
        if (pcVar6 == (cfstringStruct *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = &cf___;
        }
        else {
          local_60 = (long)pcVar6 - (long)pcVar1;
          pcVar6 = local_70;
          local_58 = pcVar1;
          local_50 = pcVar1;
          local_48 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_substringWithRange__0269d138,pcVar1,local_60);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = pcVar6;
          FUN_00eae708();
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = &cf___;
      }
    }
    local_7c = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

