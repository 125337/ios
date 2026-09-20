// wcrShowModelSheetForProvider:kind:allowSwitch: @ 017dab0c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

void WCRefineAISettingsViewController::wcrShowModelSheetForProvider_kind_allowSwitch_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ID IVar7;
  ID IVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_3d8;
  undefined *local_3d0;
  undefined *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 auStack_258 [15];
  undefined1 local_249;
  undefined *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  code *local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined1 auStack_220 [15];
  undefined1 local_211;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [15];
  undefined1 local_1d1;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  ID local_140;
  undefined1 local_131;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [31];
  undefined1 local_e1;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  byte local_c9;
  undefined8 local_c8;
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
  local_c9 = (byte)param_5;
  uVar10 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setEditingProviderID__026b5218);
  (*(code *)PTR__objc_release_02578630)(uVar10);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  _objc_initWeak(auStack_e0,local_b0);
  puVar3 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_apiKeyForProviderID_kind__0269d488,uVar10,local_c8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = puVar5 != (undefined *)0x0;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(uVar10);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar7 = local_b0;
  puVar4 = local_d8;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_e1 = bVar1;
  if (!bVar1) {
    uVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_kXQ);
    _objc_retainAutoreleasedReturnValue();
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_017dba7c;
    local_118 = &DAT_0257c978;
    _objc_copyWeak(auStack_100,auStack_e0);
    uVar11 = local_c0;
    local_131 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar10 = local_c8;
    local_110 = uVar11;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar7,PTR_s_actionWithTitle_block__026b5340,puVar3,&local_130);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    local_131 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_110,0);
    _objc_destroyWeak(auStack_100);
  }
  IVar7 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_wcrCurrentModelForProvider_kind__026b53b0,local_c0,local_c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  IVar8 = local_b0;
  local_140 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_wcrPresetsForProvider_kind__026b53b8,local_c0,local_c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithArray__0269eab8);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar3;
  (*(code *)PTR__objc_release_02578630)(IVar8);
  IVar7 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if ((IVar7 != 0) &&
     (puVar3 = local_148,
     (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_containsObject__0269cbb8,local_140),
     ((ulong)puVar3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_insertObject_atIndex__0269eac0,local_140,0);
  }
  _memset(auStack_190,0,0x40);
  puVar3 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_3d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_3d0 != (undefined *)0x0) {
    lVar12 = *local_180;
    local_3d8 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar12 != 0) {
          _objc_enumerationMutation(*local_180 - lVar12,puVar3);
        }
        IVar7 = local_b0;
        puVar4 = local_d8;
        uVar13 = *(ulong *)(local_188 + (long)local_3d8 * 8);
        uVar9 = uVar13;
        local_150 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isEqualToString__0269ccc8,local_140);
        local_1d0 = PTR___NSConcreteStackBlock_02578660;
        local_1c8 = 0xc2000000;
        local_1c4 = 0;
        local_1c0 = FUN_017dbae4;
        local_1b8 = &DAT_02588b00;
        _objc_copyWeak(auStack_198,auStack_e0);
        uVar2 = local_150;
        local_1d1 = 1;
        (*(code *)PTR__objc_retain_02578638)();
        uVar11 = local_c0;
        local_1b0 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        uVar10 = local_c8;
        local_1a8 = uVar11;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a0 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_actionWithTitle_highlighted_bloc_026b5310,uVar13,uVar9 & 0xffffffff,
                   &local_1d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
        local_1d1 = 0;
        (*(code *)PTR__objc_release_02578630)(IVar7);
        _objc_storeStrong(&local_1a0);
        _objc_storeStrong(&local_1a8,0);
        _objc_storeStrong(&local_1b0,0);
        _objc_destroyWeak(auStack_198);
        local_3d8 = local_3d8 + 1;
      } while (local_3d8 < local_3d0);
      local_3d0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_3d8 = (undefined *)0x0;
    } while (local_3d0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar7 = local_b0;
  puVar3 = local_d8;
  local_210 = PTR___NSConcreteStackBlock_02578660;
  local_208 = 0xc2000000;
  local_204 = 0;
  local_200 = FUN_017dbb50;
  local_1f8 = &DAT_0257c978;
  _objc_copyWeak(auStack_1e0,auStack_e0);
  uVar11 = local_c0;
  local_211 = 1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar10 = local_c8;
  local_1f0 = uVar11;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e8 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar7,PTR_s_actionWithTitle_block__026b5340,&cf_NNzSfY_jW_,&local_210);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_211 = 0;
  (*(code *)PTR__objc_release_02578630)(IVar7);
  IVar7 = local_b0;
  puVar3 = local_d8;
  if ((local_c9 & 1) != 0) {
    local_248 = PTR___NSConcreteStackBlock_02578660;
    local_240 = 0xc2000000;
    local_23c = 0;
    local_238 = FUN_017dbbb8;
    local_230 = &DAT_02579c60;
    _objc_copyWeak(auStack_220,auStack_e0);
    local_249 = 1;
    uVar10 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar7,PTR_s_actionWithTitle_block__026b5340,&cf_RbcgRFU_,&local_248);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_249 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_228,0);
    _objc_destroyWeak(auStack_220);
  }
  IVar7 = local_b0;
  puVar3 = local_d8;
  local_288 = PTR___NSConcreteStackBlock_02578660;
  local_280 = 0xc2000000;
  local_27c = 0;
  local_278 = FUN_017dbc1c;
  local_270 = &DAT_0257c978;
  _objc_copyWeak(auStack_258,auStack_e0);
  uVar10 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  uVar11 = local_c8;
  local_268 = uVar10;
  (*(code *)PTR__objc_retain_02578638)();
  local_260 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar7,PTR_s_actionWithTitle_block__026b5340,&cf_KbReQ_jW,&local_288);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  IVar7 = local_b0;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar10 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcrTitleForModelKind__026b53e0,local_c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar7,PTR_s_showSheetTitle_actions__026b5348,puVar3,local_d8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(uVar10);
  _objc_storeStrong(&local_260);
  _objc_storeStrong(&local_268,0);
  _objc_destroyWeak(auStack_258);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1f0,0);
  _objc_destroyWeak(auStack_1e0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_destroyWeak(auStack_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

