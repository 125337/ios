// chooseGroupForPlugin:sourceView: @ 0178d938

/* Function Stack Size: 0x20 bytes */

void WCPluginsViewControllerBehavior::chooseGroupForPlugin_sourceView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  dispatch_time_t dVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  ID local_300;
  cfstringStruct *local_238;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [15];
  byte local_199;
  ID local_198;
  ID local_190;
  undefined4 local_188;
  undefined1 local_181;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  cfstringStruct *local_140 [3];
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined *local_d0;
  ID local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  puVar4 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar5;
  _objc_initWeak(auStack_e0,local_b0);
  _memset(auStack_128,0,0x40);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  local_200 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_200 != (undefined *)0x0) {
    lVar9 = *local_118;
    local_208 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar9 != 0) {
          _objc_enumerationMutation(*local_118 - lVar9,puVar4);
        }
        pcVar10 = *(cfstringStruct **)(local_120 + (long)local_208 * 8);
        local_e8 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        local_238 = pcVar10;
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_238 = &cf__g_TT;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_140[0] = local_238;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        puVar5 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_groupIdentifierForPlugin__026b4470,local_c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (((ulong)puVar6 & 1) != 0) {
          pcVar10 = &::cf__;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&::cf__,PTR_s_stringByAppendingString__0269d398,local_140[0]);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_140[0];
          local_140[0] = pcVar10;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        IVar7 = local_b0;
        puVar6 = local_d0;
        puVar5 = local_d8;
        pcVar10 = local_140[0];
        local_180 = PTR___NSConcreteStackBlock_02578660;
        local_178 = 0xc2000000;
        local_174 = 0;
        local_170 = FUN_0178e168;
        local_168 = &DAT_02588b00;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar2 = local_e8;
        local_160 = puVar6;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_c0;
        local_158 = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = uVar3;
        _objc_copyWeak(auStack_148,auStack_e0);
        local_181 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_menuActionWithTitle_handler__026b4740,pcVar10,&local_180);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
        local_181 = 0;
        (*(code *)PTR__objc_release_02578630)(IVar7);
        _objc_destroyWeak(auStack_148);
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_158,0);
        _objc_storeStrong(&local_160,0);
        _objc_storeStrong(local_140,0);
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_208 = (undefined *)0x0;
    } while (local_200 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_pluginLongPressMenuStyle_026b4770);
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_showNativeMenuWithTitle_actions__026b4778,&cf_bcR_,local_d8);
    local_188 = 1;
  }
  else {
    local_199 = 0;
    bVar1 = local_c8 == 0;
    if (bVar1) {
      local_300 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_198 = local_300;
    }
    else {
      local_300 = local_c8;
    }
    local_199 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = local_300;
    if ((local_199 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_198);
    }
    dVar8 = _dispatch_time(0,120000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = PTR___NSConcreteStackBlock_02578660;
    local_1d0 = 0xc2000000;
    local_1cc = 0;
    local_1c8 = FUN_0178e268;
    local_1c0 = &DAT_0257c978;
    _objc_copyWeak(auStack_1a8,auStack_e0);
    puVar5 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    IVar7 = local_190;
    local_1b8 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = IVar7;
    _dispatch_after(dVar8,puVar4,&local_1d8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_1b0);
    _objc_storeStrong(&local_1b8,0);
    _objc_destroyWeak(auStack_1a8);
    _objc_storeStrong(&local_190,0);
    local_188 = 0;
  }
  _objc_destroyWeak(auStack_e0);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

