// FUN_01530bc4 @ 01530bc4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01530bc4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_258;
  undefined *local_248;
  cfstringStruct *local_228;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1c0;
  bool local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  int local_19c;
  undefined *local_198;
  undefined *local_190;
  ulong local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined *local_108;
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
  local_108 = (undefined *)0x0;
  _objc_storeStrong(&local_108,param_1);
  if (local_108 == (undefined *)0x0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_10c = 1;
    local_100 = puVar2;
  }
  else {
    puVar2 = local_108;
    FUN_01534040();
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_10c = 1;
      local_100 = puVar2;
    }
    else {
      FUN_0152b7ec();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_getContactByName_;
      local_120 = puVar2;
      _NSSelectorFromString();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_128 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_130 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar4;
      _memset(auStack_180,0,0x40);
      puVar2 = local_118;
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      if (local_200 != (undefined *)0x0) {
        lVar7 = *local_170;
        local_208 = (undefined *)0x0;
        do {
          do {
            if (*local_170 - lVar7 != 0) {
              _objc_enumerationMutation(*local_170 - lVar7,puVar2);
            }
            uVar8 = *(ulong *)(local_178 + (long)local_208 * 8);
            local_140 = uVar8;
            FUN_01528c84();
            _objc_retainAutoreleasedReturnValue();
            local_188 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
            if ((uVar8 == 0) ||
               (puVar4 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_138,PTR_s_containsObject__0269cbb8,local_188),
               ((ulong)puVar4 & 1) != 0)) {
              local_10c = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_188);
              puVar4 = local_120;
              FUN_015625e8(local_120,local_188);
              if (((ulong)puVar4 & 1) == 0) {
                local_10c = 3;
              }
              else {
                local_190 = (undefined *)0x0;
                if ((local_120 != (undefined *)0x0) &&
                   (puVar4 = local_120,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_120,PTR_s_respondsToSelector__026ca818,local_128),
                   ((ulong)puVar4 & 1) != 0)) {
                  puVar5 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)(local_120,local_128,local_188);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_190;
                  local_190 = puVar5;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                }
                puVar4 = local_190;
                FUN_01528f60();
                _objc_retainAutoreleasedReturnValue();
                local_198 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
                if (puVar4 == (undefined *)0x0) {
                  _objc_storeStrong(&local_198,local_188);
                }
                uVar8 = local_188;
                FUN_01561c40();
                local_19c = (int)uVar8;
                local_1b1 = local_19c == 0;
                if (local_1b1) {
                  local_228 = &cf_eU_;
                }
                else {
                  local_228 = (cfstringStruct *)(uVar8 & 0xffffffff);
                  FUN_01561ee0(uVar8 & 0xffffffff);
                  _objc_retainAutoreleasedReturnValue();
                  local_1b0 = local_228;
                }
                local_1b1 = !local_1b1;
                (*(code *)PTR__objc_retain_02578638)();
                local_1a8 = local_228;
                if (local_1b1) {
                  (*(code *)PTR__objc_release_02578630)(local_1b0);
                }
                puVar4 = local_130;
                local_f8 = &cf_friendContact;
                bVar1 = local_190 == (undefined *)0x0;
                if (bVar1) {
                  local_248 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                  _objc_retainAutoreleasedReturnValue();
                  local_1c0 = local_248;
                }
                else {
                  local_248 = local_190;
                }
                local_d0 = local_248;
                local_f0 = &cf_friendUserName;
                local_c8 = local_188;
                local_e8 = &cf_friendTitle;
                local_c0 = local_198;
                local_e0 = &cf_recentText;
                if (local_1a8 == (cfstringStruct *)0x0) {
                  local_258 = &cf_eU_;
                }
                else {
                  local_258 = local_1a8;
                }
                local_b8 = local_258;
                local_d8 = &cf_recentTimestamp;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800
                           ,local_19c);
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
                  (*(code *)PTR__objc_release_02578630)(local_1c0);
                }
                _objc_storeStrong(&local_1a8);
                _objc_storeStrong(&local_198,0);
                _objc_storeStrong(&local_190,0);
                local_10c = 0;
              }
            }
            _objc_storeStrong(&local_188,0);
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                     0x10);
          local_208 = (undefined *)0x0;
        } while (local_200 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02586740
                );
      puVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
      local_10c = 1;
      local_100 = puVar2;
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_120,0);
    }
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_100);
  return;
}

