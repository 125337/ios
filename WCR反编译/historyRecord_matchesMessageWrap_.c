// historyRecord:matchesMessageWrap: @ 01b2cda0

/* Function Stack Size: 0x20 bytes */

bool WCRefineKeywordAlertHistoryViewController::historyRecord_matchesMessageWrap_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_2c8;
  ulong local_298;
  ulong local_290;
  ulong local_268;
  ulong local_240;
  ulong local_238;
  long local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  int local_154;
  long local_150;
  ulong local_148;
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
  if ((local_148 == 0) || (local_150 == 0)) {
    local_129 = 0;
    local_154 = 1;
  }
  else {
    uVar1 = local_148;
    FUN_01b24660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_148;
    local_160 = uVar1;
    FUN_01b20404();
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar4;
    _memset(auStack_1b0,0,0x40);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_historyCandidateTextsForMessageW_026bee68,local_150,local_148);
    _objc_retainAutoreleasedReturnValue();
    local_238 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_238 != 0) {
      lVar3 = *local_1a0;
      local_240 = 0;
      do {
        do {
          if (*local_1a0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar3,IVar2);
          }
          uVar4 = *(ulong *)(local_1a8 + local_240 * 8);
          local_170 = uVar4;
          FUN_01b242ac();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_160;
          local_1b8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
          if (((uVar1 == 0) ||
              (uVar1 = local_1b8,
              (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0), uVar1 == 0))
             || (uVar1 = local_1b8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_isEqualToString__0269ccc8,local_160), (uVar1 & 1) == 0))
          {
            uVar1 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_268 = uVar1;
            if (uVar1 == 0) {
              local_268 = local_170;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1c0 = local_268;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            _memset(auStack_208,0,0x40);
            uVar1 = local_168;
            (*(code *)PTR__objc_retain_02578638)();
            local_290 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128
                       ,0x10);
            if (local_290 != 0) {
              lVar5 = *local_1f8;
              local_298 = 0;
              do {
                do {
                  if (*local_1f8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1f8 - lVar5,uVar1);
                  }
                  lVar6 = *(long *)(local_200 + local_298 * 8);
                  local_1c8 = lVar6;
                  FUN_01b1fc40();
                  _objc_retainAutoreleasedReturnValue();
                  local_210 = lVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
                  uVar4 = local_1c0;
                  if (lVar6 == 0) {
                    local_154 = 5;
                  }
                  else {
                    lVar6 = local_210;
                    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_lowercaseString_0269d9c0);
                    _objc_retainAutoreleasedReturnValue();
                    local_2c8 = lVar6;
                    if (lVar6 == 0) {
                      local_2c8 = local_210;
                    }
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar4,PTR_s_containsString__0269d0b0,local_2c8);
                    (*(code *)PTR__objc_release_02578630)(lVar6);
                    if ((uVar4 & 1) == 0) {
                      local_154 = 0;
                    }
                    else {
                      local_129 = 1;
                      local_154 = 1;
                    }
                  }
                  _objc_storeStrong(&local_210,0);
                  if ((local_154 != 0) && (local_154 != 5)) goto LAB_01b2d260;
                  local_298 = local_298 + 1;
                } while (local_298 < local_290);
                local_290 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                           auStack_128,0x10);
                local_298 = 0;
              } while (local_290 != 0);
            }
            local_154 = 0;
LAB_01b2d260:
            (*(code *)PTR__objc_release_02578630)(uVar1);
            if (local_154 == 0) {
              local_154 = 0;
            }
            _objc_storeStrong(&local_1c0,0);
          }
          else {
            local_129 = 1;
            local_154 = 1;
          }
          _objc_storeStrong(&local_1b8,0);
          if (local_154 != 0) goto LAB_01b2d318;
          local_240 = local_240 + 1;
        } while (local_240 < local_238);
        local_238 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10
                  );
        local_240 = 0;
      } while (local_238 != 0);
    }
    local_154 = 0;
LAB_01b2d318:
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_154 == 0) {
      local_129 = 0;
      local_154 = 1;
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

