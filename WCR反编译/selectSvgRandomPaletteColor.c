// selectSvgRandomPaletteColor @ 01f376c8

/* Function Stack Size: 0x10 bytes */

void WCRefineUIBeautifyViewController::selectSvgRandomPaletteColor(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (puVar2 < (undefined1 *)((long)&MACH_HEADER.cputype + 3)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showSvgPaletteColorPicker_026c89a8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

