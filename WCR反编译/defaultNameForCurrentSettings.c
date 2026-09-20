// defaultNameForCurrentSettings @ 01e3b59c

/* Function Stack Size: 0x10 bytes */

ID WCRefineSvgColorSchemeHistoryViewController::defaultNameForCurrentSettings
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined1 *puVar4;
  undefined1 *local_e8;
  cfstringStruct *local_b8;
  cfstringStruct *local_90;
  undefined1 *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined1 *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mode_026ab488);
  if (IVar2 == 0) {
    pcVar3 = (cfstringStruct *)PTR_WCRefineColorPickerController_026ceed8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = local_40;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_svgFixedColorLight_026a8cc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_90 = &cf________;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_90;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_48;
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_svgFixedColorDark_026a8cc8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b8 = &cf________;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_5c = 1;
    local_28 = puVar1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_svgRandomPaletteHexes_026a8ce0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_e8 = *(undefined1 **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_e8;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_svgRandomColorAlpha_026a8cd8);
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (puVar4 == (undefined1 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_zzr_g);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar1;
    }
    else {
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar1;
      }
    }
    local_5c = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

