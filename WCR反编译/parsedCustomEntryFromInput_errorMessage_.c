// parsedCustomEntryFromInput:errorMessage: @ 01778150

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginHubManager::parsedCustomEntryFromInput_errorMessage_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_240;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  undefined4 local_18c;
  cfstringStruct *local_188;
  ID *local_180;
  cfstringStruct *local_178;
  SEL local_170;
  ID local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = (cfstringStruct *)0x0;
  local_170 = param_2;
  local_168 = param_1;
  _objc_storeStrong(&local_178,param_3);
  pcVar1 = local_178;
  local_180 = param_4;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_188 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    if (local_180 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_180 = (ID)&cf_eQQ_;
    }
    local_160 = (undefined *)0x0;
    local_18c = 1;
  }
  else {
    pcVar1 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_198 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    if (pcVar1 == (cfstringStruct *)0x3) {
      pcVar1 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_0176d368();
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_0176d368();
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectAtIndexedSubscript__0269cc78,2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_0176d368();
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_1b0, (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0)
         , pcVar1 == (cfstringStruct *)0x0)) {
        if (local_180 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_180 = (ID)&cf_TyT__NkN_Nzz;
        }
        local_160 = (undefined *)0x0;
        local_18c = 1;
      }
      else {
        pcVar1 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar1 = local_1b0;
          _NSClassFromString();
          if (pcVar1 == (cfstringStruct *)0x0) {
            pcVar1 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
            if (pcVar1 == (cfstringStruct *)0x0) {
              if (local_180 != (ID *)0x0) {
                _objc_retainAutorelease();
                *local_180 = (ID)&cf_c6RvQNcN;
              }
              local_160 = (undefined *)0x0;
              local_18c = 1;
            }
            else {
              pcVar1 = local_1a8;
              FUN_0176f7a0();
              _objc_retainAutoreleasedReturnValue();
              local_1b8 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
              if (pcVar1 == (cfstringStruct *)0x0) {
                if (local_180 != (ID *)0x0) {
                  _objc_retainAutorelease();
                  *local_180 = (ID)&cf_p;
                }
                local_160 = (undefined *)0x0;
              }
              else {
                local_118 = &cf_kind;
                local_f0 = &cf_switch;
                local_110 = &cf_title;
                local_e8 = local_1a0;
                local_108 = &cf_key;
                local_e0 = local_1b0;
                local_100 = &cf_storage;
                local_d8 = local_1b8;
                local_f8 = &cf_enabled;
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_d0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f0,&local_118,5);
                _objc_retainAutoreleasedReturnValue();
                local_160 = puVar4;
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              local_18c = 1;
              _objc_storeStrong(&local_1b8,0);
            }
          }
          else {
            local_c8 = &cf_kind;
            local_a0 = &cf_controller;
            local_c0 = &cf_title;
            local_98 = local_1a0;
            local_b8 = &cf_version;
            if (local_1a8 == (cfstringStruct *)0x0) {
              local_240 = &::cf___;
            }
            else {
              local_240 = local_1a8;
            }
            local_90 = local_240;
            local_b0 = &cf_controller;
            local_88 = local_1b0;
            local_a8 = &cf_enabled;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_80 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_a0,&local_c8,5);
            _objc_retainAutoreleasedReturnValue();
            local_160 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_18c = 1;
          }
        }
        else {
          local_78 = &cf_kind;
          local_50 = &cf_switch;
          local_70 = &cf_title;
          local_48 = local_1a0;
          local_68 = &cf_key;
          local_40 = local_1b0;
          local_60 = &cf_storage;
          local_38 = &cf_wcr;
          local_58 = &cf_enabled;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
          _objc_retainAutoreleasedReturnValue();
          local_160 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_18c = 1;
        }
      }
      _objc_storeStrong(&local_1b0);
      _objc_storeStrong(&local_1a8,0);
      _objc_storeStrong(&local_1a0,0);
    }
    else {
      pcVar1 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0);
      if (pcVar1 == (cfstringStruct *)0x2) {
        pcVar1 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_0176d368();
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_0176d368();
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (pcVar1 = local_1c8,
           (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0),
           pcVar1 == (cfstringStruct *)0x0)) {
          if (local_180 != (ID *)0x0) {
            _objc_retainAutorelease();
            *local_180 = (ID)&cf_TyT;
          }
          local_160 = (undefined *)0x0;
        }
        else {
          local_158 = &cf_kind;
          local_138 = &cf_switch;
          local_150 = &cf_title;
          local_130 = local_1c0;
          local_148 = &cf_key;
          local_128 = local_1c8;
          local_140 = &cf_enabled;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_120 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_158,4);
          _objc_retainAutoreleasedReturnValue();
          local_160 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_18c = 1;
        _objc_storeStrong(&local_1c8);
        _objc_storeStrong(&local_1c0,0);
      }
      else {
        if (local_180 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_180 = (ID)&cf_n_uTy_;
        }
        local_160 = (undefined *)0x0;
        local_18c = 1;
      }
    }
    _objc_storeStrong(&local_198,0);
  }
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_160;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

