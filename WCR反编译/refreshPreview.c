// refreshPreview @ 01a8cdb8

/* WARNING: Removing unreachable block (ram,0x01a8d0a0) */
/* Function Stack Size: 0x10 bytes */

void WCRefineGradientPalettePickerViewController::refreshPreview(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_248;
  ID local_190;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  undefined *local_58;
  ID local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  ID local_30;
  long local_28;
  
  uVar1 = DAT_02323f68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewStops_026bd978);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_40;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewDark_026bd8d0);
  if ((IVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewCard_026bd880);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_modeSegment_026bd8f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewNameLabel_026bb260);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    in_d3 = 0x3ff0000000000000;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    in_d2 = DAT_02323cc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewCard_026bd880);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    in_d1 = 0x3ff0000000000000;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324258,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30)
    ;
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewNameLabel_026bb260);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_modeSegment_026bd8f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewBackgroundLayer_026bd888);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_direction_026a5bb0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_configureLayer_hexStops_directio_026bd830,IVar4,IVar2,IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  local_38 = &cf_gradientPresetId;
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presetId_026bd838);
  _objc_retainAutoreleasedReturnValue();
  local_190 = IVar2;
  if (IVar2 == 0) {
    local_190 = _WCRefineGradientPresetCustom;
  }
  local_30 = local_190;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_displayNameForStyle__026bd980);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presetId_026bd838);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_itemWithIdentifier__026acc80);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subtitle_026af150);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar6 == (undefined *)0x0) {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewNameLabel_026bb260);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    puVar6 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subtitle_026af150);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewNameLabel_026bb260);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resolvedSampleText_026bd988);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_40;
  local_68 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewSampleLabel_026bd8b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar6 = PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_colorsFromHexStops__026acca0,local_50);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_68;
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  IVar4 = local_40;
  local_70 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewSampleLabel_026bd8b0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_248 = 28.0;
  IVar7 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewSampleLabel_026bd8b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetHeight(local_248,in_d1);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  puVar6 = local_70;
  if (local_248 <= 28.0) {
    local_248 = 28.0;
  }
  IVar7 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_direction_026a5bb0);
  IVar8 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewSampleLabel_026bd8b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar9 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewSampleLabel_026bd8b0);
  _objc_retainAutoreleasedReturnValue();
  IVar10 = IVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_248,in_d2,in_d3,puVar3,PTR_s_patternColorForText_font_minHeig_026a7d78,IVar2,
             IVar5,puVar6,IVar7,IVar10);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_previewSampleLabel_026bd8b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_refreshStopWells_026bd990);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

