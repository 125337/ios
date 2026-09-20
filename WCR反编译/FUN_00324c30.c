// FUN_00324c30 @ 00324c30

void FUN_00324c30(undefined8 param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  uint local_410;
  ulong *local_380;
  ulong *local_378;
  ulong *local_348;
  undefined *local_280;
  ulong local_278;
  ulong local_270;
  undefined4 local_268;
  byte local_261;
  undefined *local_260;
  short local_252;
  ulong local_250;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  ulong local_208;
  ulong *local_200;
  undefined *local_1f8;
  long local_1f0;
  ulong *local_1e8;
  ulong *local_1e0;
  ulong *local_1d8;
  ulong *local_1d0;
  undefined *local_1c8;
  byte local_1b9;
  ulong local_1b8;
  ulong *local_1b0 [3];
  ulong *local_198;
  ulong local_190;
  undefined1 auStack_188 [128];
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
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
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_190;
  local_190 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00324b68();
  _objc_retainAutoreleasedReturnValue();
  local_70 = &cf_evgS;
  local_68 = &cf_NewFriends_;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_198 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,2);
  _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_NJ_YvgS;
  local_80 = &cf_PJ_YvgS;
  local_78 = &cf_ChatsOnlyFriends_;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,3);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = &cf__J;
  local_98 = &cf__D_;
  local_90 = &cf_GroupChats_;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a0,3);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = &cf_h__;
  local_b0 = &cf_jd_;
  local_a8 = &cf_Tags_;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,3);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf_lQOS;
  local_c8 = &cf__e_;
  local_c0 = &cf_OfficialAccounts_;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,3);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = &cf_gRS;
  local_e0 = &cf_gR_;
  local_d8 = &cf_ServiceAccounts_;
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_40 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8,3);
  _objc_retainAutoreleasedReturnValue();
  local_108 = &cf_ON_OT_N;
  local_100 = &cf_W;
  local_f8 = &cf_W;
  local_f0 = &cf_WeComContacts_;
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_38 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_108,4)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (ulong *)PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  local_1b0[0] = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar9 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_customContactsTopNames_0269fcd0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_1b8 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar9 & 1) == 0) {
    _objc_storeStrong(&local_1b8,*(undefined8 *)PTR____NSDictionary0___02578288);
  }
  uVar9 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
  local_1b9 = uVar9 != 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_198;
  local_1c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0);
  puVar10 = local_1b0[0];
  local_1d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0[0],PTR_s_count_0269cfe0);
  local_348 = puVar10;
  if ((long)local_1d8 < (long)puVar10) {
    local_348 = local_1d8;
  }
  local_1e8 = local_348;
  local_1d0 = local_348;
  local_1f0 = 0;
  local_1e0 = puVar10;
  do {
    if ((long)local_1d0 <= local_1f0) {
      puVar2 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_copy_0269d150);
      local_268 = 1;
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(local_1b0,0);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_190,0);
      if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
        _objc_autoreleaseReturnValue(0,puVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_1b0[0];
    local_1f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b0[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_1f0);
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar1;
    _memset(auStack_248,0,0x40);
    puVar1 = local_200;
    (*(code *)PTR__objc_retain_02578638)();
    local_378 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_188,0x10);
    if (local_378 != (ulong *)0x0) {
      lVar11 = *local_238;
      local_380 = (ulong *)0x0;
      do {
        do {
          if (*local_238 - lVar11 != 0) {
            _objc_enumerationMutation(*local_238 - lVar11,puVar1);
          }
          uVar12 = *(ulong *)(local_240 + (long)local_380 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_208 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar9 = local_208;
          if ((uVar12 & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_250 = uVar9;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            while (uVar9 = local_250,
                  (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0), uVar9 != 0
                  ) {
              uVar12 = local_250;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_250,PTR_s_hasSuffix__0269d018,&cf_format_s_);
              uVar9 = local_250;
              if ((uVar12 & 1) == 0) {
                uVar12 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_characterAtIndex__0269fa18,uVar12 - 1);
                local_252 = (short)uVar9;
                local_261 = 0;
                local_410 = 1;
                if (local_252 != 0x2c) {
                  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                  _objc_retainAutoreleasedReturnValue();
                  local_261 = 1;
                  local_260 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_410 = (uint)puVar2;
                }
                if ((local_261 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_260);
                }
                uVar9 = local_250;
                if ((local_410 & 1) == 0) break;
                uVar12 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_substringToIndex__0269d6c0,uVar12 - 1);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = local_250;
                local_250 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar12);
              }
              else {
                uVar12 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_substringToIndex__0269d6c0,uVar12 - 1);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = local_250;
                local_250 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar12);
              }
            }
            uVar9 = local_250;
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = local_250;
            local_250 = uVar9;
            (*(code *)PTR__objc_release_02578630)(uVar12);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            uVar9 = local_250;
            (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
            puVar2 = local_1f8;
            if (uVar9 == 0) {
              local_268 = 6;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf____);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_250);
              local_268 = 0;
            }
            _objc_storeStrong(&local_250,0);
          }
          local_380 = (ulong *)((long)local_380 + 1);
        } while (local_380 < local_378);
        local_378 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_188,
                   0x10);
        local_380 = (ulong *)0x0;
      } while (local_378 != (ulong *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar9 = local_1b8;
    if ((local_1b9 & 1) != 0) {
      puVar1 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_198,PTR_s_objectAtIndexedSubscript__0269cc78,local_1f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_objectForKey__0269e048);
      _objc_retainAutoreleasedReturnValue();
      local_270 = uVar9;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar9 = local_270;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar12 = local_270;
      if ((uVar9 & 1) != 0) {
        puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_278 = uVar12;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar9 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_length_0269cca0);
        if (uVar9 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_278);
          puVar2 = local_1f8;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _objc_storeStrong(&local_278,0);
      }
      _objc_storeStrong(&local_270,0);
    }
    puVar2 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_280 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_280);
    }
    _objc_storeStrong(&local_280);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(&local_1f8,0);
    local_1f0 = local_1f0 + 1;
  } while( true );
}

