// FUN_0055e724 @ 0055e724

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0055e724(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long local_2e8;
  undefined *local_260;
  undefined *local_258;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  long local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  char *local_100;
  char *local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_4;
  local_c0 = param_3;
  local_b8 = param_1;
  uStack_b0 = param_2;
  _objc_storeStrong(&local_d0,param_5);
  puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
             PTR_s_configuredEntriesForListKind__0269ea68,4);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    local_e8 = 1;
    goto LAB_0055efe4;
  }
  lVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_WCRefineFindViewController_026a50b0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = lVar6;
  if (lVar6 == 0) {
    local_e8 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar3 == (undefined *)0x0) {
      pcVar4 = "WCUIActionSheet";
      _objc_getClass();
      local_f8 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithTitle__0269d2f8,&cf_gSWSQ);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        puVar3 = local_d8;
        local_100 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
        _objc_retainAutoreleasedReturnValue();
        local_108 = puVar2;
        _memset(auStack_150,0,0x40);
        puVar2 = local_d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_258 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        if (local_258 != (undefined *)0x0) {
          lVar6 = *local_140;
          local_260 = (undefined *)0x0;
          do {
            do {
              if (*local_140 - lVar6 != 0) {
                _objc_enumerationMutation(*local_140 - lVar6,puVar2);
              }
              local_110 = *(undefined8 *)(local_148 + (long)local_260 * 8);
              puVar3 = PTR_WCRMomentsMenuActionTarget_026ce760;
              _objc_alloc_init();
              local_158 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setCell__026a51a8,local_c0);
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setDataItem__026a18b0,local_d0);
              uVar5 = local_110;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setValue__026a51b0);
              (*(code *)PTR__objc_release_02578630)(uVar5);
              uStack_178 = uStack_b0;
              local_180 = local_b8;
              local_170 = local_180;
              uStack_168 = uStack_178;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,uStack_b0,local_158,PTR_s_setLocation__026a51b8);
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_158);
              pcVar4 = local_100;
              uVar5 = local_110;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,uVar5,local_158,
                         PTR_s_perform__026a51c0);
              (*(code *)PTR__objc_release_02578630)(uVar5);
              _objc_storeStrong(&local_158,0);
              local_260 = local_260 + 1;
            } while (local_260 < local_258);
            local_258 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8
                       ,0x10);
            local_260 = (undefined *)0x0;
          } while (local_258 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
        _objc_setAssociatedObject(local_100,&DAT_028cb549,local_108,1);
        pcVar4 = local_100;
        lVar6 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showInView__0269d310);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        local_e8 = 1;
        _objc_storeStrong(&local_108);
        _objc_storeStrong(&local_100,0);
        goto LAB_0055efd4;
      }
    }
    lVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
    _objc_retainAutoreleasedReturnValue();
    local_2e8 = lVar6;
    if (lVar6 == 0) {
      local_2e8 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = local_2e8;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    _objc_initWeak(auStack_190,local_c0);
    puVar2 = local_d8;
    lVar1 = local_f0;
    lVar6 = local_188;
    local_1d0 = PTR___NSConcreteStackBlock_02578660;
    local_1c8 = 0xc2000000;
    local_1c4 = 0;
    local_1c0 = FUN_0056c198;
    local_1b8 = &DAT_0257ddc8;
    _objc_copyWeak(auStack_1a8,auStack_190);
    uVar5 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar5;
    uStack_198 = uStack_b0;
    local_1a0 = local_b8;
    FUN_00569598(lVar1,lVar6,puVar2,&local_1d0);
    _objc_storeStrong(&local_1b0);
    _objc_destroyWeak(auStack_1a8);
    _objc_destroyWeak(auStack_190);
    _objc_storeStrong(&local_188,0);
    local_e8 = 0;
  }
LAB_0055efd4:
  _objc_storeStrong(&local_f0,0);
LAB_0055efe4:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

