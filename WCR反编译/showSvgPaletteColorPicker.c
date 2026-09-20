// showSvgPaletteColorPicker @ 01f37cb4

/* Function Stack Size: 0x10 bytes */

void WCRefineUIBeautifyViewController::showSvgPaletteColorPicker(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_100;
  cfstringStruct *local_e0;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined1 auStack_80 [8];
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  local_49 = 0;
  local_59 = 0;
  local_69 = 0;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_e0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultSvgRandomPaletteHexes_026c89b0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_e0;
  }
  else {
    local_e0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_e0;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedSvgPaletteHex__026c89b8,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_100 = &cf__34C759;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_100;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_initWeak(auStack_80,local_28);
  puVar3 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  pcVar1 = local_78;
  local_c8 = PTR___NSConcreteStackBlock_02578660;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_01f38174;
  local_b0 = &DAT_0258c140;
  _objc_copyWeak(auStack_a0,auStack_80);
  pcVar2 = local_78;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar1,pcVar1,&local_c8);
  local_88 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setSingleColorMode__026c89d0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTitle__0269cef0,&cf_Sr);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithRootViewController__0269d2a0,local_88);
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar3,1,0);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_a8,0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

