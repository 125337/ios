// showActionsAtIndex: @ 01c83278

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubCustomEntriesViewController::showActionsAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  ulong local_340;
  ulong local_338;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined *local_1c0;
  char *local_1b8;
  undefined4 local_1ac;
  char *local_1a8;
  char *local_1a0;
  undefined1 local_193;
  undefined1 local_192;
  undefined1 local_191;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  unsigned_long_long local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  unsigned_long_long local_138;
  byte local_130;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined1 auStack_100 [8];
  unsigned_long_long local_f8;
  undefined1 auStack_f0 [15];
  byte local_e1;
  ID local_e0;
  unsigned_long_long local_d8;
  SEL local_d0;
  ID local_c8;
  undefined1 auStack_c0 [128];
  ID local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_3;
  local_d0 = param_2;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_entries_026a25d0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (param_3 < IVar2) {
    IVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_e1 = (byte)IVar3;
    _objc_initWeak(auStack_f0,local_c8);
    IVar2 = local_c8;
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_01c83be4;
    local_108 = &DAT_025799c0;
    _objc_copyWeak(auStack_100,auStack_f0);
    local_193 = 1;
    local_f8 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_menuActionWithTitle_block__026c27a8,&cf__,&local_120);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_c8;
    pcVar1 = &cf__P_u;
    if ((local_e1 & 1) == 0) {
      pcVar1 = &cf__T_u;
    }
    local_160 = PTR___NSConcreteStackBlock_02578660;
    local_158 = 0xc2000000;
    local_154 = 0;
    local_150 = FUN_01c83c48;
    local_148 = &DAT_0258a208;
    local_130 = local_e1 & 1;
    local_138 = local_d8;
    local_40 = IVar2;
    _objc_copyWeak(auStack_140,auStack_f0);
    local_192 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_menuActionWithTitle_block__026c27a8,pcVar1,&local_160);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_c8;
    local_190 = PTR___NSConcreteStackBlock_02578660;
    local_188 = 0xc2000000;
    local_184 = 0;
    local_180 = FUN_01c83d04;
    local_178 = &DAT_025799c0;
    local_168 = local_d8;
    local_38 = IVar3;
    _objc_copyWeak(auStack_170,auStack_f0);
    local_191 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_menuActionWithTitle_block__026c27a8,&cf_Rd,&local_190);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setNativeActions__026c27c8);
    local_191 = 0;
    local_192 = 0;
    local_193 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar6 = "WCActionSheet";
    _objc_getClass();
    pcVar7 = "WCActionSheetItem";
    local_1a0 = pcVar6;
    _objc_getClass();
    local_1a8 = pcVar7;
    if ((local_1a0 == (char *)0x0) || (pcVar7 == (char *)0x0)) {
      local_1ac = 1;
    }
    else {
      pcVar6 = local_1a0;
      _objc_alloc();
      IVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,IVar2,local_c8,&cf_Sm,0);
      local_1b8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = puVar5;
      _memset(auStack_208,0,0x40);
      IVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_nativeActions_026c27d0);
      _objc_retainAutoreleasedReturnValue();
      local_338 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_338 != 0) {
        lVar9 = *local_1f8;
        local_340 = 0;
        do {
          do {
            if (*local_1f8 - lVar9 != 0) {
              _objc_enumerationMutation(*local_1f8 - lVar9,IVar2);
            }
            puVar5 = local_1c0;
            local_1c8 = *(undefined8 *)(local_200 + local_340 * 8);
            pcVar6 = local_1a8;
            _objc_alloc();
            uVar8 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTitle__0269d2f8);
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180,pcVar6);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            local_340 = local_340 + 1;
          } while (local_340 < local_338);
          local_338 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_c0,
                     0x10);
          local_340 = 0;
        } while (local_338 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_setValue_forKey__0269d300,local_1c0,&cf_buttonTitleList);
      pcVar6 = local_1b8;
      puVar5 = PTR_s_showInView__0269d310;
      IVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_1c0);
      _objc_storeStrong(&local_1b8,0);
      local_1ac = 0;
    }
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f0);
    _objc_storeStrong(&local_e0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

