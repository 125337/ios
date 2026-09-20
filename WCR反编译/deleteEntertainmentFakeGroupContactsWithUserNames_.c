// deleteEntertainmentFakeGroupContactsWithUserNames: @ 0016a958

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineClearSessionHook::deleteEntertainmentFakeGroupContactsWithUserNames_
          (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  char *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  long lVar7;
  ulong local_1a0;
  ulong local_198;
  ID local_158;
  byte local_149;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  unsigned_long_long local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  ID local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  unsigned_long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar3 = local_b8;
  pcVar2 = "CContactMgr";
  _objc_getClass("CContactMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_serviceOfClass__0269f7e0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar3;
  if (IVar3 == 0) {
    local_b0 = 0;
  }
  else {
    pcVar4 = &cf_deleteContact_listType_andScene_sync_local_;
    _NSSelectorFromString();
    pcVar5 = &cf_deleteContactLocal_listType_;
    local_e0 = pcVar4;
    _NSSelectorFromString();
    pcVar4 = &cf_removeContactFromDic_;
    local_e8 = pcVar5;
    _NSSelectorFromString();
    pcVar5 = &cf_removeContactFromDB_;
    local_f0 = pcVar4;
    _NSSelectorFromString();
    local_100 = 0;
    local_f8 = pcVar5;
    _memset(auStack_148,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar7 = *local_138;
      local_1a0 = 0;
      do {
        do {
          if (*local_138 - lVar7 != 0) {
            _objc_enumerationMutation(*local_138 - lVar7,uVar1);
          }
          local_108 = *(undefined8 *)(local_140 + local_1a0 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_isEntertainmentFakeGroupUserName_0269f820,local_108);
          if ((IVar3 & 1) != 0) {
            local_149 = 0;
            local_158 = 0;
            IVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178)
            ;
            if ((IVar3 & 1) != 0) {
              IVar6 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_getContactByName__0269d178,local_108);
              _objc_retainAutoreleasedReturnValue();
              IVar3 = local_158;
              local_158 = IVar6;
              (*(code *)PTR__objc_release_02578630)(IVar3);
            }
            if ((local_158 == 0) &&
               (IVar3 = local_d0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_d0,PTR_s_respondsToSelector__026ca818,
                          PTR_s_getContactForSearchByName__0269f828), (IVar3 & 1) != 0)) {
              IVar6 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_getContactForSearchByName__0269f828,local_108);
              _objc_retainAutoreleasedReturnValue();
              IVar3 = local_158;
              local_158 = IVar6;
              (*(code *)PTR__objc_release_02578630)(IVar3);
            }
            if (local_158 != 0) {
              IVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_respondsToSelector__026ca818,local_e0);
              if ((IVar3 & 1) == 0) {
                IVar3 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_respondsToSelector__026ca818,local_e8);
                if ((IVar3 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_e8,local_158,1);
                  (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_e8,local_158,2);
                  local_149 = 1;
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_e0,local_158,0xffffffff,0,0,1);
                local_149 = 1;
              }
            }
            IVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_respondsToSelector__026ca818,local_f8);
            if ((IVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_f8,local_108);
              local_149 = 1;
            }
            IVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_respondsToSelector__026ca818,local_f0);
            if ((IVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_f0,local_108);
              local_149 = 1;
            }
            if ((local_149 & 1) != 0) {
              local_100 = local_100 + 1;
            }
            _objc_storeStrong(&local_158,0);
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_b0 = local_100;
  }
  local_d4 = 1;
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

