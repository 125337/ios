// yuanbaoContact @ 0111e2a8

/* Function Stack Size: 0x10 bytes */

ID WCRefinePrivateFriendManager::yuanbaoContact(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ulong local_198;
  ulong local_190;
  ID local_158;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ID local_108;
  ID local_100;
  int local_f4;
  ID local_f0;
  byte local_e1;
  ID local_e0;
  ID local_d8;
  cfstringStruct *local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contactManager_026ab1d8);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = &cf_wxid_wi_1d142z0zdj03;
  local_e1 = 0;
  if ((local_c8 == 0) ||
     (IVar1 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     (IVar1 & 1) == 0)) {
    local_158 = 0;
  }
  else {
    local_158 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_getContactByName__0269d178,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = local_158;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_158;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  IVar5 = local_d8;
  FUN_01112028();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
  IVar1 = local_d8;
  if (IVar5 == 0) {
    if ((local_c8 == 0) ||
       (IVar1 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_c8,PTR_s_respondsToSelector__026ca818,
                  PTR_s_getContactList_contactType__026a2fc8), (IVar1 & 1) == 0)) {
      local_b0 = 0;
      local_f4 = 1;
    }
    else {
      IVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_getContactList_contactType__026a2fc8,1,0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_100 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((IVar1 & 1) == 0) {
        local_b0 = 0;
        local_f4 = 1;
      }
      else {
        _memset(auStack_148,0,0x40);
        IVar1 = local_100;
        (*(code *)PTR__objc_retain_02578638)();
        local_190 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        if (local_190 != 0) {
          lVar4 = *local_138;
          local_198 = 0;
          do {
            do {
              if (*local_138 - lVar4 != 0) {
                _objc_enumerationMutation(*local_138 - lVar4,IVar1);
              }
              IVar5 = *(ID *)(local_140 + local_198 * 8);
              local_108 = IVar5;
              FUN_01112028();
              _objc_retainAutoreleasedReturnValue();
              IVar3 = IVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar5);
              IVar5 = local_108;
              if ((IVar3 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = IVar5;
                local_f4 = 1;
                goto LAB_0111e6a4;
              }
              local_198 = local_198 + 1;
            } while (local_198 < local_190);
            local_190 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                       0x10);
            local_198 = 0;
          } while (local_190 != 0);
        }
        local_f4 = 0;
LAB_0111e6a4:
        (*(code *)PTR__objc_release_02578630)(IVar1);
        if (local_f4 == 0) {
          local_b0 = 0;
          local_f4 = 1;
        }
      }
      _objc_storeStrong(&local_100,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar1;
    local_f4 = 1;
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

