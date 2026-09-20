// preferredMainControllerForPluginName:controllers: @ 01ccbf78

/* Function Stack Size: 0x20 bytes */

ID WCRefineProfileCardActionConfigViewController::preferredMainControllerForPluginName_controllers_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_518;
  cfstringStruct *local_510;
  cfstringStruct *local_4d0;
  cfstringStruct *local_4c8;
  undefined *local_490;
  undefined *local_488;
  ulong local_448;
  ulong local_440;
  cfstringStruct *local_400;
  undefined1 auStack_3e8 [8];
  long local_3e0;
  long *local_3d8;
  cfstringStruct *local_3a8;
  cfstringStruct *local_3a0;
  undefined *local_398;
  undefined1 auStack_390 [8];
  long local_388;
  long *local_380;
  cfstringStruct *local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  undefined8 local_308;
  undefined *local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  ulong local_2b8;
  cfstringStruct *local_2b0;
  int local_2a4;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  ulong local_290;
  cfstringStruct *local_288;
  SEL local_280;
  ID local_278;
  cfstringStruct *local_270;
  undefined1 auStack_268 [128];
  undefined1 auStack_1e8 [128];
  undefined1 auStack_168 [128];
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_288 = (cfstringStruct *)0x0;
  local_280 = param_2;
  local_278 = param_1;
  _objc_storeStrong(&local_288,param_3);
  local_290 = 0;
  _objc_storeStrong(&local_290,param_4);
  pcVar4 = local_288;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_400 = &::cf___;
  }
  else {
    local_400 = local_288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_298 = local_400;
  (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_298;
  local_2a0 = local_400;
  (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_containsString__0269d0b0,&cf_WCRefine);
  if ((((ulong)pcVar4 & 1) == 0) &&
     (pcVar4 = local_2a0,
     (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_containsString__0269d0b0,&cf_wcrefine),
     ((ulong)pcVar4 & 1) == 0)) {
    pcVar4 = local_298;
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_containsString__0269d0b0,&cf___);
    if ((((ulong)pcVar4 & 1) == 0) &&
       ((pcVar4 = local_2a0,
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_containsString__0269d0b0,&cf_xxuegao),
        ((ulong)pcVar4 & 1) == 0 &&
        (pcVar4 = local_2a0,
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_containsString__0269d0b0,&cf_xuegao),
        ((ulong)pcVar4 & 1) == 0)))) {
      pcVar4 = local_298;
      (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_containsString__0269d0b0,&cf_mo_O__);
      if ((((ulong)pcVar4 & 1) == 0) &&
         (pcVar4 = local_2a0,
         (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_containsString__0269d0b0,&cf_msgfilt)
         , ((ulong)pcVar4 & 1) == 0)) {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_2b0 = pcVar4;
        _memset(auStack_2f8,0,0x40);
        uVar2 = local_290;
        (*(code *)PTR__objc_retain_02578638)();
        local_440 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_a8,0x10
                  );
        if (local_440 != 0) {
          lVar7 = *local_2e8;
          local_448 = 0;
          do {
            do {
              if (*local_2e8 - lVar7 != 0) {
                _objc_enumerationMutation(*local_2e8 - lVar7,uVar2);
              }
              uVar8 = *(ulong *)(local_2f0 + local_448 * 8);
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_2b8 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((uVar8 & 1) != 0) &&
                 (uVar8 = local_2b8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0), uVar8 != 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_addObject__0269d180,local_2b8)
                ;
              }
              local_448 = local_448 + 1;
            } while (local_448 < local_440);
            local_440 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_a8,
                       0x10);
            local_448 = 0;
          } while (local_440 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        pcVar4 = local_2b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_count_0269cfe0);
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_270 = (cfstringStruct *)0x0;
          local_2a4 = 1;
        }
        else {
          local_e8 = &cf_SettingsController;
          local_e0 = &cf_SettingViewController;
          local_d8 = &cf_SettingsViewController;
          local_d0 = &cf_SettingController;
          local_c8 = &cf_MainViewController;
          local_c0 = &cf_MainController;
          local_b8 = &cf_HomeViewController;
          local_b0 = &cf_HomeController;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_e8,8);
          _objc_retainAutoreleasedReturnValue();
          local_300 = puVar3;
          _memset(auStack_348,0,0x40);
          puVar3 = local_300;
          (*(code *)PTR__objc_retain_02578638)();
          local_488 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_168,
                     0x10);
          if (local_488 != (undefined *)0x0) {
            lVar7 = *local_338;
            local_490 = (undefined *)0x0;
            do {
              do {
                if (*local_338 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_338 - lVar7,puVar3);
                }
                local_308 = *(undefined8 *)(local_340 + (long)local_490 * 8);
                _memset(auStack_390,0,0x40);
                pcVar4 = local_2b0;
                (*(code *)PTR__objc_retain_02578638)();
                local_4c8 = pcVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,
                           auStack_1e8,0x10);
                if (local_4c8 != (cfstringStruct *)0x0) {
                  lVar9 = *local_380;
                  local_4d0 = (cfstringStruct *)0x0;
                  do {
                    do {
                      if (*local_380 - lVar9 != 0) {
                        _objc_enumerationMutation(*local_380 - lVar9,pcVar4);
                      }
                      pcVar10 = *(cfstringStruct **)(local_388 + (long)local_4d0 * 8);
                      puVar6 = PTR_s_rangeOfString_options__0269d118;
                      local_350 = pcVar10;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar10,PTR_s_rangeOfString_options__0269d118,local_308,1);
                      pcVar1 = local_350;
                      local_3a0 = pcVar10;
                      local_398 = puVar6;
                      if (pcVar10 != (cfstringStruct *)0x7fffffffffffffff) {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_270 = pcVar1;
                        local_2a4 = 1;
                        goto LAB_01ccc6f0;
                      }
                      local_4d0 = (cfstringStruct *)((long)&local_4d0->field0_0x0 + 1);
                    } while (local_4d0 < local_4c8);
                    local_4c8 = pcVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,
                               auStack_1e8,0x10);
                    local_4d0 = (cfstringStruct *)0x0;
                  } while (local_4c8 != (cfstringStruct *)0x0);
                }
                local_2a4 = 0;
