// resetMenuChromeColorsToDefault @ 0160ff0c

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatProfileStore::resetMenuChromeColorsToDefault(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_158;
  cfstringStruct *local_140;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  cfstringStruct *local_80;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultProfileDictionary_026b1840);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_38 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuFillColorHex);
  _objc_retainAutoreleasedReturnValue();
  local_50 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_50 = &cf__FFFFFF;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuFillColorHex__026b18e0,local_50);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuFillColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &cf__2C2C2E;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuFillColorHexDark__026b18e8,local_68);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuIconColorHex);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &cf__000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuIconColorHex__026b18f0,local_80);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuIconColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_98 = &cf__FFFFFF;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuIconColorHexDark__026b18f8,local_98);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuTitleColorHex);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b0 = &cf__000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuTitleColorHex__026b1900,local_b0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuTitleColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c8 = &cf__FFFFFF;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuTitleColorHexDark__026b1908,local_c8);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuStrokeColorHex);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_e0 = &cf__FFFFFF;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuStrokeColorHex__026b1910,local_e0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuStrokeColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_f8 = &cf__3A3A3C;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setMenuStrokeColorHexDark__026b1918,local_f8);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_fanBlurTintColorHex);
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_110 = &cf__00000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setFanBlurTintColorHex__026b1920,local_110);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_fanBlurTintColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  local_128 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_128 = &cf__00000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setFanBlurTintColorHexDark__026b1928,local_128);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_gridBackdropColorHex);
  _objc_retainAutoreleasedReturnValue();
  local_140 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_140 = &cf__0000001A;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setGridBackdropColorHex__026b1930,local_140);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_28;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_gridBackdropColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  local_158 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_158 = &cf__00000047;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setGridBackdropColorHexDark__026b1938,local_158)
  ;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_38,0);
  return;
}

