// incomingArraysLookUnfilteredTop:allTop:normal: @ 015226b4

/* Function Stack Size: 0x28 bytes */

bool WCRefineTelegramGroupingStore::incomingArraysLookUnfilteredTop_allTop_normal_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong local_2b8;
  ulong local_2b0;
  undefined *local_270;
  undefined *local_268;
  long local_250;
  long local_240;
  long local_230;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  ID local_180;
  int local_174;
  long local_170;
  long local_168;
  long local_160;
  SEL local_158;
  ID local_150;
  byte local_141;
  undefined1 auStack_140 [128];
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  local_158 = param_2;
  local_150 = param_1;
  _objc_storeStrong(&local_160,param_3);
  local_168 = 0;
  _objc_storeStrong(&local_168,param_4);
  local_170 = 0;
  _objc_storeStrong(&local_170,param_5);
  IVar1 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_isFilteringActive_026a30c8);
  if ((IVar1 & 1) == 0) {
    local_141 = 1;
    local_174 = 1;
  }
  else {
    IVar1 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    local_180 = IVar1;
    if (IVar1 == 0) {
      local_141 = 1;
      local_174 = 1;
    }
    else {
      _memset(auStack_1c8,0,0x40);
      if (local_160 == 0) {
        local_230 = *(long *)PTR____NSArray0___02578280;
      }
      else {
        local_230 = local_160;
      }
      local_c0 = local_230;
      if (local_168 == 0) {
        local_240 = *(long *)PTR____NSArray0___02578280;
      }
      else {
        local_240 = local_168;
      }
      local_b8 = local_240;
      if (local_170 == 0) {
        local_250 = *(long *)PTR____NSArray0___02578280;
      }
      else {
        local_250 = local_170;
      }
      local_b0 = local_250;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_268 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_268 != (undefined *)0x0) {
        lVar4 = *local_1b8;
        local_270 = (undefined *)0x0;
        do {
          do {
            if (*local_1b8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1b8 - lVar4,puVar2);
            }
            uVar5 = *(ulong *)(local_1c0 + (long)local_270 * 8);
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_188 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar5 & 1) != 0) {
              _memset(auStack_210,0,0x40);
              uVar5 = local_188;
              (*(code *)PTR__objc_retain_02578638)();
              local_2b0 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                         auStack_140,0x10);
              if (local_2b0 != 0) {
                lVar6 = *local_200;
                local_2b8 = 0;
                do {
                  do {
                    if (*local_200 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_200 - lVar6,uVar5);
                    }
                    local_1d0 = *(undefined8 *)(local_208 + local_2b8 * 8);
                    IVar1 = local_150;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_150,PTR_s_session_matchesTab__026b02b8,local_1d0,local_180);
                    if ((IVar1 & 1) == 0) {
                      local_141 = 1;
                      local_174 = 1;
                      goto LAB_01522ac0;
                    }
                    local_2b8 = local_2b8 + 1;
                  } while (local_2b8 < local_2b0);
                  local_2b0 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                             auStack_140,0x10);
                  local_2b8 = 0;
                } while (local_2b0 != 0);
              }
              local_174 = 0;
LAB_01522ac0:
              (*(code *)PTR__objc_release_02578630)(uVar5);
              if (local_174 != 0) goto LAB_01522b48;
            }
            local_270 = local_270 + 1;
          } while (local_270 < local_268);
          local_268 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                     0x10);
          local_270 = (undefined *)0x0;
        } while (local_268 != (undefined *)0x0);
      }
      local_174 = 0;
LAB_01522b48:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_174 == 0) {
        local_141 = 0;
        local_174 = 1;
      }
    }
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_141 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