LAB_01ccc6f0:
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                if (local_2a4 != 0) goto LAB_01ccc778;
                local_490 = local_490 + 1;
              } while (local_490 < local_488);
              local_488 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,
                         auStack_168,0x10);
              local_490 = (undefined *)0x0;
            } while (local_488 != (undefined *)0x0);
          }
          local_2a4 = 0;
LAB_01ccc778:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_2a4 == 0) {
            _memset(auStack_3e8,0,0x40);
            pcVar4 = local_2b0;
            (*(code *)PTR__objc_retain_02578638)();
            local_510 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,
                       auStack_268,0x10);
            if (local_510 != (cfstringStruct *)0x0) {
              lVar7 = *local_3d8;
              local_518 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_3d8 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_3d8 - lVar7,pcVar4);
                  }
                  local_3a8 = *(cfstringStruct **)(local_3e0 + (long)local_518 * 8);
                  IVar5 = local_278;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_278,PTR_s_isLikelySubpageControllerName__026c2bc0,local_3a8);
                  pcVar1 = local_3a8;
                  if ((IVar5 & 1) == 0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_270 = pcVar1;
                    local_2a4 = 1;
                    goto LAB_01ccc908;
                  }
                  local_518 = (cfstringStruct *)((long)&local_518->field0_0x0 + 1);
                } while (local_518 < local_510);
                local_510 = pcVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,
                           auStack_268,0x10);
                local_518 = (cfstringStruct *)0x0;
              } while (local_510 != (cfstringStruct *)0x0);
            }
            local_2a4 = 0;
LAB_01ccc908:
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            if (local_2a4 == 0) {
              pcVar4 = local_2b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_firstObject_0269d1f8);
              _objc_retainAutoreleasedReturnValue();
              local_2a4 = 1;
              local_270 = pcVar4;
            }
          }
          _objc_storeStrong(&local_300,0);
        }
        _objc_storeStrong(&local_2b0,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_270 = &cf_MsgFiltViewController;
        local_2a4 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_270 = &cf_xxuegaoSettingsViewController;
      local_2a4 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = &cf_WCRefineRootViewController;
    local_2a4 = 1;
  }
  _objc_storeStrong(&local_2a0);
  _objc_storeStrong(&local_298,0);
  _objc_storeStrong(&local_290,0);
  _objc_storeStrong(&local_288,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_270;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

