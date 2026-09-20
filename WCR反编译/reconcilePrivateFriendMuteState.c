// reconcilePrivateFriendMuteState @ 0110f6cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::reconcilePrivateFriendMuteState(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined *local_328;
  undefined *local_320;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_290;
  undefined *local_278;
  byte local_251;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  undefined1 local_201;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  byte local_1b2;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  byte local_191;
  undefined *local_190;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_149 = 0;
  local_159 = 0;
  local_169 = 0;
  local_179 = 0;
  if ((IVar3 & 1) == 0) {
    local_278 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_179 = 1;
    local_178 = local_278;
  }
  else {
    local_278 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    local_149 = 1;
    local_148 = local_278;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_159 = 1;
    local_158 = local_278;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_169 = 1;
    local_168 = local_278;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = local_278;
  if ((local_179 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_178);
  }
  if ((local_169 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_168);
  }
  if ((local_159 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_158);
  }
  if ((local_149 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_enabled_0269db80);
  local_191 = 0;
  local_1a1 = 0;
  local_1b1 = 0;
  if (((((ulong)puVar2 & 1) == 0) ||
      (puVar2 = local_130, (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isLocked_0269db88),
      ((ulong)puVar2 & 1) == 0)) ||
     (puVar2 = local_130,
     (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_notificationDisguiseEnabled_026aef08),
     local_290 = PTR__OBJC_CLASS___NSSet_026ce150, ((ulong)puVar2 & 1) != 0)) {
    local_290 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1b1 = 1;
    local_1b0 = local_290;
  }
  else {
    puVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedUsernames_026a6628);
    _objc_retainAutoreleasedReturnValue();
    local_191 = 1;
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_1a1 = 1;
    local_1a0 = local_290;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = local_290;
  if ((local_1b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if ((local_1a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  if ((local_191 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_190);
  }
  local_1b2 = 0;
  _memset(auStack_200,0,0x40);
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_2d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10);
  if (local_2d0 != (undefined *)0x0) {
    lVar7 = *local_1f0;
    local_2d8 = (undefined *)0x0;
    do {
      do {
        if (*local_1f0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1f0 - lVar7,puVar4);
        }
        local_1c0 = *(undefined8 *)(local_1f8 + (long)local_2d8 * 8);
        puVar2 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_containsObject__0269cbb8,local_1c0);
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_objectForKeyedSubscript__0269d098,local_1c0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_201 = SUB81(puVar5,0);
          puVar2 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_setPrivateFriendNotifyOpen_usern_026aef10,(uint)puVar5 & 1,
                     local_1c0);
          if (((ulong)puVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_removeObjectForKey__0269d700,local_1c0);
            local_1b2 = 1;
          }
        }
        local_2d8 = local_2d8 + 1;
      } while (local_2d8 < local_2d0);
      local_2d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10)
      ;
      local_2d8 = (undefined *)0x0;
    } while (local_2d0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _memset(auStack_250,0,0x40);
  puVar2 = local_188;
  (*(code *)PTR__objc_retain_02578638)();
  local_320 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,0x10);
  if (local_320 != (undefined *)0x0) {
    lVar7 = *local_240;
    local_328 = (undefined *)0x0;
    do {
      do {
        if (*local_240 - lVar7 != 0) {
          _objc_enumerationMutation(*local_240 - lVar7,puVar2);
        }
        local_210 = *(undefined8 *)(local_248 + (long)local_328 * 8);
        puVar4 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_objectForKeyedSubscript__0269d098,local_210);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar4 == (undefined *)0x0) {
          local_251 = 0;
          puVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_privateFriendNotifyOpenForUserna_026aef00,local_210,&local_251)
          ;
          if ((local_251 & 1) != 0) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       (byte)puVar4 & 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_210);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_1b2 = 1;
            goto LAB_0110ffa4;
          }
        }
        else {
LAB_0110ffa4:
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_setPrivateFriendNotifyOpen_usern_026aef10,0,local_210);
        }
        local_328 = local_328 + 1;
      } while (local_328 < local_320);
      local_320 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,0x10
                );
      local_328 = (undefined *)0x0;
    } while (local_320 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar4 != (undefined *)0x0) {
      puVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_1b2 = 1;
    }
  }
  else {
    puVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_1b2 = 1;
    }
  }
  uVar6 = (uint)local_1b2;
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

