// deleteUserNames:retainChatHistory: @ 00f7b8cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x1c bytes */

unsigned_long_long
WCRefineFriendRelationChecker::deleteUserNames_retainChatHistory_
          (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_250;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1d8;
  undefined *local_1b0;
  undefined *local_1a8 [2];
  undefined *local_198;
  byte local_189;
  cfstringStruct *local_188;
  undefined1 local_179;
  cfstringStruct *local_178;
  ulong *local_170;
  undefined1 local_161;
  ulong *local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined *local_f0;
  unsigned_long_long local_e8;
  undefined4 local_dc;
  ulong *local_d8;
  byte local_c9;
  ulong local_c8;
  SEL local_c0;
  undefined *local_b8;
  unsigned_long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_c8;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  _objc_storeStrong(puVar1,param_3);
  local_c9 = (byte)param_4;
  FUN_00f75634();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar1;
  if (puVar1 == (ulong *)0x0) {
    local_b0 = 0;
    local_dc = 1;
  }
  else {
    local_e8 = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    local_1d8 = local_c8;
    if (local_c8 == 0) {
      local_1d8 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
              );
    if (local_1f0 != 0) {
      lVar6 = *local_128;
      local_1f8 = 0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,local_1d8);
          }
          lVar7 = *(long *)(local_130 + local_1f8 * 8);
          local_f8 = lVar7;
          FUN_00f73814();
          _objc_retainAutoreleasedReturnValue();
          local_140 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 == 0) {
            local_dc = 3;
          }
          else {
            local_148 = (ulong *)0x0;
            puVar1 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178)
            ;
            if (((ulong)puVar1 & 1) != 0) {
              puVar3 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_getContactByName__0269d178,local_140);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = local_148;
              local_148 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar1);
            }
            if (local_148 == (ulong *)0x0) {
              local_dc = 3;
            }
            else {
              local_161 = 0;
              if ((local_c9 & 1) != 0) {
                puVar1 = local_d8;
                FUN_00f7c19c(local_d8,&cf_m_oContactOPLog);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = &cf_add_DeleteContact_isRetainChatHistory_delScene_sync_;
                local_170 = puVar1;
                _NSSelectorFromString();
                local_178 = pcVar4;
                if ((local_170 != (ulong *)0x0) &&
                   (puVar1 = local_170,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_170,PTR_s_respondsToSelector__026ca818,pcVar4),
                   ((ulong)puVar1 & 1) != 0)) {
                  puVar1 = local_170;
                  (*(code *)PTR__objc_msgSend_02578628)(local_170,local_178,local_140,1,0,1);
                  local_161 = SUB81(puVar1,0);
                }
                _objc_storeStrong(&local_170,0);
              }
              local_179 = 0;
              pcVar4 = &cf_deleteContact_listType_andScene_sync_local_;
              _NSSelectorFromString();
              puVar1 = local_d8;
              local_188 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_respondsToSelector__026ca818,pcVar4);
              if (((ulong)puVar1 & 1) == 0) {
                puVar1 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_respondsToSelector__026ca818,
                           PTR_s_deleteContact_listType__0269ffd0);
                if (((ulong)puVar1 & 1) != 0) {
                  puVar1 = local_d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d8,PTR_s_deleteContact_listType__0269ffd0,local_148,1);
                  local_179 = SUB81(puVar1,0);
                }
              }
              else {
                puVar1 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_188,local_148,1,0,1,1);
                local_179 = SUB81(puVar1,0);
              }
              puVar1 = local_d8;
              FUN_00f757d8(local_d8,local_140);
              local_189 = ((byte)puVar1 ^ 1) & 1;
              if (local_189 == 0) {
                local_198 = PTR_s_deleteContactLocal_listType__0269ffd8;
                puVar1 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_respondsToSelector__026ca818,
                           PTR_s_deleteContactLocal_listType__0269ffd8);
                if (((ulong)puVar1 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_198,local_148,1);
                }
                puVar1 = local_d8;
                FUN_00f757d8(local_d8,local_140);
                local_189 = ((byte)puVar1 ^ 1) & 1;
              }
              if (local_189 != 0) {
                local_e8 = local_e8 + 1;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_140);
              }
              local_dc = 0;
            }
            _objc_storeStrong(&local_148,0);
          }
          _objc_storeStrong(&local_140,0);
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_1d8);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_removeUserNames__026acbe8,local_f0);
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pendingUserNames_026acad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_250 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        local_1b0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_250 = local_1b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8[0] = local_250;
      if (puVar5 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_1b0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a8[0],PTR_s_removeObjectsInArray__026a8500,local_f0);
      puVar2 = local_1a8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8[0],PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setPendingUserNames__026acad8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(local_1a8,0);
    }
    local_b0 = local_e8;
    local_dc = 1;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

