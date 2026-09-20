// WCRLEInstallSheetDragGuard @ 01b5ccf0

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::WCRLEInstallSheetDragGuard(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *local_370;
  uint local_354;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  undefined *local_2a0;
  undefined *local_298;
  cfstringStruct *local_258;
  bool local_241;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  undefined1 local_219;
  cfstringStruct *local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  long local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  SEL local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_halfSheetAppearance_026bf7d8);
  if ((param_1 & 1) != 0) {
    pcVar9 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_258 = pcVar9;
    if (pcVar9 == (cfstringStruct *)0x0) {
      local_258 = local_130;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = local_258;
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    pcVar9 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_148 = pcVar11;
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = local_140;
    local_150 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_160 = 0;
    local_158 = pcVar9;
    while (local_160 < 10 && local_158 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
      local_160 = local_160 + 1;
      pcVar11 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = local_158;
      local_158 = pcVar11;
      (*(code *)PTR__objc_release_02578630)(pcVar9);
    }
    pcVar9 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_presentationController_026af278);
    _objc_retainAutoreleasedReturnValue();
    local_168 = pcVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar9,PTR_s_respondsToSelector__026ca818,PTR_s_presentedView_026bf7e0);
    if (((ulong)pcVar9 & 1) != 0) {
      pcVar9 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_presentedView_026bf7e0);
      _objc_retainAutoreleasedReturnValue();
      local_170 = pcVar9;
      if ((pcVar9 != (cfstringStruct *)0x0) &&
         (puVar3 = local_150,
         (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,pcVar9),
         ((ulong)puVar3 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_170);
      }
      _objc_storeStrong(&local_170,0);
    }
    pcVar9 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar9;
    FUN_01b5d924();
    _objc_retainAutoreleasedReturnValue();
    local_178 = pcVar11;
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    _memset(auStack_1c0,0,0x40);
    puVar3 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_298 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
    if (local_298 != (undefined *)0x0) {
      lVar8 = *local_1b0;
      local_2a0 = (undefined *)0x0;
      do {
        do {
          if (*local_1b0 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar8,puVar3);
          }
          pcVar9 = *(cfstringStruct **)(local_1b8 + (long)local_2a0 * 8);
          local_180 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = pcVar9;
          _memset(auStack_210,0,0x40);
          pcVar9 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_gestureRecognizers_026ca650);
          _objc_retainAutoreleasedReturnValue();
          local_2d8 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_2d8 != (cfstringStruct *)0x0) {
            lVar10 = *local_200;
            local_2e0 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_200 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_200 - lVar10,pcVar9);
                }
                pcVar11 = *(cfstringStruct **)(local_208 + (long)local_2e0 * 8);
                local_1d0 = pcVar11;
                if (pcVar11 != local_148) {
                  puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60)
                  ;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
                  if (((ulong)pcVar11 & 1) != 0) {
                    pcVar11 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_view_026cabd8);
                    _objc_retainAutoreleasedReturnValue();
                    local_219 = 0;
                    uVar1 = pcVar11 !=
                            *(cfstringStruct **)
                             ((long)&local_130->field0_0x0 + (long)_collectionView);
                    bVar2 = true;
                    if ((bool)uVar1) {
                      pcVar5 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_view_026cabd8);
                      _objc_retainAutoreleasedReturnValue();
                      bVar2 = pcVar5 == *(cfstringStruct **)
                                         ((long)&local_130->field0_0x0 + (long)_chipBar);
                      local_219 = uVar1;
                      local_218 = pcVar5;
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      uVar1 = local_219;
                    }
                    local_219 = uVar1;
                    (*(code *)PTR__objc_release_02578630)(pcVar11);
                    if (!bVar2) {
                      pcVar5 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_delegate_0269e808);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar11 = local_130;
                      (*(code *)PTR__objc_release_02578630)();
                      if (pcVar5 != pcVar11) {
                        pcVar11 = local_1d0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_delegate_0269e808);
                        _objc_retainAutoreleasedReturnValue();
                        local_230 = (cfstringStruct *)0x0;
                        puVar4 = PTR_WCRLESheetPanGuard_026cf3e0;
                        local_228 = pcVar11;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRLESheetPanGuard_026cf3e0,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (pcVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
                        if (((ulong)pcVar11 & 1) == 0) {
                          local_241 = local_228 == (cfstringStruct *)0x0;
                          if (local_241) {
                            local_348 = &::cf___;
                          }
                          else {
                            local_348 = local_228;
                            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_class_0269cd60);
                            _NSStringFromClass();
                            _objc_retainAutoreleasedReturnValue();
                            local_240 = local_348;
                          }
                          local_241 = !local_241;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_238 = local_348;
                          if (local_241) {
                            (*(code *)PTR__objc_release_02578630)(local_240);
                          }
                          pcVar11 = local_1c8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1c8,PTR_s_containsString__0269d0b0,&cf_DropShadow);
                          local_354 = 1;
                          if (((ulong)pcVar11 & 1) == 0) {
                            pcVar11 = local_238;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_238,PTR_s_containsString__0269d0b0,&cf_Sheet);
                            local_354 = (uint)pcVar11;
                          }
                          if ((local_354 & 1) == 0) {
                            bVar2 = true;
                          }
                          else {
                            if (local_178 == (cfstringStruct *)0x0) {
                              local_370 = local_180;
                            }
                            else {
                              local_370 = local_178;
                            }
                            FUN_01b5dab4(local_1d0,local_370);
                            pcVar5 = local_1d0;
                            _objc_getAssociatedObject(local_1d0,DAT_028c6778);
                            _objc_retainAutoreleasedReturnValue();
                            pcVar11 = local_230;
                            local_230 = pcVar5;
                            (*(code *)PTR__objc_release_02578630)(pcVar11);
                            bVar2 = false;
                          }
                          _objc_storeStrong(&local_238,0);
                          if (!bVar2) goto LAB_01b5d5e4;
                        }
                        else {
                          _objc_storeStrong(&local_230,local_228);
                          if (local_178 == (cfstringStruct *)0x0) {
                            local_340 = local_180;
                          }
                          else {
                            local_340 = local_178;
                          }
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_230,PTR_s_setSheetContainer__026bf7e8,local_340);
LAB_01b5d5e4:
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_230,PTR_s_setChipBar__026bf7f0,
                                     *(undefined8 *)((long)&local_130->field0_0x0 + (long)_chipBar))
                          ;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_230,PTR_s_setCollectionView__026aa9a8,
                                     *(undefined8 *)
                                      ((long)&local_130->field0_0x0 + (long)_collectionView));
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_230,PTR_s_setSearchHost__026bf7f8,
                                     *(undefined8 *)
                                      ((long)&local_130->field0_0x0 + (long)_searchHost));
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_230,PTR_s_setGroupSwitchPan__026bf800,
                                     *(undefined8 *)
                                      ((long)&local_130->field0_0x0 + (long)_groupSwitchPan));
                          if (*(long *)((long)&local_130->field0_0x0 + (long)_groupSwitchPan) != 0)
                          {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1d0,PTR_s_requireGestureRecognizerToFail__026ca810,
                                       *(undefined8 *)
                                        ((long)&local_130->field0_0x0 + (long)_groupSwitchPan));
                          }
                          lVar6 = *(long *)((long)&local_130->field0_0x0 + (long)_collectionView);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (lVar6,PTR_s_panGestureRecognizer_0269dd98);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_release_02578630)();
                          pcVar11 = local_1d0;
                          if (lVar6 != 0) {
                            uVar7 = *(undefined8 *)
                                     ((long)&local_130->field0_0x0 + (long)_collectionView);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar7,PTR_s_panGestureRecognizer_0269dd98);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (pcVar11,PTR_s_requireGestureRecognizerToFail__026ca810);
                            (*(code *)PTR__objc_release_02578630)(uVar7);
                          }
                        }
                        _objc_storeStrong(&local_230);
                        _objc_storeStrong(&local_228,0);
                      }
                    }
                  }
                }
                local_2e0 = (cfstringStruct *)((long)&local_2e0->field0_0x0 + 1);
              } while (local_2e0 < local_2d8);
              local_2d8 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                         auStack_128,0x10);
              local_2e0 = (cfstringStruct *)0x0;
            } while (local_2d8 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          _objc_storeStrong(&local_1c8,0);
          local_2a0 = local_2a0 + 1;
        } while (local_2a0 < local_298);
        local_298 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                   0x10);
        local_2a0 = (undefined *)0x0;
      } while (local_298 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_140,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

