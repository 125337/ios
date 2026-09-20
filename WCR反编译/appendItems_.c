// appendItems: @ 01132cd8

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickReplyStore::appendItems_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_2c0;
  ulong local_2b8;
  ulong local_260;
  ulong local_258;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  long local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  ID local_150;
  undefined4 local_144;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_144 = 1;
  }
  else {
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customItems_026af318);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_150 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_158 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar5;
    _memset(auStack_1a8,0,0x40);
    IVar2 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_258 != 0) {
      lVar7 = *local_198;
      local_260 = 0;
      do {
        do {
          if (*local_198 - lVar7 != 0) {
            _objc_enumerationMutation(*local_198 - lVar7,IVar2);
          }
          uVar8 = *(ulong *)(local_1a0 + local_260 * 8);
          local_168 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar8;
          FUN_01130f58();
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar1 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar1;
          FUN_01130f58();
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_invite);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_text);
            if ((uVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1b8);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1b8);
          }
          _objc_storeStrong(&local_1b8);
          _objc_storeStrong(&local_1b0,0);
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_260 = 0;
      } while (local_258 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_1c0 = 0;
    _memset(auStack_208,0,0x40);
    uVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10);
    if (local_2b8 != 0) {
      lVar7 = *local_1f8;
      local_2c0 = 0;
      do {
        do {
          if (*local_1f8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar7,uVar1);
          }
          uVar8 = *(ulong *)(local_200 + local_2c0 * 8);
          local_1c8 = uVar8;
          FUN_011310c8();
          _objc_retainAutoreleasedReturnValue();
          local_210 = uVar8;
          if (uVar8 == 0) {
            local_144 = 5;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            FUN_01130f58();
            _objc_retainAutoreleasedReturnValue();
            local_218 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            FUN_01130f58();
            _objc_retainAutoreleasedReturnValue();
            local_220 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_218,PTR_s_isEqualToString__0269ccc8,&cf_invite);
            if ((uVar8 & 1) == 0) {
              uVar8 = local_218;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_218,PTR_s_isEqualToString__0269ccc8,&cf_text);
              if ((uVar8 & 1) != 0) {
                puVar4 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_containsObject__0269cbb8,local_220);
                if (((ulong)puVar4 & 1) != 0) {
                  local_144 = 5;
                  goto LAB_01133320;
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_220)
                ;
              }
LAB_011332f0:
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_210);
              local_1c0 = local_1c0 + 1;
              local_144 = 0;
            }
            else {
              puVar4 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_containsObject__0269cbb8,local_220);
              if (((ulong)puVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_220)
                ;
                goto LAB_011332f0;
              }
              local_144 = 5;
            }
LAB_01133320:
            _objc_storeStrong(&local_220);
            _objc_storeStrong(&local_218,0);
          }
          _objc_storeStrong(&local_210,0);
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2c0 = 0;
      } while (local_2b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (0 < local_1c0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCustomItems__026af320,local_150);
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

