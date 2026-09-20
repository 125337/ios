// performAction: @ 01deadf0

/* Function Stack Size: 0x18 bytes */

void WCRefineSpecialTextListViewController::performAction_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  ID IVar7;
  undefined *puVar8;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1a8;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  undefined *local_110;
  undefined1 auStack_108 [15];
  bool local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined1 auStack_88 [24];
  cfstringStruct *local_70;
  undefined1 auStack_68 [15];
  bool local_59;
  cfstringStruct *local_58;
  undefined *local_50;
  char *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  _WCRefineSpecialTextStyle();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_field_026c5930);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_field_026c5930);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (((ulong)pcVar5 & 1) == 0) {
      local_c0 = 0;
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_field_026c5930);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_field_026c5930);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        if (((ulong)pcVar5 & 1) != 0) {
          local_c0 = 2;
        }
      }
      else {
        local_c0 = 1;
      }
      pcVar4 = (cfstringStruct *)PTR_WCRefineGradientPalette_026ce910;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,
                 local_40,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = (cfstringStruct *)PTR_WCRefineGradientPalette_026ce910;
      local_c8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,
                 local_40,1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_c0;
      pcVar4 = local_c8;
      local_d0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      local_e1 = false;
      if ((long)pcVar4 <= lVar2) {
        local_2a0 = &cf__C45C6A;
      }
      else {
        local_2a0 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_c0);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_2a0;
      }
      local_e1 = (long)pcVar4 > lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_2a0;
      if ((local_e1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      lVar2 = local_c0;
      pcVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      local_f9 = false;
      if ((long)pcVar4 <= lVar2) {
        local_2b8 = &cf__E87888;
      }
      else {
        local_2b8 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_c0);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = local_2b8;
      }
      local_f9 = (long)pcVar4 > lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = local_2b8;
      if ((local_f9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      _objc_initWeak(auStack_108,local_28);
      puVar8 = PTR_WCRefineColorPickerController_026ceed8;
      _objc_alloc();
      pcVar3 = local_38;
      pcVar5 = local_d8;
      pcVar4 = local_f0;
      local_148 = PTR___NSConcreteStackBlock_02578660;
      local_140 = 0xc2000000;
      local_13c = 0;
      local_138 = FUN_01debccc;
      local_130 = &DAT_0258c648;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = pcVar3;
      local_118 = local_c0;
      _objc_copyWeak(auStack_120,auStack_108);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar5,pcVar4,&local_148);
      pcVar4 = local_38;
      local_110 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_field_026c5930);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_01dec1dc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      IVar7 = local_28;
      puVar8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_initWithRootViewController__0269d2a0,local_110);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_presentViewController_animated_c_0269d2b0,puVar8,1,0);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_110);
      _objc_destroyWeak(auStack_120);
      _objc_storeStrong(&local_128,0);
      _objc_destroyWeak(auStack_108);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
    }
    else {
      puVar8 = PTR_WCRefineGradientPalettePickerViewController_026cf5f8;
      _objc_alloc_init();
      pcVar4 = local_40;
      local_50 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setPreviewText__026c5950);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientPresetId);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
      local_59 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_1e8 = &::cf___;
      }
      else {
        local_1e8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientPresetId);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_1e8;
      }
      local_59 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setPresetId__026bd998,local_1e8);
      if ((local_59 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientDirection);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDirection__026a5bf0,pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      puVar8 = PTR_WCRefineGradientPalette_026ce910;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,
                 local_40,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLightStops__026acc48);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      puVar8 = PTR_WCRefineGradientPalette_026ce910;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,
                 local_40,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDarkStops__026acc50);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_initWeak(auStack_68,local_28);
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_identifier_026a4a88);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_01debbdc;
      local_98 = &DAT_0258c618;
      local_70 = pcVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = pcVar4;
      _objc_copyWeak(auStack_88,auStack_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCompletion__0269fdc8,&local_b0);
      puVar8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_initWithRootViewController__0269d2a0,local_50);
      local_b8 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar8,1,0);
      _objc_storeStrong(&local_b8);
      _objc_destroyWeak(auStack_88);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_70,0);
      _objc_destroyWeak(auStack_68);
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_identifier_026a4a88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEditingIdentifier__026c5938);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar6 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar7 = local_28;
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_identifier_026a4a88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_textAlertMessageForIdentifier__026c5940);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTitle_message__0269d260,&cf_e_gQ_);
    local_48 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x80);
    pcVar6 = local_48;
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1a8 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_setTextFieldDefaultText__0269fd98,local_1a8);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
               PTR_s_handleTextInput__026c5948);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

