// stopTapped: @ 01a8dcf0

/* Function Stack Size: 0x18 bytes */

void WCRefineGradientPalettePickerViewController::stopTapped_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long local_218;
  long local_210;
  cfstringStruct *local_1b8;
  cfstringStruct *local_190;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined *local_c0;
  undefined1 auStack_b8 [15];
  bool local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  long local_58;
  SEL local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_58,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_tag_026cab98);
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  pcVar2 = local_48;
  local_60 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lightStops_026acc90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_normalizedHexStops__026acc78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setLightStops__026acc48);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_darkStops_026acc88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_normalizedHexStops__026acc78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDarkStops__026acc50);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  lVar1 = local_60;
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lightStops_026acc90);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_71 = 0;
  local_81 = false;
  if ((long)pcVar4 <= lVar1) {
    local_190 = &cf__C45C6A;
  }
  else {
    local_190 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lightStops_026acc90);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_190;
  }
  local_81 = (long)pcVar4 > lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_190;
  if ((local_81 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  lVar1 = local_60;
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_darkStops_026acc88);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_99 = 0;
  local_a9 = false;
  if ((long)pcVar4 <= lVar1) {
    local_1b8 = &cf__E87888;
  }
  else {
    local_1b8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_darkStops_026acc88);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_1b8;
  }
  local_a9 = (long)pcVar4 > lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_1b8;
  if ((local_a9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_initWeak(auStack_b8,local_48);
  puVar3 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  pcVar4 = local_68;
  pcVar2 = local_90;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_01a8e4c0;
  local_e8 = &DAT_0258aef0;
  _objc_copyWeak(auStack_e0,auStack_b8);
  local_d8 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar4,pcVar2,&local_100);
  local_40 = &cf_nSwr;
  local_38 = &cf_nS_Nr;
  local_30 = &cf_nS>_r;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  if (local_60 < 3) {
    local_210 = local_60;
  }
  else {
    local_210 = 2;
  }
  if (local_210 < 1) {
    local_218 = 0;
  }
  else {
    local_218 = local_210;
  }
  puVar3 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_objectAtIndexedSubscript__0269cc78,local_218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTitle__0269cef0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  pcVar2 = local_48;
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithRootViewController__0269d2a0,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_presentViewController_animated_c_0269d2b0,puVar3,1,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_c0);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

