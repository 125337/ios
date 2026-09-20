// metricValueButtonTapped: @ 01d0cd74

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineQuickChatSettingsViewController::metricValueButtonTapped_
          (WCRefineQuickChatSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 in_d0;
  double dVar9;
  double dVar10;
  ulong local_168;
  ulong local_160;
  ID local_138;
  char *local_130;
  char *local_128;
  undefined4 local_11c;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  long local_d0;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar7 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tag_026cab98);
  local_c8 = uVar7 - 9000;
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  uVar7 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  local_160 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  fVar8 = (float)in_d0;
  if (local_160 != 0) {
    lVar6 = *local_108;
    local_168 = 0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,uVar1);
        }
        uVar7 = *(ulong *)(local_110 + local_168 * 8);
        puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
        local_d8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UISlider_026ce248,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar7 & 1) != 0) {
          uVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_tag_026cab98);
          fVar8 = (float)in_d0;
          if (uVar7 == local_c8) {
            _objc_storeStrong(0,&local_d0,local_d8);
            local_11c = 2;
            goto LAB_01d0cfe4;
          }
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      fVar8 = (float)in_d0;
      local_168 = 0;
    } while (local_160 != 0);
  }
  local_11c = 0;
LAB_01d0cfe4:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar5 = local_b0;
  if (local_d0 == 0) {
    local_11c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar5,&DAT_028e4728,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = "WCUIAlertView";
    _objc_getClass();
    local_128 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_11c = 1;
    }
    else {
      _objc_alloc();
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_titleForSliderTag__026c3d68,local_c8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_b0;
      uVar7 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_minimumValue_026c3d70);
      dVar9 = (double)fVar8;
      dVar10 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_maximumValue_026c3d78);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar9,(double)SUB84(dVar10,0),IVar5,PTR_s_hintForSliderTag_min_max__026c3d80,uVar7)
      ;
      fVar8 = SUB84(dVar9,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle_message__0269d260,IVar4);
      local_130 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_showTextFieldWithMaxLen__0269e5e0,4);
      IVar4 = local_b0;
      uVar7 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_value_0269d830);
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)fVar8,IVar4,PTR_s_displayTextForTag_value__026c3d40,uVar7);
      _objc_retainAutoreleasedReturnValue();
      local_138 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_138;
      local_138 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar5 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isEqualToString__0269ccc8,&::cf__);
      if ((IVar5 & 1) != 0) {
        _objc_storeStrong(&local_138,&::cf_0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setTextFieldDefaultText__0269fd98,local_138);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_b0,
                 PTR_s_handleMetricAlertCancel__026c3d88);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_b0,
                 PTR_s_handleMetricValueInput__026c3d90);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setWcr_metricAlert__026ba928,local_130);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_show_0269d280);
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
      local_11c = 0;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

