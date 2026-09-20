// FUN_000f30c4 @ 000f30c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000f30c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_2a8;
  cfstringStruct *local_278;
  undefined *local_210;
  undefined *local_208;
  bool local_1a1;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  byte local_18a;
  byte local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  cfstringStruct *local_138;
  undefined *local_130;
  byte local_121;
  undefined4 local_120;
  long local_110;
  long local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  _objc_storeStrong(&local_108,param_1);
  lVar6 = local_108;
  FUN_000f2598();
  _objc_retainAutoreleasedReturnValue();
  local_110 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = 1;
    local_100 = puVar1;
  }
  else {
    lVar6 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    local_121 = (byte)lVar6;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar1;
    _memset(auStack_178,0,0x40);
    puVar1 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_208 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar6 = *local_168;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_168 - lVar6 != 0) {
            _objc_enumerationMutation(*local_168 - lVar6,puVar2);
          }
          pcVar7 = *(cfstringStruct **)(local_170 + (long)local_210 * 8);
          local_138 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          if (((pcVar3 != (cfstringStruct *)0x0) &&
              (((local_121 & 1) == 0 ||
               (pcVar3 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_scope_0269ea90),
               pcVar3 != (cfstringStruct *)0x1)))) &&
             (((local_121 & 1) != 0 ||
              (pcVar3 = local_138,
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_scope_0269ea90),
              pcVar3 != (cfstringStruct *)0x2)))) {
            local_189 = 0;
            pcVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_278 = &cf__g_TTR_;
            }
            else {
              local_278 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              local_189 = 1;
              local_188 = local_278;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_180 = local_278;
            if ((local_189 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_188);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_members_0269ea98);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            local_18a = (byte)pcVar7;
            local_1a1 = ((ulong)pcVar7 & 1) == 0;
            if (local_1a1) {
              local_2a8 = local_180;
            }
            else {
              local_2a8 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_stringByAppendingString__0269d398,&cf_space_s_);
              _objc_retainAutoreleasedReturnValue();
              local_1a0 = local_2a8;
            }
            local_1a1 = !local_1a1;
            (*(code *)PTR__objc_retain_02578638)();
            local_198 = local_2a8;
            if (local_1a1) {
              (*(code *)PTR__objc_release_02578630)(local_1a0);
            }
            puVar1 = local_130;
            local_f8 = &cf_title;
            local_d0 = local_198;
            local_f0 = &cf_kind;
            local_c8 = &cf_group;
            local_e8 = &cf_groupId;
            pcVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_groupId_0269ea88);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = &cf_groupName;
            local_b8 = local_180;
            local_d8 = &cf_alreadyAdded;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_c0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       local_18a & 1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_b0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            _objc_storeStrong(&local_198);
            _objc_storeStrong(&local_180,0);
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = puVar1;
    local_120 = 1;
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_100);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

