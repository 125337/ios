// FUN_007bb070 @ 007bb070

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007bb070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *local_2e0;
  undefined *local_1f8;
  undefined *local_1f0;
  ulong local_1c0;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  ulong local_158;
  cfstringStruct *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  ulong local_c8;
  undefined8 local_c0;
  cfstringStruct *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  uVar4 = local_b0;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar4 & 1) == 0) {
    local_1c0 = 0;
  }
  else {
    local_1c0 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1c0;
  if ((local_1c0 == 0) || (local_b8 == (cfstringStruct *)0x0)) {
    local_d8 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    _memset(auStack_128,0,0x40);
    puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_menuLongPressActionsForTab__026a8308
               ,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f0 != (undefined *)0x0) {
      lVar8 = *local_118;
      local_1f8 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar8 != 0) {
            _objc_enumerationMutation(*local_118 - lVar8,puVar2);
          }
          uVar9 = *(undefined8 *)(local_120 + (long)local_1f8 * 8);
          local_e8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_integerValue_026ca750);
          puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
          local_130 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTelegramGroupingStore_026ce5a8,
                     PTR_s_runtimeTitleForLongPressAction_t_026a8310,uVar9,local_b8);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_e0;
          puVar7 = PTR_WCRTGMenuAction_026ce950;
          uVar9 = local_130;
          local_138 = puVar3;
          FUN_007bb938(local_130,local_b8);
          _objc_retainAutoreleasedReturnValue();
          local_178 = PTR___NSConcreteStackBlock_02578660;
          local_170 = 0xc2000000;
          local_16c = 0;
          local_168 = FUN_007bbb98;
          local_160 = &DAT_02579000;
          uVar4 = local_b0;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar5 = local_b8;
          local_158 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = local_130;
          uVar6 = local_c0;
          local_150 = pcVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_148 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_actionWithTitle_imageName_handle_0269fd70,puVar3,uVar9,&local_178)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(uVar9);
          _objc_storeStrong(&local_148);
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_158,0);
          _objc_storeStrong(&local_138,0);
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1f8 = (undefined *)0x0;
      } while (local_1f0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar4 = local_c8;
    if (puVar7 == (undefined *)0x0) {
      pcVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_2e0 = &cf_R_;
      }
      FUN_007bbbd8(uVar4,local_2e0,local_e0);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      local_d8 = 1;
    }
    else {
      FUN_007bc288(local_c8,local_c0,local_e0);
      local_d8 = 0;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

