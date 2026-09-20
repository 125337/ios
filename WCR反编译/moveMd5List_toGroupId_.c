// moveMd5List:toGroupId: @ 00f2edc4

/* Function Stack Size: 0x20 bytes */

bool WCRefineEmoticonGroupStore::moveMd5List_toGroupId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_250;
  ulong local_248;
  uint local_224;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  byte local_1b9;
  ID local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  byte local_162;
  byte local_161;
  ulong local_160;
  undefined4 local_154;
  ulong local_150;
  ulong local_148;
  SEL local_140;
  ID local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  uVar2 = local_148;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_129 = 0;
    local_154 = 1;
    goto LAB_00f2f514;
  }
  uVar2 = local_150;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  local_224 = 1;
  if (uVar2 != 0) {
    uVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__);
    local_224 = (uint)uVar2;
  }
  local_161 = (byte)local_224 & 1;
  if ((local_224 & 1) == 0) {
    uVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEqualToString__0269ccc8,&cf___all__);
    if ((uVar2 & 1) == 0) {
      local_162 = 0;
      _memset(auStack_1b0,0,0x40);
      IVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_groups_026a1048);
      _objc_retainAutoreleasedReturnValue();
      local_248 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_248 != 0) {
        lVar5 = *local_1a0;
        local_250 = 0;
        do {
          do {
            if (*local_1a0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar5,IVar3);
            }
            uVar6 = *(ulong *)(local_1a8 + local_250 * 8);
            local_170 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar6;
            FUN_00f29cf4();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar2);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if ((uVar7 & 1) != 0) {
              local_162 = 1;
              local_154 = 2;
              goto LAB_00f2f12c;
            }
            local_250 = local_250 + 1;
          } while (local_250 < local_248);
          local_248 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_250 = 0;
        } while (local_248 != 0);
      }
      local_154 = 0;
LAB_00f2f12c:
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((local_162 & 1) != 0) goto LAB_00f2f17c;
      local_129 = 0;
      local_154 = 1;
    }
    else {
      local_129 = 0;
      local_154 = 1;
    }
  }
  else {
LAB_00f2f17c:
    IVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_membership_026abf38);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1b8 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_1b9 = 0;
    _memset(auStack_208,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10);
    if (local_2a8 != 0) {
      lVar5 = *local_1f8;
      local_2b0 = 0;
      do {
        do {
          if (*local_1f8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar5,uVar2);
          }
          uVar7 = *(ulong *)(local_200 + local_2b0 * 8);
          local_1c8 = uVar7;
          FUN_00f29cf4();
          _objc_retainAutoreleasedReturnValue();
          local_210 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
          if ((uVar7 == 0) ||
             (uVar7 = local_210,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_210,PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid),
             (uVar7 & 1) != 0)) {
            local_154 = 5;
          }
          else {
            if ((local_161 & 1) == 0) {
              IVar3 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,local_210);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar3);
              if ((IVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_160,local_210
                          );
                local_1b9 = 1;
              }
            }
            else {
              IVar3 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,local_210);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (IVar3 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_removeObjectForKey__0269d700,local_210);
                local_1b9 = 1;
              }
            }
            local_154 = 0;
          }
          _objc_storeStrong(&local_210,0);
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2b0 = 0;
      } while (local_2a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_1b9 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setMembership__026abf70,local_1b8);
      FUN_00f2c2e0();
    }
    local_129 = 1;
    local_154 = 1;
    _objc_storeStrong(&local_1b8,0);
  }
  _objc_storeStrong(&local_160,0);
LAB_00f2f514:
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

