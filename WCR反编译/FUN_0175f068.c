// FUN_0175f068 @ 0175f068

void FUN_0175f068(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_358;
  cfstringStruct *local_2b0;
  cfstringStruct *local_298;
  cfstringStruct *local_248;
  bool local_1d1;
  cfstringStruct *local_1d0;
  bool local_1b9;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined8 local_1a8;
  cfstringStruct *local_1a0;
  long local_198;
  cfstringStruct *local_190;
  undefined4 local_184;
  long local_180;
  ulong local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = 0;
  _objc_storeStrong(&local_178,param_1);
  uVar2 = local_178;
  local_180 = param_2;
  if (param_2 != 200) {
    local_48 = &cf_success;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf_message;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bl1Y_H);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_184 = 1;
    goto LAB_0175fe5c;
  }
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_68 = &cf_success;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_message;
    local_50 = &cf_gRhVeT_;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_58 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_184 = 1;
    goto LAB_0175fe5c;
  }
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_248 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_248 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = local_248;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_198 = 0;
  local_1a8 = 0;
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_JSONObjectWithData_options_error_026ca480,local_178,0,&local_1a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_198,local_1a8);
  local_1a0 = pcVar3;
  if (local_198 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) == 0) goto LAB_0175f434;
    pcVar3 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_1b9 = ((ulong)pcVar5 & 1) == 0;
    if (local_1b9) {
      local_298 = &cf___;
    }
    else {
      local_298 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = local_298;
    }
    local_1b9 = !local_1b9;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = local_298;
    if (local_1b9) {
      (*(code *)PTR__objc_release_02578630)(local_1b8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1d1 = ((ulong)pcVar5 & 1) == 0;
    if (local_1d1) {
      local_2b0 = (cfstringStruct *)0x0;
    }
    else {
      local_1d0 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
      _objc_retainAutoreleasedReturnValue();
      local_2b0 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_1d1 = !local_1d1;
    if (local_1d1) {
      (*(code *)PTR__objc_release_02578630)(local_1d0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if ((local_2b0 == (cfstringStruct *)section_000000b8.segname) ||
       (pcVar3 = local_1b0,
       (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_containsString__0269d0b0,&cf_01xDD),
       ((ulong)pcVar3 & 1) != 0)) {
      local_a8 = &cf_success;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = &cf_message;
      local_90 = &cf_cCgbR;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_98 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_98,&local_a8,2);
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      pcVar3 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_containsString__0269d0b0,&cf_01xDA);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_containsString__0269d0b0,&cf_01xDC);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_containsString__0269d0b0,&cf_01xDE);
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_containsString__0269d0b0,&cf_01xDF);
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar3 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_containsString__0269d0b0,&cf_01xDB);
              if (((ulong)pcVar3 & 1) == 0) {
                local_168 = &cf_success;
                puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                local_160 = &cf_message;
                pcVar3 = local_1b0;
                local_158 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
                if (pcVar3 == (cfstringStruct *)0x0) {
                  local_358 = &cf__gw;
                }
                else {
                  local_358 = local_1b0;
                }
                local_150 = local_358;
                puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_158,&local_168,2);
                _objc_retainAutoreleasedReturnValue();
                local_170 = puVar6;
                (*(code *)PTR__objc_release_02578630)(puVar1);
              }
              else {
                local_148 = &cf_success;
                puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                local_140 = &cf_message;
                local_130 = &cf_TUS_u7b;
                puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_138 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_148,2);
                _objc_retainAutoreleasedReturnValue();
                local_170 = puVar6;
                (*(code *)PTR__objc_release_02578630)(puVar1);
              }
            }
            else {
              local_128 = &cf_success;
              puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              local_120 = &cf_message;
              local_110 = &cf_o_mxkXQg;
              puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_118 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_118,&local_128,2);
              _objc_retainAutoreleasedReturnValue();
              local_170 = puVar6;
              (*(code *)PTR__objc_release_02578630)(puVar1);
            }
          }
          else {
            local_108 = &cf_success;
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
            _objc_retainAutoreleasedReturnValue();
            local_100 = &cf_message;
            local_f0 = &cf___bgdk_Ne;
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_f8 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_108,2);
            _objc_retainAutoreleasedReturnValue();
            local_170 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar1);
          }
        }
        else {
          local_e8 = &cf_success;
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = &cf_message;
          local_d0 = &cf__OyRN;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_d8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
          _objc_retainAutoreleasedReturnValue();
          local_170 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
      }
      else {
        local_c8 = &cf_success;
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = &cf_message;
        local_b0 = &cf_o_mx__O_u;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_b8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
    }
    local_184 = 1;
    _objc_storeStrong(&local_1b0,0);
  }
  else {
LAB_0175f434:
    local_88 = &cf_success;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_80 = &cf_message;
    local_78 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_T_N_fgHev);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_70 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_88,2);
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_184 = 1;
  }
  _objc_storeStrong(&local_1a0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
LAB_0175fe5c:
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_170);
  return;
}

