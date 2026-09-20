// FUN_00120cdc @ 00120cdc

void FUN_00120cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_118;
  cfstringStruct *local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined4 local_78;
  cfstringStruct *local_68;
  undefined8 local_60;
  long local_58;
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
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  if (local_50 == (cfstringStruct *)0x0) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
  if (local_118 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_78 = 1;
  }
  else {
    lVar3 = local_58;
    FUN_00121400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    pcVar5 = local_68;
    if (lVar4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar5;
      local_78 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_containsString__0269d0b0,&cf_<_wc_custom_link_);
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_68;
        FUN_001220d8(local_68,local_58,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_78 = 1;
        local_48 = pcVar5;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,
                   &cf_<_wc_custom_link_[_s_S]*_<__wc_custom_link_>,0,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
        local_80 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_68;
        puVar6 = local_80;
        local_90 = (cfstringStruct *)0x0;
        pcVar7 = local_68;
        local_88 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        pcVar1 = local_68;
        local_38 = 0;
        local_30 = 0;
        local_a0 = 0;
        local_e8 = PTR___NSConcreteGlobalBlock_02578658;
        local_e0 = 0xd0800000;
        local_dc = 0;
        local_d8 = FUN_00122d14;
        local_d0 = &DAT_0257a378;
        local_a8 = (undefined **)&local_90;
        local_98 = pcVar7;
        local_40 = pcVar7;
        local_28 = pcVar7;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar5 = local_88;
        local_c8 = pcVar1;
        (*(code *)PTR__objc_retain_02578638)();
        lVar3 = local_58;
        local_c0 = pcVar5;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_60;
        local_b8 = lVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_enumerateMatchesInString_options_0269ef28,pcVar8,0,local_a0,local_98
                   ,&local_e8);
        pcVar5 = local_90;
        pcVar8 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (pcVar5 < pcVar8) {
          pcVar8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_substringFromIndex__0269d120,local_90);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
          pcVar5 = local_88;
          if (pcVar8 != (cfstringStruct *)0x0) {
            pcVar8 = local_f0;
            FUN_001220d8(local_f0,local_58,local_60);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
          _objc_storeStrong(&local_f0,0);
        }
        pcVar5 = local_88;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = pcVar5;
        local_78 = 1;
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
      }
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

