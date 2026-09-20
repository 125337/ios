// revalidateLocalMessagePresenceAndPersist @ 01baccf4

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageRepositoryViewController::revalidateLocalMessagePresenceAndPersist
               (ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_230;
  ulong local_1c0;
  ulong local_1b8;
  byte local_181;
  ulong local_180;
  byte local_171;
  ulong local_170;
  ulong local_168 [2];
  byte local_151;
  ulong local_150;
  ulong local_148;
  byte local_139;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  byte local_dd;
  ID local_d0;
  undefined4 local_c4;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_messagesArray_026c03b8);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    local_c4 = 1;
  }
  else {
    FUN_01bad5fc();
    _objc_retainAutoreleasedReturnValue();
    local_dd = 0;
    local_e8 = PTR_s_GetMsg_LocalID__0269d5e8;
    local_d0 = param_1;
    _memset(auStack_130,0,0x40);
    IVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_1b8 != 0) {
      lVar6 = *local_120;
      local_1c0 = 0;
      do {
        do {
          if (*local_120 - lVar6 != 0) {
            _objc_enumerationMutation(*local_120 - lVar6,IVar1);
          }
          uVar7 = *(ulong *)(local_128 + local_1c0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          local_f0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar8 = local_f0;
          if ((uVar7 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_138 = uVar8;
            local_139 = 0;
            puVar3 = PTR_WCRefineMessageRepositoryStore_026ce120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeItem__0269d720,
                       uVar8);
            if (((ulong)puVar3 & 1) == 0) {
              local_151 = 0;
              uVar8 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              if ((uVar7 & 1) == 0) {
                local_230 = 0;
              }
              else {
                local_230 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
                _objc_retainAutoreleasedReturnValue();
                local_151 = 1;
                local_150 = local_230;
                (*(code *)PTR__objc_msgSend_02578628)();
              }
              if ((local_151 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_150);
              }
              (*(code *)PTR__objc_release_02578630)(uVar8);
              local_148 = local_230;
              if (((0 < (long)local_230) && (local_d0 != 0)) &&
                 (IVar4 = local_d0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_d0,PTR_s_respondsToSelector__026ca818,local_e8), (IVar4 & 1) != 0)
                 ) {
                IVar4 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_e8,&cf_filehelper,local_148);
                _objc_retainAutoreleasedReturnValue();
                local_139 = IVar4 != 0;
                (*(code *)PTR__objc_release_02578630)();
              }
              uVar8 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_138;
              local_168[0] = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = local_168[0];
              uVar8 = (ulong)local_139;
              local_170 = uVar5;
              if ((local_139 & 1) == 0) {
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                uVar8 = uVar7 & 0xffffffff;
                if ((uVar7 & 1) != 0) {
                  uVar5 = local_168[0];
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168[0],PTR_s_isEqualToString__0269ccc8,&cf_text);
                  uVar7 = local_170;
                  uVar8 = uVar5 & 0xffffffff;
                  if ((uVar5 & 1) != 0) {
                    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                    uVar8 = uVar7 & 0xffffffff;
                    if ((uVar7 & 1) != 0) {
                      uVar7 = local_170;
                      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
                      uVar8 = 0;
                      if (uVar7 != 0) {
                        uVar8 = 1;
                        local_139 = 1;
                      }
                    }
                  }
                }
              }
              _objc_storeStrong(uVar8,&local_170);
              _objc_storeStrong(local_168,0);
            }
            else {
              puVar3 = PTR_WCRefineMessageRepositoryStore_026ce120;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMessageRepositoryStore_026ce120,
                         PTR_s_isReferenceableItem__026ae538,local_138);
              local_139 = (byte)puVar3;
            }
            local_171 = local_139 & 1;
            uVar8 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_valid);
            _objc_retainAutoreleasedReturnValue();
            local_181 = 1;
            local_180 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
            if ((uVar8 & 1) != 0) {
              uVar8 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_boolValue_026ca540);
              local_181 = (byte)uVar8;
            }
            bVar2 = (local_181 & 1) != (local_171 & 1);
            if (bVar2) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                         local_171 & 1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_valid);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              local_dd = 1;
            }
            _objc_storeStrong(bVar2,&local_180);
            _objc_storeStrong(&local_138,0);
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1c0 = 0;
      } while (local_1b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((local_dd & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_saveMessages_026c03c0);
    }
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

