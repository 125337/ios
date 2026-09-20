// FUN_0078c210 @ 0078c210

byte FUN_0078c210(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_340;
  ulong local_338;
  ulong local_2d0;
  ulong local_2c8;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  ulong local_228;
  ulong local_220;
  ulong local_218;
  undefined *local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  byte local_1b9;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  int local_150;
  ulong local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  if ((local_138 == 0) ||
     (uVar1 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_129 = 0;
    local_150 = 1;
  }
  else {
    uVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_operationMenuItems_026a1618);
    if ((uVar1 & 1) == 0) {
      local_129 = 0;
      local_150 = 1;
    }
    else {
      uVar4 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_operationMenuItems_026a1618);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_158 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar1 = local_158;
      if ((uVar4 & 1) == 0) {
        local_129 = 0;
        local_150 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = uVar1;
        _memset(auStack_1a8,0,0x40);
        uVar1 = local_160;
        (*(code *)PTR__objc_retain_02578638)();
        local_2c8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        if (local_2c8 != 0) {
          lVar3 = *local_198;
          local_2d0 = 0;
          do {
            do {
              if (*local_198 - lVar3 != 0) {
                _objc_enumerationMutation(*local_198 - lVar3,uVar1);
              }
              uVar4 = *(ulong *)(local_1a0 + local_2d0 * 8);
              local_168 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
              if ((uVar4 & 1) != 0) {
                uVar6 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_title_0269d250);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1b0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
                uVar4 = local_1b0;
                if ((uVar6 & 1) == 0) {
                  local_150 = 3;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b8 = uVar4;
                  local_1b9 = 0;
                  _memset(auStack_208,0,0x40);
                  uVar4 = local_140;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_338 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                             auStack_128,0x10);
                  if (local_338 != 0) {
                    lVar5 = *local_1f8;
                    local_340 = 0;
                    do {
                      do {
                        if (*local_1f8 - lVar5 != 0) {
                          _objc_enumerationMutation(*local_1f8 - lVar5,uVar4);
                        }
                        uVar6 = *(ulong *)(local_200 + local_340 * 8);
                        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        local_1c8 = uVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
                        if ((((uVar6 & 1) != 0) &&
                            (uVar6 = local_1c8,
                            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0),
                            uVar6 != 0)) &&
                           (uVar6 = local_1b8, puVar2 = PTR_s_rangeOfString_options__0269d118,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_1b8,PTR_s_rangeOfString_options__0269d118,local_1c8,1),
                           local_218 = uVar6, local_210 = puVar2, uVar6 != 0x7fffffffffffffff)) {
                          local_1b9 = 1;
                          local_150 = 4;
                          goto LAB_0078c80c;
                        }
                        local_340 = local_340 + 1;
                      } while (local_340 < local_338);
                      local_338 = uVar4;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                                 auStack_128,0x10);
                      local_340 = 0;
                    } while (local_338 != 0);
                  }
                  local_150 = 0;
LAB_0078c80c:
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                  if ((local_1b9 & 1) == 0) {
                    local_150 = 3;
                  }
                  else {
                    local_220 = 0;
                    uVar4 = local_168;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_action_026a4358);
                    if ((uVar4 & 1) != 0) {
                      uVar4 = local_168;
                      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_action_026a4358);
                      local_220 = uVar4;
                    }
                    if (local_220 == 0) {
                      local_150 = 3;
                    }
                    else {
                      local_228 = 0;
                      uVar4 = local_168;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_target_026a0dc8)
                      ;
                      if ((uVar4 & 1) != 0) {
                        uVar6 = local_168;
                        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_target_026a0dc8);
                        _objc_retainAutoreleasedReturnValue();
                        uVar4 = local_228;
                        local_228 = uVar6;
                        (*(code *)PTR__objc_release_02578630)(uVar4);
                      }
                      if (local_228 == 0) {
                        _objc_storeStrong(&local_228,local_138);
                      }
                      uVar4 = local_228;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_228,PTR_s_respondsToSelector__026ca818,local_220);
                      puVar2 = PTR___dispatch_main_q_02578680;
                      if ((uVar4 & 1) == 0) {
                        local_150 = 3;
                      }
                      else {
                        _objc_retainAutoreleaseReturnValue();
                        _objc_retainAutoreleasedReturnValue();
                        uVar4 = local_228;
                        local_260 = PTR___NSConcreteStackBlock_02578660;
                        local_258 = 0xc2000000;
                        local_254 = 0;
                        local_250 = FUN_0078e680;
                        local_248 = &DAT_025796f0;
                        (*(code *)PTR__objc_retain_02578638)();
                        uVar6 = local_168;
                        local_240 = uVar4;
                        local_230 = local_220;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_238 = uVar6;
                        _dispatch_async(puVar2,&local_260);
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        local_129 = 1;
                        local_150 = 1;
                        _objc_storeStrong(&local_238);
                        _objc_storeStrong(&local_240,0);
                      }
                      _objc_storeStrong(&local_228,0);
                    }
                  }
                  _objc_storeStrong(&local_1b8,0);
                }
                _objc_storeStrong(&local_1b0,0);
                if (local_150 != 3) goto LAB_0078cb90;
              }
              local_2d0 = local_2d0 + 1;
            } while (local_2d0 < local_2c8);
            local_2c8 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                       0x10);
            local_2d0 = 0;
          } while (local_2c8 != 0);
        }
        local_150 = 0;
LAB_0078cb90:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_150 == 0) {
          local_129 = 0;
          local_150 = 1;
        }
        _objc_storeStrong(&local_160,0);
      }
      _objc_storeStrong(&local_158,0);
    }
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

