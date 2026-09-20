// quitChatRoomsWithUserNames:deleteAllMsg:completion: @ 00ee0b48

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

void WCRefineChatRoomMuteHelper::quitChatRoomsWithUserNames_deleteAllMsg_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  ulong local_268;
  ulong local_260;
  ulong local_248;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  long local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  long local_1c8;
  ID local_1c0;
  byte local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  code *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  byte local_c1;
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
  local_c1 = (byte)param_4;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_d8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = 0;
  local_e0 = puVar1;
  _memset(auStack_130,0,0x40);
  local_248 = local_c0;
  if (local_c0 == 0) {
    local_248 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_260 = local_248;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_248,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_260 != 0) {
    lVar7 = *local_120;
    local_268 = 0;
    do {
      do {
        if (*local_120 - lVar7 != 0) {
          _objc_enumerationMutation(*local_120 - lVar7,local_248);
        }
        local_f0 = *(undefined8 *)(local_128 + local_268 * 8);
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_trimmedString__0269ec98,local_f0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_b0;
        local_138 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isChatRoomUserName__0269eff8,IVar2);
        if (((IVar3 & 1) == 0) ||
           (puVar4 = local_e0,
           (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsObject__0269cbb8,local_138),
           ((ulong)puVar4 & 1) != 0)) {
          local_13c = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_138);
          IVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isOwnerUserName__026ab7b0,local_138);
          if ((IVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_138);
            local_13c = 0;
          }
          else {
            local_e8 = local_e8 + 1;
            local_13c = 3;
          }
        }
        _objc_storeStrong(&local_138,0);
        local_268 = local_268 + 1;
      } while (local_268 < local_260);
      local_260 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                 0x10);
      local_268 = 0;
    } while (local_260 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_248);
  puVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    if (local_d0 != 0) {
      (**(code **)(local_d0 + 0x10))(local_d0,0,local_e8);
    }
    local_13c = 1;
  }
  else {
    local_1e0 = &local_160;
    local_160 = 0;
    local_150 = 0x20000000;
    local_14c = 0x20;
    local_148 = 0;
    local_180 = 0;
    local_170 = 0x20000000;
    local_16c = 0x20;
    local_168 = 0;
    local_1b0 = 0;
    local_1a0 = 0x32000000;
    local_19c = 0x30;
    local_198 = FUN_00ee117c;
    local_190 = FUN_00ee11b8;
    local_188 = 0;
    ppuVar5 = &local_210;
    local_210 = PTR___NSConcreteStackBlock_02578660;
    local_208 = 0xc2000000;
    local_204 = 0;
    local_200 = FUN_00ee11e4;
    local_1f8 = &DAT_02581ef0;
    puVar4 = local_d8;
    local_1a8 = &local_1b0;
    local_178 = &local_180;
    local_158 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)();
    lVar7 = local_d0;
    local_1f0 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = local_e8;
    local_1c0 = local_b0;
    local_1b8 = local_c1 & 1;
    local_1e8 = lVar7;
    local_1d8 = &local_1b0;
    local_1d0 = &local_180;
    _objc_retainBlock();
    uVar6 = local_1a8[5];
    local_1a8[5] = ppuVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (**(code **)(local_1a8[5] + 0x10))();
    _objc_storeStrong(&local_1e8);
    _objc_storeStrong(&local_1f0,0);
    __Block_object_dispose(&local_1b0,8);
    _objc_storeStrong(&local_188,0);
    __Block_object_dispose(&local_180,8);
    __Block_object_dispose(&local_160,8);
    local_13c = 0;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

