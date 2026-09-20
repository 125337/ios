// confirmApplyHistoryItem: @ 01e3d68c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSvgColorSchemeHistoryViewController::confirmApplyHistoryItem_
          (WCRefineSvgColorSchemeHistoryViewController *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  float in_s0;
  cfstringStruct *local_138;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  bool local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlertItem_026b7c00);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,0);
  if (local_40 == (cfstringStruct *)0x0) {
    local_44 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightHex);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_61 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_c0 = &cf__000000;
      }
      else {
        local_c0 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightHex);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_c0;
      }
      local_61 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_c0;
      if ((local_61 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkHex);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_79 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_d8 = &cf__000000;
      }
      else {
        local_d8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkHex);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_d8;
      }
      local_79 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_d8;
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFixedSchemeBlock_026c6438);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar2 != (cfstringStruct *)0x0) {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFixedSchemeBlock_026c6438);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)pcVar2->field2_0x10)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      puVar3 = PTR_WCRefineColorPickerController_026ceed8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_colorFromHexString__026b30d8,local_58);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSvgFixedColorLight__026c6440);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_colorFromHexString__026b30d8,local_70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSvgFixedColorDark__026c6448);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_58,0);
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_paletteHexes);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_99 = ((ulong)pcVar4 & 1) == 0;
      if (local_99) {
        local_138 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      else {
        local_138 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_paletteHexes);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_138;
      }
      local_99 = !local_99;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_138;
      if (local_99) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyRandomSchemeBlock_026c6450);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar2 != (cfstringStruct *)0x0) {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyRandomSchemeBlock_026c6450);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)pcVar2->field2_0x10)((double)in_s0);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setSvgRandomPaletteHexes__026c6458,local_90);
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)in_s0,local_50,PTR_s_setSvgRandomColorAlpha__026c6460);
      _objc_storeStrong(&local_90,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf____uSSMr);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

