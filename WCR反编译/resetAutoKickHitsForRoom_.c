// resetAutoKickHitsForRoom: @ 00ed8504

/* Function Stack Size: 0x18 bytes */

void WCRefineChatRoomKickHelper::resetAutoKickHitsForRoom_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ID local_100 [3];
  ID local_e8;
  ID local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ID local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_trimmedString__0269ec98,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_b0;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_store_026ab6d0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar3);
    IVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_hits)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_e8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_100[0] = IVar1;
    _memset(auStack_148,0,0x40);
    IVar1 = local_100[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar4 = *local_138;
      local_188 = 0;
      do {
        do {
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,IVar1);
          }
          uVar5 = *(ulong *)(local_140 + local_188 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_108 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar5 & 1) != 0) &&
             (uVar5 = local_108,
             (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_hasPrefix__0269d320,local_d8),
             (uVar5 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_removeObjectForKey__0269d700,local_108);
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(local_100);
    _objc_storeStrong(&local_e8,0);
    _objc_sync_exit(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_saveStore_026ab6f0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

