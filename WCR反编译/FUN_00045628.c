// FUN_00045628 @ 00045628

void FUN_00045628(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  long lStack_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  long lStack_d8;
  cfstringStruct *local_d0;
  undefined *puStack_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  long local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_1);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_2);
  pcVar1 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = &cf___;
    local_98 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_a0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_80;
    puVar3 = PTR_s_rangeOfString_options__0269d118;
    local_a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString_options__0269d118,local_a0,1)
    ;
    local_b8 = pcVar1;
    puStack_b0 = puVar3;
    if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = &cf___;
      local_98 = 1;
    }
    else {
      pcVar5 = local_80;
      local_d0 = pcVar1;
      puStack_c8 = puVar3;
      local_c0 = (cfstringStruct *)(puVar3 + (long)&pcVar1->field0_0x0);
      local_30 = pcVar1;
      local_28 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      pcVar6 = local_c0;
      if ((cfstringStruct *)(puVar3 + (long)&pcVar1->field0_0x0) < pcVar5) {
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        lStack_f8 = (long)pcVar1 - (long)local_c0;
        local_48 = pcVar6;
        local_40 = pcVar6;
        local_e0 = pcVar6;
        local_100 = pcVar6;
        pcVar1 = local_80;
        puVar3 = PTR_s_rangeOfString_options_range__0269d130;
        lStack_d8 = lStack_f8;
        local_50 = lStack_f8;
        local_38 = lStack_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_rangeOfString_options_range__0269d130,local_a8,1,pcVar6,lStack_f8)
        ;
        local_f0 = pcVar1;
        local_e8 = puVar3;
        if ((pcVar1 == (cfstringStruct *)0x7fffffffffffffff) || (pcVar1 < local_c0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = &cf___;
          local_98 = 1;
        }
        else {
          local_70 = (long)pcVar1 - (long)local_c0;
          local_68 = local_c0;
          local_60 = local_c0;
          pcVar6 = local_80;
          local_58 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_substringWithRange__0269d138,local_c0,local_70);
          _objc_retainAutoreleasedReturnValue();
          local_108 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_<_[CDATA[,&cf___);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_108;
          local_108 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar6 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___>,&cf___);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_108;
          local_108 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_108;
          FUN_000370d0();
          _objc_retainAutoreleasedReturnValue();
          local_98 = 1;
          local_78 = pcVar1;
          _objc_storeStrong(&local_108,0);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = &cf___;
        local_98 = 1;
      }
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue(local_78);
  return;
}

