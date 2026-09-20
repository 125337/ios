// wcr_currentChatViewController @ 009d8648

/* Function Stack Size: 0x10 bytes */

ID WCRefineAnonymousAtHelper::wcr_currentChatViewController(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_188;
  undefined *local_178;
  undefined *local_168;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  int local_dc;
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar5 = PTR_WCRefineHelper_026ce000;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = "BaseMsgContentViewController";
  local_c8 = puVar5;
  _objc_getClass();
  puVar5 = local_c8;
  local_d0 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = puVar5;
  while (local_d8 != (undefined *)0x0) {
    if ((local_d0 != (char *)0x0) &&
       (puVar2 = local_d8,
       (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isKindOfClass__0269cd68,local_d0),
       puVar5 = local_d8, ((ulong)puVar2 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar5;
      local_dc = 1;
      goto LAB_009d8b18;
    }
    puVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    local_168 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_168 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_168;
    }
    local_e9 = puVar5 == (undefined *)0x0;
    _objc_storeStrong(&local_d8,local_168);
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_b0 = (undefined *)0x0;
    local_dc = 1;
  }
  else {
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_c8;
    local_178 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar5 & 1) == 0) {
        local_188 = (undefined *)0x0;
      }
      else {
        local_188 = local_c8;
      }
      local_178 = local_188;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_178;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_148,0,0x40);
    puVar5 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar4 = *local_138;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,puVar2);
          }
          puVar5 = *(undefined **)(local_140 + (long)local_1c0 * 8);
          local_108 = puVar5;
          if ((local_d0 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,local_d0),
             puVar3 = local_108, ((ulong)puVar5 & 1) != 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar3;
            local_dc = 1;
            goto LAB_009d8ac8;
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    local_dc = 0;
LAB_009d8ac8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_dc == 0) {
      local_b0 = (undefined *)0x0;
      local_dc = 1;
    }
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f8,0);
LAB_009d8b18:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

