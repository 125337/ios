// setHomeAvatarStripRowConfigs: @ 0215779c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setHomeAvatarStripRowConfigs_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_288;
  ulong local_280;
  ulong local_238;
  ulong local_230;
  ulong local_218;
  ulong local_208;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined4 local_1a4;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  undefined *local_150;
  ID local_148;
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
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if (local_140 == 0) {
    local_208 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_208 = local_140;
  }
  local_148 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setObject_forKey__026ca9e8,local_208,&cf_homeAvatarStripRowConfigs);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar2;
  _memset(auStack_198,0,0x40);
  if (local_140 == 0) {
    local_218 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_218 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_230 = local_218;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_218,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_230 != 0) {
    lVar3 = *local_188;
    local_238 = 0;
    do {
      do {
        if (*local_188 - lVar3 != 0) {
          _objc_enumerationMutation(*local_188 - lVar3,local_218);
        }
        uVar4 = *(ulong *)(local_190 + local_238 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_158 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1a0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar4 & 1) == 0) {
            local_1a4 = 3;
          }
          else {
            _memset(auStack_1f0,0,0x40);
            uVar4 = local_1a0;
            (*(code *)PTR__objc_retain_02578638)();
            local_280 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128
                       ,0x10);
            if (local_280 != 0) {
              lVar5 = *local_1e0;
              local_288 = 0;
              do {
                do {
                  if (*local_1e0 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1e0 - lVar5,uVar4);
                  }
                  uVar6 = *(ulong *)(local_1e8 + local_288 * 8);
                  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_1b0 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
                  if (((uVar6 & 1) != 0) &&
                     (uVar6 = local_1b0,
                     (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0),
                     uVar6 != 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_150,PTR_s_addObject__0269d180,local_1b0);
                  }
                  local_288 = local_288 + 1;
                } while (local_288 < local_280);
                local_280 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                           auStack_128,0x10);
                local_288 = 0;
              } while (local_280 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
            local_1a4 = 0;
          }
          _objc_storeStrong(&local_1a0,0);
        }
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                 0x10);
      local_238 = 0;
    } while (local_230 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_218);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_setObject_forKey__026ca9e8,local_150,&cf_homeAvatarStripUsernames);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

