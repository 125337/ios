// wcr_chatRoomDataMemberUserNames: @ 00ed2efc

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::wcr_chatRoomDataMemberUserNames_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  cfstringStruct *local_110;
  ID local_108 [4];
  ID local_e8;
  undefined4 local_dc;
  cfstringStruct *local_d8;
  undefined *local_d0;
  ID local_c8;
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
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_m_ChatRoomData;
  local_d0 = puVar3;
  _NSSelectorFromString();
  local_d8 = pcVar1;
  if ((local_c8 == 0) ||
     (IVar2 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,pcVar1),
     (IVar2 & 1) == 0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = puVar3;
  }
  else {
    local_e8 = 0;
    IVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_e8;
    local_e8 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_108[0] = 0;
    pcVar1 = &cf_m_dicData;
    _NSSelectorFromString();
    local_110 = pcVar1;
    if ((local_e8 != 0) &&
       (IVar2 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_respondsToSelector__026ca818,pcVar1),
       (IVar2 & 1) != 0)) {
      IVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_110);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_108[0];
      local_108[0] = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_108[0];
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((IVar2 & 1) == 0) && (local_e8 != 0)) {
      IVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_wcr_objectValue_key__026ab638,local_e8,&cf_m_dicData);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_108[0];
      local_108[0] = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_108[0];
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((IVar2 & 1) == 0) {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
    }
    else {
      _memset(auStack_160,0,0x40);
      IVar2 = local_108[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1e0 != 0) {
        lVar5 = *local_150;
        local_1e8 = 0;
        do {
          do {
            if (*local_150 - lVar5 != 0) {
              _objc_enumerationMutation(*local_150 - lVar5,IVar2);
            }
            local_120 = *(undefined8 *)(local_158 + local_1e8 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_wcr_addMemberUserName_into__026ab640,local_120,local_d0);
            local_1e8 = local_1e8 + 1;
          } while (local_1e8 < local_1e0);
          local_1e0 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                     0x10);
          local_1e8 = 0;
        } while (local_1e0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar3;
    }
    local_dc = 1;
    _objc_storeStrong(local_108);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

