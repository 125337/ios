// settingSwitchChanged: @ 01de9eb0

/* Function Stack Size: 0x18 bytes */

void WCRefineSpecialTextListViewController::settingSwitchChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *pcVar10;
  undefined *puVar11;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b8;
  byte local_14c;
  undefined *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  char local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined4 local_78;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ulong local_60;
  SEL local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_60,param_3);
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_cellContainingView__026c5928,local_60);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_indexPathForCell__0269e208);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_71 = 0;
  bVar2 = true;
  if (local_68 != (cfstringStruct *)0x0) {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_section_0269e988);
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_identifiers_026c58d8);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = pcVar4 <= pcVar3;
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if (bVar2) {
    local_78 = 1;
  }
  else {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_identifiers_026c58d8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_section_0269e988);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectAtIndexedSubscript__0269cc78,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fieldsForIdentifier__026c58f0,local_80);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_68;
    local_88 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_row_0269e210);
    pcVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
    pcVar3 = local_88;
    if (pcVar4 < pcVar5) {
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectAtIndexedSubscript__0269cc78,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_80;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      uVar7 = local_60;
      local_90 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isOn_0269d560);
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithBool__0269ce60,uVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de9c14(pcVar4,pcVar3);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,&cf_gradient);
      if ((((ulong)pcVar3 & 1) != 0) &&
         (uVar7 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isOn_0269d560),
         (uVar7 & 1) != 0)) {
        pcVar3 = local_80;
        _WCRefineSpecialTextStyle();
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightStops);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_a0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar8);
        local_a1 = false;
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
          local_a1 = (cfstringStruct *)0x1 < pcVar3;
        }
        if ((bool)local_a1 == false) {
          pcVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientDirection);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_98;
          local_b0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightEndColor);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_c1 = 0;
          local_14c = 0;
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar4 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkEndColor);
            _objc_retainAutoreleasedReturnValue();
            local_c1 = 1;
            local_c0 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_14c = (byte)pcVar4;
          }
          if ((local_c1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_b1 = local_14c & 1;
          puVar8 = PTR_WCRefineGradientPalette_026ce910;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineGradientPalette_026ce910,PTR_s_itemWithIdentifier__026acc80,
                     &cf_haitang);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_80;
          uVar1 = _WCRefineGradientPresetCustom;
          local_d0 = puVar8;
          if (((local_b1 & 1) == 0) || (puVar8 == (undefined *)0x0)) {
            pcVar4 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightColor);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = pcVar4;
            if (pcVar4 == (cfstringStruct *)0x0) {
              local_1b8 = &cf__8E8E93;
            }
            local_38 = local_1b8;
            pcVar5 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightEndColor);
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_1c8 = &cf__07C160;
            }
            local_30 = local_1c8;
            puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_38,2);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkColor);
            _objc_retainAutoreleasedReturnValue();
            local_1e0 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_1e0 = &cf__8E8E93;
            }
            local_48 = local_1e0;
            pcVar10 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkEndColor);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = pcVar10;
            if (pcVar10 == (cfstringStruct *)0x0) {
              local_1f0 = &cf__34C759;
            }
            local_40 = local_1f0;
            puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_48,2);
            _objc_retainAutoreleasedReturnValue();
            FUN_01dea924(pcVar3,uVar1,puVar8,puVar11,local_b0);
            (*(code *)PTR__objc_release_02578630)(puVar11);
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_identifier_026a4a88);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lightStops_026acc90);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_darkStops_026acc88);
            _objc_retainAutoreleasedReturnValue();
            FUN_01dea924(pcVar3,puVar8,puVar11,puVar9,local_b0);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar11);
            (*(code *)PTR__objc_release_02578630)(puVar8);
          }
          _objc_storeStrong(&local_d0,0);
        }
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_98,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_90,0);
      local_78 = 0;
    }
    else {
      local_78 = 1;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

