// hasUnreadPrivateFriendMessage @ 0111f204

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::hasUnreadPrivateFriendMessage(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_350;
  ulong local_348;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_298;
  cfstringStruct *local_288;
  cfstringStruct *local_280 [2];
  cfstringStruct *local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  cfstringStruct *local_220;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined *local_1c0 [4];
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  byte local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  byte local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  int local_14c;
  ID local_148;
  SEL local_140;
  ID local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_2;
  local_138 = param_1;
  FUN_01111cd8();
  _objc_retainAutoreleasedReturnValue();
  local_148 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    local_129 = 0;
    local_14c = 1;
  }
  else {
    _WCRSideloadShareFixIsNotificationServiceProcess();
    if ((param_1 & 1) == 0) {
      pcVar1 = &cf_MMServiceCenter;
      _NSClassFromString();
      pcVar2 = &cf_MMNewSessionMgr;
      local_158 = pcVar1;
      _NSClassFromString();
      local_171 = 0;
      local_160 = pcVar2;
      if ((local_158 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_158,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_158,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar1 & 1) == 0)) {
        local_288 = (cfstringStruct *)0x0;
      }
      else {
        local_288 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_171 = 1;
        local_170 = local_288;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = local_288;
      if ((local_171 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      local_189 = 0;
      if (((local_168 == (cfstringStruct *)0x0) || (local_160 == (cfstringStruct *)0x0)) ||
         (pcVar1 = local_168,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar1 & 1) == 0)) {
        local_298 = (cfstringStruct *)0x0;
      }
      else {
        local_298 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_getService__0269d170,local_160);
        _objc_retainAutoreleasedReturnValue();
        local_189 = 1;
        local_188 = local_298;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = local_298;
      if ((local_189 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_188);
      }
      if (local_180 == (cfstringStruct *)0x0) {
        local_129 = 0;
        local_14c = 1;
      }
      else {
        local_198 = (cfstringStruct *)0x0;
        pcVar1 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_valueForKey__0269d128,&cf_m_arrSession);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_1a0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar2 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
          pcVar1 = local_198;
          local_198 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        _objc_storeStrong(&local_1a0,0);
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_1c0[0] = puVar3;
        _memset(auStack_208,0,0x40);
        pcVar1 = local_198;
        (*(code *)PTR__objc_retain_02578638)();
        local_2e8 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,
                   0x10);
        if (local_2e8 != (cfstringStruct *)0x0) {
          lVar5 = *local_1f8;
          local_2f0 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_1f8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1f8 - lVar5,pcVar1);
              }
              uVar6 = *(ulong *)(local_200 + (long)local_2f0 * 8);
              local_1c8 = uVar6;
              FUN_01112028();
              _objc_retainAutoreleasedReturnValue();
              local_210 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
              if ((uVar6 == 0) ||
                 (IVar4 = local_148,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_148,PTR_s_containsObject__0269cbb8,local_210), (IVar4 & 1) == 0))
              {
                local_14c = 4;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0[0],PTR_s_addObject__0269d180,local_210);
                uVar6 = local_1c8;
                FUN_0111b06c(local_1c8,&cf_m_uUnReadCount);
                _objc_retainAutoreleasedReturnValue();
                local_218 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
                if (((uVar6 & 1) == 0) ||
                   (uVar6 = local_218,
                   (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_integerValue_026ca750),
                   (long)uVar6 < 1)) {
                  local_14c = 0;
                }
                else {
                  local_129 = 1;
                  local_14c = 1;
                }
                _objc_storeStrong(&local_218,0);
              }
              _objc_storeStrong(&local_210,0);
              if ((local_14c != 0) && (local_14c != 4)) goto LAB_0111f870;
              local_2f0 = (cfstringStruct *)((long)&local_2f0->field0_0x0 + 1);
            } while (local_2f0 < local_2e8);
            local_2e8 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8
                       ,0x10);
            local_2f0 = (cfstringStruct *)0x0;
          } while (local_2e8 != (cfstringStruct *)0x0);
        }
        local_14c = 0;
LAB_0111f870:
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (local_14c == 0) {
          pcVar1 = &cf_GetSessionByUserName_;
          _NSSelectorFromString();
          pcVar2 = local_180;
          local_220 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_respondsToSelector__026ca818,pcVar1)
          ;
          if (((ulong)pcVar2 & 1) == 0) {
            local_129 = 0;
            local_14c = 1;
          }
          else {
            _memset(auStack_268,0,0x40);
            IVar4 = local_148;
            (*(code *)PTR__objc_retain_02578638)();
            local_348 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128
                       ,0x10);
            if (local_348 != 0) {
              lVar5 = *local_258;
              local_350 = 0;
              do {
                do {
                  if (*local_258 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_258 - lVar5,IVar4);
                  }
                  local_228 = *(undefined8 *)(local_260 + local_350 * 8);
                  puVar3 = local_1c0[0];
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0[0],PTR_s_containsObject__0269cbb8,local_228);
                  if (((ulong)puVar3 & 1) == 0) {
                    local_270 = (cfstringStruct *)0x0;
                    pcVar2 = local_180;
                    (*(code *)PTR__objc_msgSend_02578628)(local_180,local_220,local_228);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar1 = local_270;
                    local_270 = pcVar2;
                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                    pcVar1 = local_270;
                    FUN_0111b06c(local_270,&cf_m_uUnReadCount);
                    _objc_retainAutoreleasedReturnValue();
                    local_280[0] = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750
                              );
                    if ((((ulong)pcVar1 & 1) == 0) ||
                       (pcVar1 = local_280[0],
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_280[0],PTR_s_integerValue_026ca750), (long)pcVar1 < 1)) {
                      local_14c = 0;
                    }
                    else {
                      local_129 = 1;
                      local_14c = 1;
                    }
                    _objc_storeStrong(local_280);
                    _objc_storeStrong(&local_270,0);
                    if (local_14c != 0) goto LAB_0111fb94;
                  }
                  local_350 = local_350 + 1;
                } while (local_350 < local_348);
                local_348 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                           auStack_128,0x10);
                local_350 = 0;
              } while (local_348 != 0);
            }
            local_14c = 0;
LAB_0111fb94:
            (*(code *)PTR__objc_release_02578630)(IVar4);
            if (local_14c == 0) {
              local_129 = 0;
              local_14c = 1;
            }
          }
        }
        _objc_storeStrong(local_1c0);
        _objc_storeStrong(&local_198,0);
      }
      _objc_storeStrong(&local_180);
      _objc_storeStrong(&local_168,0);
    }
    else {
      local_129 = 0;
      local_14c = 1;
    }
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

