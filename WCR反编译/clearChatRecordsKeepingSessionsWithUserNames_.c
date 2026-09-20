// clearChatRecordsKeepingSessionsWithUserNames: @ 00168efc

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineClearSessionHook::clearChatRecordsKeepingSessionsWithUserNames_
          (ID param_1,SEL param_2,ID param_3)

{
  unsigned_long_long uVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_188;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  unsigned_long_long local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  ID local_d0;
  ID local_c8;
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
  IVar3 = local_b0;
  pcVar2 = "MMNewSessionMgr";
  _objc_getClass("MMNewSessionMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_serviceOfClass__0269f7e0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_b0;
  pcVar2 = "CMessageMgr";
  local_c8 = IVar3;
  _objc_getClass("CMessageMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_serviceOfClass__0269f7e0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_DeleteMsgButKeepSession_;
  local_d0 = IVar4;
  _NSSelectorFromString();
  pcVar6 = &cf_DelMsg_MsgList_DelAll_;
  local_d8 = pcVar5;
  _NSSelectorFromString();
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_e0 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = 0;
  local_e8 = puVar7;
  _memset(auStack_138,0,0x40);
  if (local_c0 == 0) {
    local_188 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_188 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = local_188;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_188,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_1a0 != 0) {
    lVar9 = *local_128;
    local_1a8 = 0;
    do {
      do {
        if (*local_128 - lVar9 != 0) {
          _objc_enumerationMutation(*local_128 - lVar9,local_188);
        }
        uVar10 = *(ulong *)(local_130 + local_1a8 * 8);
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_f8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar7);
        uVar8 = local_f8;
        if ((uVar10 & 1) != 0) {
          puVar7 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_140 = uVar8;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          uVar8 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
          if ((uVar8 != 0) &&
             (puVar7 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e8,PTR_s_containsObject__0269cbb8,local_140), ((ulong)puVar7 & 1) == 0
             )) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_140);
            IVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_respondsToSelector__026ca818,local_d8);
            if ((IVar3 & 1) == 0) {
              IVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_respondsToSelector__026ca818,local_e0);
              if ((IVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_e0,local_140,0,1);
                local_f0 = local_f0 + 1;
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d8,local_140);
              local_f0 = local_f0 + 1;
            }
          }
          _objc_storeStrong(&local_140,0);
        }
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                 0x10);
      local_1a8 = 0;
    } while (local_1a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_188);
  uVar1 = local_f0;
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return uVar1;
}

