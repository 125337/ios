// FUN_00efce44 @ 00efce44

void FUN_00efce44(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_1a0;
  cfstringStruct *local_188;
  uint local_164;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined4 local_88;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_78,param_1);
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_2);
  pcVar2 = local_78;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_81 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar3 = local_78;
  if (((ulong)pcVar2 & 1) == 0) {
    local_70 = (undefined *)0x0;
    local_88 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_00eeec64();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
       pcVar2 == (cfstringStruct *)0x0)) {
      local_70 = (undefined *)0x0;
      local_88 = 1;
    }
    else {
      pcVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_cN6e_);
      if ((((ulong)pcVar2 & 1) != 0) &&
         (pcVar2 = local_a0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_wcr_settings),
         ((ulong)pcVar2 & 1) == 0)) {
        _objc_storeStrong(&local_a0,&cf_wcr_settings);
      }
      pcVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_T_N);
      if ((((ulong)pcVar2 & 1) == 0) ||
         (pcVar2 = local_a0,
         (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_hasPrefix__0269d320,&cf_chat_),
         ((ulong)pcVar2 & 1) != 0)) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_68 = &cf_title;
        local_48 = local_98;
        local_60 = &cf_action;
        local_40 = local_a0;
        local_58 = &cf__wcrEnabled;
        pcVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_b1 = 0;
        if (((ulong)pcVar3 & 1) == 0) {
          local_164 = local_81 & 1;
        }
        else {
          pcVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
          _objc_retainAutoreleasedReturnValue();
          local_b1 = 1;
          local_b0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_164 = (uint)pcVar3;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInt__0269d810,local_164);
        _objc_retainAutoreleasedReturnValue();
        local_50 = &cf__wcrSource;
        pcVar3 = local_90;
        local_38 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_c1 = 0;
        local_d1 = 0;
        if (pcVar6 == (cfstringStruct *)0x0) {
          if (local_80 == (cfstringStruct *)0x0) {
            local_1a0 = &cf___;
          }
          else {
            local_1a0 = local_80;
          }
          local_188 = local_1a0;
        }
        else {
          local_188 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrSource);
          _objc_retainAutoreleasedReturnValue();
          local_c1 = 1;
          local_c0 = local_188;
          FUN_00eee23c();
          _objc_retainAutoreleasedReturnValue();
          local_d1 = 1;
          local_d0 = local_188;
        }
        local_30 = local_188;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a8 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        if ((local_c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if ((local_b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        local_e0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_e0,&cf_icon);
        }
        pcVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomTitle);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_e8,
                     &cf__wcrCustomTitle);
        }
        pcVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,
                     &cf__wcrCustomIcon);
        }
        pcVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomKind);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        local_f8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,
                     &cf__wcrCustomKind);
        }
        pcVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        local_100 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_100,
                     &cf__wcrCustomPayload);
        }
        puVar1 = local_a8;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = puVar1;
        local_88 = 1;
        _objc_storeStrong(&local_100);
        _objc_storeStrong(&local_f8,0);
        _objc_storeStrong(&local_f0,0);
        _objc_storeStrong(&local_e8,0);
        _objc_storeStrong(&local_e0,0);
        _objc_storeStrong(&local_a8,0);
      }
      else {
        local_70 = (undefined *)0x0;
        local_88 = 1;
      }
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

