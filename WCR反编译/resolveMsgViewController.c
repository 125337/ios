// resolveMsgViewController @ 00951074

/* Function Stack Size: 0x10 bytes */

ID WCRClipboardHistoryPanelController::resolveMsgViewController(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_168;
  undefined *local_160 [4];
  undefined *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  uint local_ec;
  undefined *local_e8;
  undefined *local_e0;
  SEL local_d8;
  ID local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_inputToolView_0269d0e8);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = (undefined *)0x0;
  local_e0 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
  if ((param_1 & 1) != 0) {
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_e8;
    local_e8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_e8;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_e8;
  if (((ulong)puVar3 & 1) == 0) {
    if (local_e8 != (undefined *)0x0) {
      _memset(auStack_138,0,0x40);
      local_c0 = &cf_m_viewController;
      local_b8 = &cf_viewController;
      local_b0 = &cf_m_delegate;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_198 != (undefined *)0x0) {
        lVar5 = *local_128;
        local_1a0 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar5 != 0) {
              _objc_enumerationMutation(*local_128 - lVar5,puVar3);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_1a0 * 8);
            puVar4 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,local_f8);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            local_140 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            puVar2 = local_140;
            bVar1 = ((ulong)puVar4 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c8 = puVar2;
            }
            local_ec = (uint)bVar1;
            _objc_storeStrong(&local_140,0);
            if (local_ec != 0) goto LAB_00951400;
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1a0 = (undefined *)0x0;
        } while (local_198 != (undefined *)0x0);
      }
      local_ec = 0;
LAB_00951400:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_ec != 0) goto LAB_00951568;
    }
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_160[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsString__0269d0b0,&cf_MsgContent);
    if ((((ulong)puVar3 & 1) == 0) &&
       (puVar2 = local_168,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_168,PTR_s_containsString__0269d0b0,&cf_BaseMsgContent),
       puVar3 = local_160[0], ((ulong)puVar2 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = puVar3;
    }
    else {
      puVar3 = local_160[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = puVar3;
    }
    local_ec = 1;
    _objc_storeStrong(&local_168);
    _objc_storeStrong(local_160,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = puVar2;
    local_ec = 1;
  }
LAB_00951568:
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

