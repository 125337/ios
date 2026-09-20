// menuContainsPluginItem:itemID: @ 00f371d4

/* Function Stack Size: 0x20 bytes */

bool WCRefineEmoticonToolsHelper::menuContainsPluginItem_itemID_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_160;
  ulong local_158;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  uint local_d4;
  long local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (lVar5 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
     lVar5 == 0)) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar5 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_118 + local_160 * 8);
          local_128 = 0;
          local_e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
          if ((uVar6 & 1) != 0) {
            uVar4 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_performSelector__026ca7b8,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_128;
            local_128 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          uVar6 = local_128;
          _WCRPluginIconTitleMatches(local_128,local_d0);
          bVar1 = (uVar6 & 1) != 0;
          if (bVar1) {
            local_a9 = 1;
          }
          local_d4 = (uint)bVar1;
          _objc_storeStrong(&local_128,0);
          if (local_d4 != 0) goto LAB_00f37488;
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_d4 = 0;
LAB_00f37488:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_d4 == 0) {
      local_a9 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

