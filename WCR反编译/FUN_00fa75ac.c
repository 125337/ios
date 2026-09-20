// FUN_00fa75ac @ 00fa75ac

void FUN_00fa75ac(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_288;
  undefined *local_280;
  char *local_210;
  undefined *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  char *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  char *local_158;
  char *local_150;
  char *local_148;
  uint local_13c;
  long local_138;
  char *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  lVar7 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
  if (lVar7 == 0) {
    local_130 = (char *)0x0;
    local_13c = 1;
    goto LAB_00fa7eec;
  }
  pcVar8 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMMsgLogicManager";
  _objc_getClass("MMMsgLogicManager");
  pcVar3 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_getService__0269d170,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_148 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  pcVar8 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_respondsToSelector__026ca818,PTR_s_currentLogicController_0269d470);
  if (((ulong)pcVar8 & 1) == 0) {
LAB_00fa774c:
    pcVar8 = "BaseMsgContentViewController";
    _objc_getClass();
    puVar4 = PTR_WCRefineHelper_026ce000;
    local_158 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar4;
    while( true ) {
      puVar4 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar4 == (undefined *)0x0) break;
      puVar5 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_160;
      local_160 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar4;
    if (local_160 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,local_160);
    }
    puVar5 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_160;
    puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_170 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      _objc_storeStrong(&local_170,local_160);
    }
    _memset(auStack_1b8,0,0x40);
    puVar4 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    local_280 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_280 != (undefined *)0x0) {
      lVar7 = *local_1a8;
      local_288 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar7,puVar4);
          }
          local_178 = *(undefined8 *)(local_1b0 + (long)local_288 * 8);
          puVar5 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_containsObject__0269cbb8,local_178);
          if (((ulong)puVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_178);
          }
          local_288 = local_288 + 1;
        } while (local_288 < local_280);
        local_280 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_288 = (undefined *)0x0;
      } while (local_280 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _memset(auStack_200,0,0x40);
    puVar4 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,0x10);
    if (local_2c0 != (undefined *)0x0) {
      lVar7 = *local_1f0;
      local_2c8 = (undefined *)0x0;
      do {
        do {
          if (*local_1f0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1f0 - lVar7,puVar4);
          }
          pcVar8 = *(char **)(local_1f8 + (long)local_2c8 * 8);
          local_1c0 = pcVar8;
          if ((local_158 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,local_158),
             ((ulong)pcVar8 & 1) != 0)) {
            puVar5 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,
                       local_1c0);
            _objc_retainAutoreleasedReturnValue();
            local_208 = puVar5;
            FUN_00fc7ee4();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (((ulong)puVar6 & 1) == 0) {
              local_13c = 7;
            }
            else {
              local_210 = (char *)0x0;
              pcVar8 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
              if (((ulong)pcVar8 & 1) != 0) {
                pcVar2 = local_1c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_m_delegate_0269d0e0);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_210;
                local_210 = pcVar2;
                (*(code *)PTR__objc_release_02578630)(pcVar8);
              }
              if (local_210 == (char *)0x0) {
                pcVar2 = local_1c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0,PTR_s_valueForKey__0269d128,&cf_m_delegate);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_210;
                local_210 = pcVar2;
                (*(code *)PTR__objc_release_02578630)(pcVar8);
              }
              pcVar2 = local_210;
              FUN_00fc7c90(local_210,local_138);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              pcVar8 = local_210;
              if (pcVar2 != (char *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = pcVar8;
              }
              local_13c = (uint)(pcVar2 != (char *)0x0);
              _objc_storeStrong(&local_210,0);
            }
            _objc_storeStrong(&local_208,0);
            if ((local_13c != 0) && (local_13c != 7)) goto LAB_00fa7de8;
          }
          local_2c8 = local_2c8 + 1;
        } while (local_2c8 < local_2c0);
        local_2c0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                   0x10);
        local_2c8 = (undefined *)0x0;
      } while (local_2c0 != (undefined *)0x0);
    }
    local_13c = 0;
LAB_00fa7de8:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_13c == 0) {
      pcVar8 = "WCRefineLinkMediaSender";
      _objc_getClass();
      puVar4 = PTR_s_logicControllerForChat__026ad0a8;
      pcVar2 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar8,PTR_s_respondsToSelector__026ca818,PTR_s_logicControllerForChat__026ad0a8);
      if (((ulong)pcVar2 & 1) == 0) {
        local_130 = (char *)0x0;
        local_13c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,puVar4,local_138);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar8;
        FUN_00fc7c90();
        _objc_retainAutoreleasedReturnValue();
        local_130 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        local_13c = 1;
      }
    }
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
  }
  else {
    pcVar8 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_currentLogicController_0269d470);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar8;
    FUN_00fc7c90();
    _objc_retainAutoreleasedReturnValue();
    local_150 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    pcVar8 = local_150;
    bVar1 = local_150 != (char *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = pcVar8;
    }
    local_13c = (uint)bVar1;
    _objc_storeStrong(&local_150,0);
    if (local_13c == 0) goto LAB_00fa774c;
  }
  _objc_storeStrong(&local_148,0);
LAB_00fa7eec:
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

