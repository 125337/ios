// atUserListFromWrap: @ 00ed1c04

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::atUserListFromWrap_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_160;
  ulong local_158;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  ID local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_wcr_stringValue_key__026ab628,local_c8,&cf_m_nsAtUserList);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_wcr_stringValue_key__026ab628,local_c8,&cf_m_atUserList);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_d0;
    local_d0 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_b0 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    IVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar4 = *local_118;
      local_160 = 0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,IVar1);
          }
          local_e8 = *(undefined8 *)(local_120 + local_160 * 8);
          IVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_130 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
          if (IVar2 == 0) {
            local_d4 = 3;
          }
          else {
            IVar2 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_isEqualToString__0269ccc8,&cf_notify_all);
            if (((IVar2 & 1) == 0) &&
               (IVar2 = local_130,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_130,PTR_s_isEqualToString__0269ccc8,&cf__all), (IVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
              local_d4 = 0;
            }
            else {
              local_d4 = 3;
            }
          }
          _objc_storeStrong(&local_130,0);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d4 = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

