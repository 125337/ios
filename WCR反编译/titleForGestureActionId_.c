// titleForGestureActionId: @ 01e299e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatSettingsViewController::titleForGestureActionId_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  int iVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  void *local_168;
  void *local_160;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  int local_cc;
  ulong local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_b0 = (cfstringStruct *)0x0;
    iVar5 = 1;
    local_cc = 1;
  }
  else {
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_open_menu);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_drag_ball);
      if ((uVar1 & 1) == 0) {
        pvVar2 = _memset(auStack_118,0,0x40);
        _WCRSuperFloatRefreshActions();
        _objc_retainAutoreleasedReturnValue();
        local_160 = pvVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_160 != (void *)0x0) {
          lVar6 = *local_108;
          local_168 = (void *)0x0;
          do {
            do {
              if (*local_108 - lVar6 != 0) {
                _objc_enumerationMutation(*local_108 - lVar6,pvVar2);
              }
              pcVar7 = *(cfstringStruct **)(local_110 + (long)local_168 * 8);
              local_d8 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_120 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((((ulong)pcVar7 & 1) == 0) ||
                 (pcVar7 = local_120,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_120,PTR_s_isEqualToString__0269ccc8,local_c8),
                 ((ulong)pcVar7 & 1) == 0)) {
                local_cc = 3;
              }
              else {
                pcVar7 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_objectForKeyedSubscript__0269d098,
                           _WCRSuperFloatCustomTitleKey);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_128 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                if (((((ulong)pcVar7 & 1) == 0) ||
                    (pcVar7 = local_128,
                    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
                    pcVar7 == (cfstringStruct *)0x0)) ||
                   (pcVar4 = local_b8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_b8,PTR_s_wcr_isTechnicalActionTitle__026c6250,local_128),
                   pcVar7 = local_128, ((ulong)pcVar4 & 1) != 0)) {
                  pcVar7 = local_d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d8,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatTitleKey
                            );
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_130 = pcVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3)
                  ;
                  if (((((ulong)pcVar7 & 1) == 0) ||
                      (pcVar7 = local_130,
                      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
                      pcVar7 == (cfstringStruct *)0x0)) ||
                     (pcVar4 = local_b8,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_b8,PTR_s_wcr_isTechnicalActionTitle__026c6250,local_130),
                     pcVar7 = local_130, ((ulong)pcVar4 & 1) != 0)) {
                    local_cc = 2;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_b0 = pcVar7;
                    local_cc = 1;
                  }
                  _objc_storeStrong(&local_130,0);
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar7;
                  local_cc = 1;
                }
                _objc_storeStrong(&local_128,0);
              }
              _objc_storeStrong(&local_120,0);
              if (local_cc != 3) goto LAB_01e29ec4;
              local_168 = (void *)((long)local_168 + 1);
            } while (local_168 < local_160);
            local_160 = pvVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8
                       ,0x10);
            local_168 = (void *)0x0;
          } while (local_160 != (void *)0x0);
        }
        local_cc = 0;
LAB_01e29ec4:
        (*(code *)PTR__objc_release_02578630)(pvVar2);
        if ((local_cc == 0) || (iVar5 = local_cc + -2, iVar5 == 0)) {
          pcVar7 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_wcr_friendlyFallbackTitleForActi_026c6258,local_c8);
          _objc_retainAutoreleasedReturnValue();
          iVar5 = 1;
          local_cc = 1;
          local_b0 = pcVar7;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = &cf_bR;
        iVar5 = 1;
        local_cc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &::cf_Sb;
      iVar5 = 1;
      local_cc = 1;
    }
  }
  _objc_storeStrong(iVar5,&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

