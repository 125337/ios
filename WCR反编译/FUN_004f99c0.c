// FUN_004f99c0 @ 004f99c0

void FUN_004f99c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_120;
  cfstringStruct *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  long local_80;
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
    local_120 = &cf___;
  }
  else {
    local_120 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
  if (local_120 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_78 = 1;
  }
  else {
    lVar3 = local_58;
    FUN_004f9578();
    _objc_retainAutoreleasedReturnValue();
    local_80 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    pcVar4 = local_68;
    if (lVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar4;
      local_78 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_containsString__0269d0b0,&cf_<_wc_custom_link_);
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_68;
        FUN_004fa134(local_68,local_80,local_80,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_78 = 1;
        local_48 = pcVar4;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,
                   &cf_<_wc_custom_link_[_s_S]*_<__wc_custom_link_>,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_88 = puVar5;
        if (puVar5 == (undefined *)0x0) {
          pcVar4 = local_68;
          FUN_004fa134(local_68,local_80,local_80,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_78 = 1;
          local_48 = pcVar4;
        }
        else {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_68;
          puVar5 = local_88;
          local_98 = (cfstringStruct *)0x0;
          pcVar6 = local_68;
          local_90 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
          pcVar1 = local_68;
          local_38 = 0;
          local_30 = 0;
          local_a8 = 0;
          local_f0 = PTR___NSConcreteGlobalBlock_02578658;
          local_e8 = 0xd0800000;
          local_e4 = 0;
          local_e0 = FUN_004fa3a8;
          local_d8 = &DAT_0257a378;
          local_b0 = (undefined **)&local_98;
          local_a0 = pcVar6;
          local_40 = pcVar6;
          local_28 = pcVar6;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar4 = local_90;
          local_d0 = pcVar1;
          (*(code *)PTR__objc_retain_02578638)();
          lVar3 = local_80;
          local_c8 = pcVar4;
          (*(code *)PTR__objc_retain_02578638)();
          uVar2 = local_60;
          local_c0 = lVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_enumerateMatchesInString_options_0269ef28,pcVar7,0,local_a8,
                     local_a0,&local_f0);
          pcVar4 = local_98;
          pcVar7 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
          if (pcVar4 < pcVar7) {
            pcVar7 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_substringFromIndex__0269d120,local_98);
            _objc_retainAutoreleasedReturnValue();
            local_f8 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_length_0269cca0);
            pcVar4 = local_90;
            if (pcVar7 != (cfstringStruct *)0x0) {
              pcVar7 = local_f8;
              FUN_004fa134(local_f8,local_80,local_80,local_60);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_appendString__0269ccb0);
              (*(code *)PTR__objc_release_02578630)(pcVar7);
            }
            _objc_storeStrong(&local_f8,0);
          }
          pcVar4 = local_90;
          (*(code *)PTR__objc_retain_02578638)();
          local_48 = pcVar4;
          local_78 = 1;
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_c8,0);
          _objc_storeStrong(&local_d0,0);
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

