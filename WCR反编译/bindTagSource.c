// bindTagSource @ 01aad068

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::bindTagSource(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  char *local_220;
  ID local_1f0;
  char *local_1a8;
  char *local_1a0;
  char *local_178;
  char *local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined1 auStack_148 [24];
  undefined *local_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  char *local_c8;
  char *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "ContactTagMgr";
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_getClass();
  FUN_01aad60c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar1;
  FUN_01a9c404(pcVar1,&cf_getAllLabelName);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     pcVar1 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feS__vU_h__);
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    pcVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_1a0 != (char *)0x0) {
      lVar5 = *local_110;
      local_1a8 = (char *)0x0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,pcVar1);
          }
          uVar6 = *(ulong *)(local_118 + (long)local_1a8 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0), uVar6 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_1a8 = (char *)0x0;
      } while (local_1a0 != (char *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_initWeak(auStack_128,local_b0);
    puVar3 = PTR_WCRGroupTagMultiSelectViewController_026cf310;
    _objc_alloc();
    puVar2 = local_d8;
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_memberSyncTagsDraft_026bdbd0);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = IVar4;
    if (IVar4 == 0) {
      local_1f0 = *(ID *)PTR____NSArray0___02578280;
    }
    local_168 = PTR___NSConcreteStackBlock_02578660;
    local_160 = 0xc2000000;
    local_15c = 0;
    local_158 = FUN_01aad974;
    local_150 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_148,auStack_128);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithAllTags_selectedTags_com_026bdd28,puVar2,local_1f0,&local_168);
    local_130 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_220 = "MMUINavigationController";
    _objc_getClass();
    if (local_220 == (char *)0x0) {
      local_220 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_170 = local_220;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_220,PTR_s_initWithRootViewController__0269d2a0,local_130);
    local_178 = local_220;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_220,1,0);
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_130,0);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_128);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

