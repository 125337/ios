// FUN_00027d50 @ 00027d50

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00027d50(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char *local_398;
  char *local_320;
  uint local_2d4;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_270;
  undefined *local_240;
  undefined *local_210;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  byte local_199;
  char *local_198;
  char *local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  char *local_140;
  byte local_131;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  char *local_e8;
  uint local_e0;
  long local_d0;
  char *local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  lVar8 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_c8 = (char *)0x0;
    local_e0 = 1;
    goto LAB_00028cdc;
  }
  pcVar2 = "BaseMsgContentViewController";
  _objc_getClass();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_e8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar3;
  while( true ) {
    puVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar3 == (undefined *)0x0) break;
    puVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_f0;
    local_f0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  local_210 = local_f0;
  local_101 = 0;
  bVar1 = local_f0 == (undefined *)0x0;
  if (bVar1) {
    local_210 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_100 = local_210;
  }
  local_40 = local_210;
  puVar3 = local_f0;
  local_101 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_111 = 0;
  local_240 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_240 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_110 = local_240;
  }
  puVar6 = local_f0;
  local_38 = local_240;
  local_121 = 0;
  local_131 = 0;
  puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_111 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    local_270 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_131 = 1;
    local_130 = local_270;
  }
  else {
    local_270 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = local_270;
  }
  local_30 = local_270;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar6;
  if ((local_131 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  _memset(auStack_180,0,0x40);
  puVar3 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_2a0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_c0,0x10);
  if (local_2a0 != (undefined *)0x0) {
    lVar8 = *local_170;
    local_2a8 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar8 != 0) {
          _objc_enumerationMutation(*local_170 - lVar8,puVar3);
        }
        pcVar9 = *(char **)(local_178 + (long)local_2a8 * 8);
        pcVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_140 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_2d4 = 1;
        if ((pcVar9 != pcVar2) && (local_2d4 = 1, local_e8 != (char *)0x0)) {
          pcVar9 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isKindOfClass__0269cd68,local_e8);
          local_2d4 = (uint)pcVar9 ^ 1;
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if ((local_2d4 & 1) == 0) {
          puVar4 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,
                     local_140);
          _objc_retainAutoreleasedReturnValue();
          local_188 = puVar4;
          FUN_0001a4fc(puVar4,&cf_m_nsUsrName);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (((ulong)puVar6 & 1) == 0) {
            local_e0 = 5;
          }
          else {
            pcVar2 = local_140;
            FUN_0001a198(local_140,PTR_s_m_delegate_0269d0e0);
            _objc_retainAutoreleasedReturnValue();
            local_199 = 0;
            local_320 = pcVar2;
            if (pcVar2 == (char *)0x0) {
              local_320 = local_140;
              FUN_0001a4fc(local_140,&cf_m_delegate);
              _objc_retainAutoreleasedReturnValue();
              local_198 = local_320;
            }
            local_199 = pcVar2 == (char *)0x0;
            (*(code *)PTR__objc_retain_02578638)();
            local_190 = local_320;
            if ((local_199 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_198);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_190;
            bVar1 = local_190 != (char *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c8 = pcVar2;
            }
            local_e0 = (uint)bVar1;
            _objc_storeStrong(&local_190,0);
          }
          _objc_storeStrong(&local_188,0);
          if ((local_e0 != 0) && (local_e0 != 5)) goto LAB_00028888;
        }
        local_2a8 = local_2a8 + 1;
      } while (local_2a8 < local_2a0);
      local_2a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_c0,0x10)
      ;
      local_2a8 = (undefined *)0x0;
    } while (local_2a0 != (undefined *)0x0);
  }
  local_e0 = 0;
LAB_00028888:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_e0 == 0) {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = "MMMsgLogicManager";
    _objc_getClass();
    pcVar7 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar9);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_respondsToSelector__026ca818,PTR_s_currentLogicController_0269d470);
    if (((ulong)pcVar2 & 1) == 0) {
LAB_00028c68:
      local_c8 = (char *)0x0;
      local_e0 = 1;
    }
    else {
      pcVar2 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_currentLogicController_0269d470);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = pcVar2;
      FUN_0001a198(pcVar2,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      local_398 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_1c0 = local_1b0;
        FUN_0001a4fc(local_1b0,&cf_m_contact);
        _objc_retainAutoreleasedReturnValue();
        local_398 = local_1c0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = local_398;
      if (pcVar2 == (char *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_1c0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1b8;
      FUN_0001a4fc(local_1b8,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1b0;
      bVar1 = ((ulong)pcVar9 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = pcVar2;
      }
      local_e0 = (uint)bVar1;
      _objc_storeStrong(&local_1b8);
      _objc_storeStrong(&local_1b0,0);
      if (local_e0 == 0) goto LAB_00028c68;
    }
    _objc_storeStrong(&local_1a8,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
LAB_00028cdc:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

