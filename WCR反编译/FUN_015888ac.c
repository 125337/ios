// FUN_015888ac @ 015888ac

void FUN_015888ac(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  cfstringStruct *local_268;
  undefined *local_258;
  cfstringStruct *local_238;
  undefined *local_218;
  undefined *local_210;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  bool local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  int local_19c;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined4 local_114;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = (undefined *)0x0;
  _objc_storeStrong(&local_108,param_1);
  puVar2 = local_108;
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_114 = 1;
    local_100 = puVar2;
  }
  else {
    FUN_0157d7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar6;
    (*(code *)PTR__objc_release_02578630)();
    puVar6 = local_120;
    if (local_120 == (undefined *)0x0) {
      FUN_0152b7ec();
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar2;
      FUN_015890ac();
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_114 = 1;
        local_100 = puVar2;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        local_138 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_140 = puVar6;
        _memset(auStack_188,0,0x40);
        puVar2 = local_130;
        (*(code *)PTR__objc_retain_02578638)();
        local_210 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                   0x10);
        if (local_210 != (undefined *)0x0) {
          lVar5 = *local_178;
          local_218 = (undefined *)0x0;
          do {
            do {
              if (*local_178 - lVar5 != 0) {
                _objc_enumerationMutation(*local_178 - lVar5,puVar2);
              }
              puVar6 = *(undefined **)(local_180 + (long)local_218 * 8);
              local_148 = puVar6;
              FUN_01528d34();
              _objc_retainAutoreleasedReturnValue();
              local_190 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
              if ((puVar6 == (undefined *)0x0) ||
                 (puVar6 = local_140,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_140,PTR_s_containsObject__0269cbb8,local_190),
                 ((ulong)puVar6 & 1) != 0)) {
                local_114 = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_190)
                ;
                puVar6 = local_148;
                FUN_0158921c(local_148,local_110);
                if (((ulong)puVar6 & 1) == 0) {
                  local_114 = 3;
                }
                else {
                  puVar6 = local_148;
                  FUN_01528f60();
                  _objc_retainAutoreleasedReturnValue();
                  local_198 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
                  if (puVar6 == (undefined *)0x0) {
                    _objc_storeStrong(&local_198,local_190);
                  }
                  puVar6 = local_190;
                  FUN_01561c40();
                  local_19c = (int)puVar6;
                  local_1b1 = false;
                  bVar1 = local_19c == 0;
                  if (bVar1) {
                    local_238 = &cf_eU_;
                  }
                  else {
                    local_238 = (cfstringStruct *)((ulong)puVar6 & 0xffffffff);
                    FUN_01561ee0((ulong)puVar6 & 0xffffffff);
                    _objc_retainAutoreleasedReturnValue();
                    local_1b0 = local_238;
                  }
                  local_1b1 = !bVar1;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1a8 = local_238;
                  if ((local_1b1 & 1U) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_1b0);
                  }
                  puVar6 = local_138;
                  local_f8 = &cf_groupContact;
                  local_1c1 = 0;
                  bVar1 = local_148 == (undefined *)0x0;
                  if (bVar1) {
                    local_258 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                    _objc_retainAutoreleasedReturnValue();
                    local_1c0 = local_258;
                  }
                  else {
                    local_258 = local_148;
                  }
                  local_d0 = local_258;
                  local_f0 = &cf_groupUserName;
                  local_c8 = local_190;
                  local_e8 = &cf_groupTitle;
                  local_c0 = local_198;
                  local_e0 = &cf_recentText;
                  if (local_1a8 == (cfstringStruct *)0x0) {
                    local_268 = &cf_eU_;
                  }
                  else {
                    local_268 = local_1a8;
                  }
                  local_b8 = local_268;
                  local_d8 = &cf_recentTimestamp;
                  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_1c1 = bVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,
                             PTR_s_numberWithUnsignedInt__0269d800,local_19c);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_b0 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  if ((local_1c1 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_1c0);
                  }
                  _objc_storeStrong(&local_1a8);
                  _objc_storeStrong(&local_198,0);
                  local_114 = 0;
                }
              }
              _objc_storeStrong(&local_190,0);
              local_218 = local_218 + 1;
            } while (local_218 < local_210);
            local_210 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8
                       ,0x10);
            local_218 = (undefined *)0x0;
          } while (local_210 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_sortUsingComparator__0269d168,
                   &PTR___NSConcreteGlobalBlock_02586ac0);
        puVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_copy_0269d150);
        local_1d0 = puVar2;
        FUN_0157d7a0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_1d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_100 = puVar2;
        local_114 = 1;
        _objc_storeStrong(&local_1d0);
        _objc_storeStrong(&local_140,0);
        _objc_storeStrong(&local_138,0);
      }
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_128,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_100 = puVar6;
      local_114 = 1;
    }
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

