// selectContactTag @ 0185fd90

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::selectContactTag(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  char *local_1d8;
  char *local_1d0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  long local_178;
  char *local_170;
  undefined1 auStack_168 [8];
  undefined **local_160;
  undefined *local_158;
  long local_150 [3];
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  long local_f0;
  undefined1 auStack_e8 [8];
  char *local_e0;
  char *local_d8;
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
  FUN_01860530();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar1;
  FUN_018606cc(pcVar1,PTR_s_getAllLabelName_026af4b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     pcVar1 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feU_h__);
    local_cc = 1;
  }
  else {
    pcVar1 = "WCUIActionSheet";
    _objc_getClass();
    local_d8 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_cc = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = pcVar1;
      _objc_initWeak(auStack_e8,local_b0);
      local_f0 = 0;
      _memset(auStack_138,0,0x40);
      pcVar1 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      if (local_1d0 != (char *)0x0) {
        lVar8 = *local_128;
        local_1d8 = (char *)0x0;
        do {
          do {
            if (*local_128 - lVar8 != 0) {
              _objc_enumerationMutation(*local_128 - lVar8,pcVar1);
            }
            lVar9 = *(long *)(local_130 + (long)local_1d8 * 8);
            local_f8 = lVar9;
            FUN_01860804();
            _objc_retainAutoreleasedReturnValue();
            local_150[0] = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
            if (lVar9 == 0) {
              local_cc = 3;
            }
            else {
              local_f0 = local_f0 + 1;
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_wcrBatchRemarkTag__lu_);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar2;
              _NSSelectorFromString();
              (*(code *)PTR__objc_release_02578630)(puVar2);
              ppuVar5 = &local_198;
              local_198 = PTR___NSConcreteStackBlock_02578660;
              local_190 = 0xc2000000;
              local_18c = 0;
              local_188 = FUN_01860974;
              local_180 = &DAT_02589a18;
              local_158 = puVar3;
              _objc_copyWeak(auStack_168,auStack_e8);
              lVar9 = local_150[0];
              (*(code *)PTR__objc_retain_02578638)();
              local_178 = lVar9;
              pcVar4 = local_c0;
              (*(code *)PTR__objc_retain_02578638)();
              local_170 = pcVar4;
              _objc_retainBlock();
              ppuVar6 = ppuVar5;
              _imp_implementationWithBlock();
              (*(code *)PTR__objc_release_02578630)(ppuVar5);
              IVar7 = local_b0;
              local_160 = ppuVar6;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
              _class_replaceMethod(IVar7,local_158,local_160,"v@:@");
              pcVar4 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_respondsToSelector__026ca818,
                         PTR_s_addBtnTitle_target_sel__0269d278);
              if (((ulong)pcVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_addBtnTitle_target_sel__0269d278,local_150[0],local_b0,
                           local_158);
              }
              _objc_storeStrong(&local_170);
              _objc_storeStrong(&local_178,0);
              _objc_destroyWeak(auStack_168);
              local_cc = 0;
            }
            _objc_storeStrong(local_150,0);
            local_1d8 = local_1d8 + 1;
          } while (local_1d8 < local_1d0);
          local_1d0 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1d8 = (char *)0x0;
        } while (local_1d0 != (char *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      }
      pcVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
      pcVar1 = local_e0;
      puVar2 = PTR_s_showInView__0269d310;
      if (((ulong)pcVar4 & 1) != 0) {
        IVar7 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar2);
        (*(code *)PTR__objc_release_02578630)(IVar7);
      }
      _objc_destroyWeak(auStack_e8);
      _objc_storeStrong(&local_e0,0);
      local_cc = 0;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

