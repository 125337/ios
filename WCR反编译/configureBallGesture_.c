// configureBallGesture: @ 01e2ad38

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::configureBallGesture_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  undefined *puVar7;
  void *pvVar8;
  ID IVar9;
  long lVar10;
  ulong uVar11;
  void *local_2c8;
  void *local_2c0;
  cfstringStruct *local_250;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  code *local_1f8;
  undefined *local_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined *local_1d8;
  ID local_1d0;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  undefined *local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  undefined4 local_154;
  ulong local_138;
  ulong local_130;
  SEL local_128;
  ID local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  ID local_f8;
  ulong local_f0;
  undefined1 auStack_e8 [128];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  local_128 = param_2;
  local_120 = param_1;
  _objc_storeStrong(&local_130,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  local_138 = 0;
  uVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_valueForKey__0269d128,&cf_userInfo);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = local_138;
  local_138 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar11);
  uVar11 = local_138;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((uVar11 & 1) == 0) ||
     (uVar11 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
     uVar11 == 0)) {
    local_154 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setPendingGestureKey__026c6268,local_138);
    pcVar5 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballGestureActionForKey__026b1958,
               local_138);
    _objc_retainAutoreleasedReturnValue();
    local_250 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_250 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = local_250;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_120;
    local_168 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_isMenuTriggerGestureKey__026c5fb8,local_138);
    bVar1 = false;
    if ((IVar6 & 1) != 0) {
      pcVar5 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
      bVar1 = pcVar5 == (cfstringStruct *)0x0;
    }
    pcVar5 = &::cf_Sb;
    if (!bVar1) {
      pcVar5 = &cf_eR_O;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_168;
    local_48 = &cf_title;
    local_40 = &cf_id;
    local_30 = &::cf___;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_170 = pcVar5;
    local_38 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_setWithObject__026ad5c8,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = local_138;
    local_178 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isEqualToString__0269ccc8,&cf_longPress);
    puVar4 = local_168;
    if ((uVar11 & 1) != 0) {
      local_68 = &cf_title;
      local_58 = &cf_bR;
      local_60 = &cf_id;
      local_50 = &cf_wcr_sf_drag_ball;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_addObject__0269d180,&cf_wcr_sf_drag_ball);
    }
    pvVar8 = _memset(auStack_1c0,0,0x40);
    _WCRSuperFloatRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    local_2c0 = pvVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2c0 != (void *)0x0) {
      lVar10 = *local_1b0;
      local_2c8 = (void *)0x0;
      do {
        do {
          if (*local_1b0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar10,pvVar8);
          }
          uVar11 = *(ulong *)(local_1b8 + (long)local_2c8 * 8);
          local_180 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar11,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1c8 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((uVar11 & 1) == 0) ||
             (uVar11 = local_1c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0), uVar11 == 0)) {
            local_154 = 4;
          }
          else {
            puVar4 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_containsObject__0269cbb8,local_1c8);
            if (((ulong)puVar4 & 1) == 0) {
              uVar11 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c8,PTR_s_isEqualToString__0269ccc8,_WCRSuperFloatActionSwitchPet);
              if (((uVar11 & 1) == 0) ||
                 (puVar4 = PTR_WCRSuperFloatProfileStore_026cee48,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballAppearance_026b18a0),
                 puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
                IVar6 = local_120;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_titleForGestureActionId__026c5fc0,local_1c8);
                _objc_retainAutoreleasedReturnValue();
                local_1d0 = IVar6;
                (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0);
                if ((IVar6 == 0) ||
                   (IVar6 = local_120,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_120,PTR_s_wcr_isTechnicalActionTitle__026c6250,local_1d0),
                   (IVar6 & 1) != 0)) {
                  IVar9 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_wcr_friendlyFallbackTitleForActi_026c6258,local_1c8);
                  _objc_retainAutoreleasedReturnValue();
                  IVar6 = local_1d0;
                  local_1d0 = IVar9;
                  (*(code *)PTR__objc_release_02578630)(IVar6);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_addObject__0269d180,local_1c8)
                ;
                puVar4 = local_168;
                local_108 = &cf_title;
                local_f8 = local_1d0;
                local_100 = &cf_id;
                local_f0 = local_1c8;
                puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_108,2);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                _objc_storeStrong(&local_1d0,0);
                local_154 = 0;
              }
              else {
                local_154 = 4;
              }
            }
            else {
              local_154 = 4;
            }
          }
          _objc_storeStrong(&local_1c8,0);
          local_2c8 = (void *)((long)local_2c8 + 1);
        } while (local_2c8 < local_2c0);
        local_2c0 = pvVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_e8,
                   0x10);
        local_2c8 = (void *)0x0;
      } while (local_2c0 != (void *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pvVar8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_setPendingGestureActions__026c6270,local_168);
    puVar4 = PTR_WCRSFGestureActionPickController_026cf628;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSFGestureActionPickController_026cf628,PTR_s_new_0269d288);
    puVar7 = PTR_WCRSuperFloatProfileStore_026cee48;
    local_1d8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_titleForBallGestureKey__026c5fd0,
               local_138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setGestureKey__026c6278,local_138);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setCurrentActionId__026c6280,local_160);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setRows__026be838,local_168);
    _objc_initWeak(auStack_1e0,local_120);
    local_208 = PTR___NSConcreteStackBlock_02578660;
    local_200 = 0xc2000000;
    local_1fc = 0;
    local_1f8 = FUN_01e2bae8;
    local_1f0 = &DAT_0257c558;
    _objc_copyWeak(auStack_1e8,auStack_1e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setOnPicked__026c6290,&local_208);
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_initWithRootViewController__0269d2a0,local_1d8);
    local_210 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setModalPresentationStyle__0269d2a8,1);
    iVar2 = 2;
    ___isPlatformVersionAtLeast(2,0xf,0);
    if (iVar2 != 0) {
      puVar4 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_sheetPresentationController_026af2b8);
      _objc_retainAutoreleasedReturnValue();
      local_218 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setPrefersGrabberVisible__026af2c0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4032000000000000,local_218,PTR_s_setPreferredCornerRadius__026b68c8);
      pcVar5 = &cf_UISheetPresentationControllerDetent;
      _NSClassFromString();
      local_220 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,
                 PTR_s_customDetentWithIdentifier_resol_026af2d8);
      if (((ulong)pcVar5 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___UISheetPresentationControllerDetent_026cf618;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UISheetPresentationControllerDetent_026cf618,
                   PTR_s_mediumDetent_026af300);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_118 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_118,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setDetents__026af2f0);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        pcVar5 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_customDetentWithIdentifier_resol_026af2d8,&cf_WCRSFGesturePick,
                   &PTR___NSConcreteGlobalBlock_0258c738);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_228 = pcVar5;
        local_110 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_110,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setDetents__026af2f0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_228,0);
      }
      _objc_storeStrong(&local_218,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_presentViewController_animated_c_0269d2b0,local_210,1,0);
    _objc_storeStrong(&local_210);
    _objc_destroyWeak(auStack_1e8);
    _objc_destroyWeak(auStack_1e0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    local_154 = 0;
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

