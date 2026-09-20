// historyRecord:matchesSecondaryFilterTerms: @ 01b1fdb0

/* Function Stack Size: 0x20 bytes */

bool WCRefineKeywordAlertHistoryViewController::historyRecord_matchesSecondaryFilterTerms_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_278;
  ulong local_270;
  ID local_248;
  long local_218;
  long local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  long local_170;
  ID local_168;
  ID local_160;
  uint local_154;
  ulong local_150;
  ID local_148;
  SEL local_140;
  ID local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  IVar3 = local_148;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((IVar3 & 1) == 0) ||
     (uVar4 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0),
     uVar4 == 0)) {
    local_129 = 1;
    local_154 = 1;
  }
  else {
    IVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_resolvedRecord__026beb38,local_148);
    _objc_retainAutoreleasedReturnValue();
    local_248 = IVar3;
    if (IVar3 == 0) {
      local_248 = local_148;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = local_248;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_160;
    FUN_01b20404();
    _objc_retainAutoreleasedReturnValue();
    local_168 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
    if (IVar3 == 0) {
      local_129 = 0;
      local_154 = 1;
    }
    else {
      _memset(auStack_1b0,0,0x40);
      uVar4 = local_150;
      (*(code *)PTR__objc_retain_02578638)();
      local_270 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
      if (local_270 != 0) {
        lVar5 = *local_1a0;
        local_278 = 0;
        do {
          do {
            if (*local_1a0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar5,uVar4);
            }
            lVar6 = *(long *)(local_1a8 + local_278 * 8);
            local_170 = lVar6;
            FUN_01b1fc40();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
            if (lVar6 == 0) {
              local_154 = 3;
            }
            else {
              lVar6 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              local_1c0 = lVar6;
              _memset(auStack_208,0,0x40);
              IVar3 = local_168;
              (*(code *)PTR__objc_retain_02578638)();
              local_2b0 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                         auStack_128,0x10);
              if (local_2b0 != 0) {
                lVar6 = *local_1f8;
                local_2b8 = 0;
                do {
                  do {
                    if (*local_1f8 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_1f8 - lVar6,IVar3);
                    }
                    lVar7 = *(long *)(local_200 + local_2b8 * 8);
                    local_1c8 = lVar7;
                    FUN_01b1fc40();
                    _objc_retainAutoreleasedReturnValue();
                    local_210 = lVar7;
                    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
                    if (lVar7 == 0) {
                      local_154 = 5;
                    }
                    else {
                      lVar7 = local_210;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_210,PTR_s_lowercaseString_0269d9c0);
                      _objc_retainAutoreleasedReturnValue();
                      local_218 = lVar7;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (lVar7,PTR_s_rangeOfString__0269d838,local_1c0);
                      bVar1 = lVar7 != 0x7fffffffffffffff;
                      if (bVar1) {
                        local_129 = 1;
                      }
                      local_154 = (uint)bVar1;
                      _objc_storeStrong(bVar1,&local_218,0);
                    }
                    _objc_storeStrong(&local_210,0);
                    if ((local_154 != 0) && (local_154 != 5)) goto LAB_01b20280;
                    local_2b8 = local_2b8 + 1;
                  } while (local_2b8 < local_2b0);
                  local_2b0 = IVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                             auStack_128,0x10);
                  local_2b8 = 0;
                } while (local_2b0 != 0);
              }
              local_154 = 0;
LAB_01b20280:
              (*(code *)PTR__objc_release_02578630)(IVar3);
              if (local_154 == 0) {
                local_154 = 0;
              }
              _objc_storeStrong(&local_1c0,0);
            }
            _objc_storeStrong(&local_1b8,0);
            if ((local_154 != 0) && (local_154 != 3)) goto LAB_01b2034c;
            local_278 = local_278 + 1;
          } while (local_278 < local_270);
          local_270 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_278 = 0;
        } while (local_270 != 0);
      }
      local_154 = 0;
LAB_01b2034c:
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_154 == 0) {
        local_129 = 0;
        local_154 = 1;
      }
    }
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

