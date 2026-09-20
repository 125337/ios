// FUN_0152c8e8 @ 0152c8e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0152c8e8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_280;
  undefined *local_270;
  cfstringStruct *local_250;
  undefined *local_230;
  undefined *local_228;
  undefined *local_1d0;
  bool local_1c1;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  int local_1ac;
  undefined *local_1a8;
  undefined *local_1a0;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined4 local_114;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  _objc_storeStrong(&local_108,param_1);
  local_110 = (undefined *)0x0;
  _objc_storeStrong(&local_110,param_2);
  if (local_108 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_114 = 1;
    local_100 = puVar2;
  }
  else {
    lVar7 = local_108;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_120 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = local_120;
    local_128 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
    if ((lVar7 == 0) ||
       (puVar2 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
       puVar2 == (undefined *)0x0)) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_114 = 1;
      local_100 = puVar2;
    }
    else {
      puVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_114 = 1;
        local_100 = puVar2;
      }
      else {
        FUN_0152b7ec();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_getContactByName_;
        local_130 = puVar2;
        _NSSelectorFromString();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_138 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        local_140 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar4;
        _memset(auStack_190,0,0x40);
        puVar2 = local_110;
        (*(code *)PTR__objc_retain_02578638)();
        local_228 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                   0x10);
        if (local_228 != (undefined *)0x0) {
          lVar7 = *local_180;
          local_230 = (undefined *)0x0;
          do {
            do {
              if (*local_180 - lVar7 != 0) {
                _objc_enumerationMutation(*local_180 - lVar7,puVar2);
              }
              uVar8 = *(ulong *)(local_188 + (long)local_230 * 8);
              local_150 = uVar8;
              FUN_01528c84();
              _objc_retainAutoreleasedReturnValue();
              local_198 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
              if (((uVar8 == 0) ||
                  (uVar8 = local_198,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_198,PTR_s_isEqualToString__0269ccc8,local_128), (uVar8 & 1) != 0)
                  ) || (puVar4 = local_148,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_148,PTR_s_containsObject__0269cbb8,local_198),
                       ((ulong)puVar4 & 1) != 0)) {
                local_114 = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_198)
                ;
                local_1a0 = (undefined *)0x0;
                if ((local_130 != (undefined *)0x0) &&
                   (puVar4 = local_130,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_130,PTR_s_respondsToSelector__026ca818,local_138),
                   ((ulong)puVar4 & 1) != 0)) {
                  puVar5 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)(local_130,local_138,local_198);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_1a0;
                  local_1a0 = puVar5;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                }
                puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                           PTR_s_displayNameForUser_inRoom__0269ecd0,local_198,local_120);
                _objc_retainAutoreleasedReturnValue();
                local_1a8 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
                if (puVar4 == (undefined *)0x0) {
                  puVar5 = local_1a0;
                  FUN_01528f60();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_1a8;
                  local_1a8 = puVar5;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                }
                puVar4 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
                if (puVar4 == (undefined *)0x0) {
                  _objc_storeStrong(&local_1a8,local_198);
                }
                uVar8 = local_198;
                FUN_01561c40();
                local_1ac = (int)uVar8;
                local_1c1 = local_1ac == 0;
                if (local_1c1) {
                  local_250 = &cf_eU_;
                }
                else {
                  local_250 = (cfstringStruct *)(uVar8 & 0xffffffff);
                  FUN_01561ee0(uVar8 & 0xffffffff);
                  _objc_retainAutoreleasedReturnValue();
                  local_1c0 = local_250;
                }
                local_1c1 = !local_1c1;
                (*(code *)PTR__objc_retain_02578638)();
                local_1b8 = local_250;
                if (local_1c1) {
                  (*(code *)PTR__objc_release_02578630)(local_1c0);
                }
                puVar4 = local_140;
                local_f8 = &cf_memberContact;
                bVar1 = local_1a0 == (undefined *)0x0;
                if (bVar1) {
                  local_270 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                  _objc_retainAutoreleasedReturnValue();
                  local_1d0 = local_270;
                }
                else {
                  local_270 = local_1a0;
                }
                local_d0 = local_270;
                local_f0 = &cf_memberUserName;
                local_c8 = local_198;
                local_e8 = &cf_memberTitle;
                local_c0 = local_1a8;
                local_e0 = &cf_recentText;
                if (local_1b8 == (cfstringStruct *)0x0) {
                  local_280 = &cf_eU_;
                }
                else {
                  local_280 = local_1b8;
                }
                local_b8 = local_280;
                local_d8 = &cf_recentTimestamp;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800
                           ,local_1ac);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_b0 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                if (bVar1) {
                  (*(code *)PTR__objc_release_02578630)(local_1d0);
                }
                _objc_storeStrong(&local_1b8);
                _objc_storeStrong(&local_1a8,0);
                _objc_storeStrong(&local_1a0,0);
                local_114 = 0;
              }
              _objc_storeStrong(&local_198,0);
              local_230 = local_230 + 1;
            } while (local_230 < local_228);
            local_228 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8
                       ,0x10);
            local_230 = (undefined *)0x0;
          } while (local_228 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_sortUsingComparator__0269d168,
                   &PTR___NSConcreteGlobalBlock_025866e0);
        puVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
        local_114 = 1;
        local_100 = puVar2;
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_140,0);
        _objc_storeStrong(&local_130,0);
      }
    }
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_100);
  return;
}

