// FUN_007d21e4 @ 007d21e4

void FUN_007d21e4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint local_190;
  ulong local_f0;
  undefined4 local_e8;
  ulong local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar2 = local_d8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     uVar2 = local_d8, uVar3 == 0)) {
    local_d0 = (cfstringStruct *)0x0;
    local_e8 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    while (uVar2 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
          uVar2 != 0) {
      uVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasSuffix__0269d018,&cf_format_s_);
      uVar2 = local_f0;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_characterAtIndex__0269fa18,uVar3 - 1);
        local_190 = 1;
        if ((short)uVar2 != 0x2c) {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_190 = (uint)puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        uVar2 = local_f0;
        if ((local_190 & 1) == 0) break;
        uVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar3 - 1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_f0;
        local_f0 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        uVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar3 - 1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_f0;
        local_f0 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    uVar2 = local_f0;
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_f0;
    local_f0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    uVar2 = local_f0;
    if (uVar3 == 0) {
      local_d0 = (cfstringStruct *)0x0;
    }
    else {
      local_38 = &cf_evgS;
      local_30 = &cf_NewFriends;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_007c8de0();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar3 = local_f0;
      if ((uVar2 & 1) == 0) {
        local_50 = &cf_NJ_YvgS;
        local_48 = &cf_PJ_YvgS;
        local_40 = &cf_ChatsOnlyFriends;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_50,3);
        _objc_retainAutoreleasedReturnValue();
        FUN_007c8de0();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar2 = local_f0;
        if ((uVar3 & 1) == 0) {
          local_68 = &cf__J;
          local_60 = &cf__D_;
          local_58 = &cf_GroupChats;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_68,3);
          _objc_retainAutoreleasedReturnValue();
          FUN_007c8de0();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar3 = local_f0;
          if ((uVar2 & 1) == 0) {
            local_80 = &cf_h__;
            local_78 = &cf_jd_;
            local_70 = &cf_Tags;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_80,3);
            _objc_retainAutoreleasedReturnValue();
            FUN_007c8de0();
            (*(code *)PTR__objc_release_02578630)(puVar1);
            uVar2 = local_f0;
            if ((uVar3 & 1) == 0) {
              local_98 = &cf_lQOS;
              local_90 = &cf__e_;
              local_88 = &cf_OfficialAccounts;
              puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_98,3);
              _objc_retainAutoreleasedReturnValue();
              FUN_007c8de0();
              (*(code *)PTR__objc_release_02578630)(puVar1);
              uVar3 = local_f0;
              if ((uVar2 & 1) == 0) {
                local_b0 = &cf_gRS;
                local_a8 = &cf_gR_;
                local_a0 = &cf_ServiceAccounts;
                puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_b0,3);
                _objc_retainAutoreleasedReturnValue();
                FUN_007c8de0();
                (*(code *)PTR__objc_release_02578630)(puVar1);
                uVar2 = local_f0;
                if ((uVar3 & 1) == 0) {
                  local_c8 = &cf_ON_OT_N;
                  local_c0 = &cf_W;
                  local_b8 = &cf_WeComContacts;
                  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_c8,3);
                  _objc_retainAutoreleasedReturnValue();
                  FUN_007c8de0();
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  if ((uVar2 & 1) == 0) {
                    local_d0 = (cfstringStruct *)0x0;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_d0 = &cf_ON_OT_N;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_d0 = &cf_gRS;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_d0 = &cf_lQOS;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = &cf_h__;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = &cf__J;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = &cf_NJ_YvgS;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = &cf_evgS;
      }
    }
    local_e8 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_d0);
  return;
}

