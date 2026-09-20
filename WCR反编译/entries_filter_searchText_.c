// entries:filter:searchText: @ 01f187e4

/* Function Stack Size: 0x28 bytes */

ID WCRefineToDoStore::entries_filter_searchText_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_1e0;
  ulong local_1d8;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  ID local_178;
  long local_170;
  undefined *local_168;
  byte local_159;
  long local_158;
  byte local_149;
  long local_148;
  long local_140;
  undefined *local_138;
  char local_12a;
  byte local_129;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long_long local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_d0 = 0;
  local_c8 = param_4;
  _objc_storeStrong(&local_d0,param_5);
  lVar5 = local_d0;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = lVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  _memset(auStack_128,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_1d8 != 0) {
    lVar5 = *local_118;
    local_1e0 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,uVar1);
        }
        lVar6 = *(long *)(local_120 + local_1e0 * 8);
        local_129 = 0;
        local_e8 = lVar6;
        if (local_c8 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_done_026a1598);
          local_129 = ((byte)lVar6 ^ 1) & 1;
        }
        else if (local_c8 == 1) {
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_matchesDailyCard_026c82b8);
          local_129 = (byte)lVar6;
        }
        else if (local_c8 == 2) {
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_daily_026c7138);
          local_129 = (byte)lVar6;
        }
        else if (local_c8 == 3) {
          local_129 = 1;
        }
        if ((local_129 & 1) != 0) {
          lVar6 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
          if (lVar6 != 0) {
            lVar6 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar6;
            puVar3 = PTR_s_rangeOfString_options__0269d118;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_149 = 0;
            local_159 = 0;
            bVar2 = true;
            local_140 = lVar4;
            local_138 = puVar3;
            if (lVar4 == 0x7fffffffffffffff) {
              lVar4 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_note_026c7618);
              _objc_retainAutoreleasedReturnValue();
              local_149 = 1;
              local_148 = lVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar2 = false;
              if (lVar4 != 0) {
                lVar4 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_note_026c7618);
                _objc_retainAutoreleasedReturnValue();
                local_159 = 1;
                puVar3 = PTR_s_rangeOfString_options__0269d118;
                local_158 = lVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar2 = lVar4 != 0x7fffffffffffffff;
                local_170 = lVar4;
                local_168 = puVar3;
              }
            }
            if ((local_159 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_158);
            }
            if ((local_149 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_148);
            }
            (*(code *)PTR__objc_release_02578630)(lVar6);
            local_12a = bVar2;
            if (bVar2 == false) goto LAB_01f18c80;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
        }
LAB_01f18c80:
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < local_1d8);
      local_1d8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_1e0 = 0;
    } while (local_1d8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_198 = PTR___NSConcreteGlobalBlock_02578658;
  local_190 = 0xd0800000;
  local_18c = 0;
  local_188 = FUN_01f18dc8;
  local_180 = &DAT_0258cb80;
  local_178 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_sortUsingComparator__0269d168,&local_198);
  puVar3 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

