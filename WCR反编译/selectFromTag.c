// selectFromTag @ 019fbe74

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationCheckViewController::selectFromTag(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ID IVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_240;
  char *local_200;
  char *local_1f8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  char *local_198;
  undefined1 auStack_190 [8];
  undefined **local_188;
  undefined *local_180;
  byte local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168 [3];
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  cfstringStruct *local_110;
  long local_108;
  undefined1 auStack_100 [8];
  char *local_f8;
  char *local_f0;
  undefined4 local_e4;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMServiceCenter";
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_getClass();
  pcVar4 = "ContactTagMgr";
  local_c0 = pcVar1;
  _objc_getClass();
  local_c8 = pcVar4;
  if ((local_c0 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSh__);
  }
  else {
    pcVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = (char *)0x0;
    local_d8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getAllLabelName_026af4b0);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_getAllLabelName_026af4b0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_e0;
      local_e0 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_e0;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
       pcVar1 == (char *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feU_h__);
      local_e4 = 1;
    }
    else {
      pcVar1 = "WCUIActionSheet";
      _objc_getClass();
      local_f0 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
        local_e4 = 1;
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_f8 = pcVar1;
        _objc_initWeak(auStack_100,local_b0);
        local_108 = 0;
        _memset(auStack_150,0,0x40);
        pcVar1 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f8 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        if (local_1f8 != (char *)0x0) {
          lVar8 = *local_140;
          local_200 = (char *)0x0;
          do {
            do {
              if (*local_140 - lVar8 != 0) {
                _objc_enumerationMutation(*local_140 - lVar8,pcVar1);
              }
              pcVar9 = *(cfstringStruct **)(local_148 + (long)local_200 * 8);
              local_171 = 0;
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_110 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((ulong)pcVar9 & 1) == 0) {
                local_240 = &::cf___;
              }
              else {
                local_240 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_copy_0269d150);
                local_171 = 1;
                local_170 = local_240;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_168[0] = local_240;
              if ((local_171 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_170);
              }
              pcVar9 = local_168[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_length_0269cca0);
              if (pcVar9 == (cfstringStruct *)0x0) {
                local_e4 = 3;
              }
              else {
                local_108 = local_108 + 1;
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_wcrFriendRelTag__lu_);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar2;
                _NSSelectorFromString();
                (*(code *)PTR__objc_release_02578630)(puVar2);
                ppuVar5 = &local_1c0;
                local_1c0 = PTR___NSConcreteStackBlock_02578660;
                local_1b8 = 0xc2000000;
                local_1b4 = 0;
                local_1b0 = FUN_019fc744;
                local_1a8 = &DAT_02589a18;
                local_180 = puVar3;
                _objc_copyWeak(auStack_190,auStack_100);
                pcVar9 = local_168[0];
                (*(code *)PTR__objc_retain_02578638)();
                local_1a0 = pcVar9;
                pcVar4 = local_d8;
                (*(code *)PTR__objc_retain_02578638)();
                local_198 = pcVar4;
                _objc_retainBlock();
                ppuVar6 = ppuVar5;
                _imp_implementationWithBlock();
                (*(code *)PTR__objc_release_02578630)(ppuVar5);
                IVar7 = local_b0;
                local_188 = ppuVar6;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
                _class_replaceMethod(IVar7,local_180,local_188,"v@:@");
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_addBtnTitle_target_sel__0269d278,local_168[0],local_b0,
                           local_180);
                _objc_storeStrong(&local_198);
                _objc_storeStrong(&local_1a0,0);
                _objc_destroyWeak(auStack_190);
                local_e4 = 0;
              }
              _objc_storeStrong(local_168,0);
              local_200 = local_200 + 1;
            } while (local_200 < local_1f8);
            local_1f8 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8
                       ,0x10);
            local_200 = (char *)0x0;
          } while (local_1f8 != (char *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
        pcVar1 = local_f8;
        IVar7 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
        (*(code *)PTR__objc_release_02578630)(IVar7);
        _objc_destroyWeak(auStack_100);
        _objc_storeStrong(&local_f8,0);
        local_e4 = 0;
      }
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

