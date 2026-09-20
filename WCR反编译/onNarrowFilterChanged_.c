// onNarrowFilterChanged: @ 0172285c

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropLogViewController::onNarrowFilterChanged_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterNarrow__026b3b10,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterThemeText__026b3b18);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterWxidText__026b3b20,&::cf___);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
    lVar1 = 1;
  }
  else if (lVar1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNarrowPromptFromSegment__026b3b28,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentThemeFilterPrompt_026b3b30);
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 + -2;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNarrowPromptFromSegment__026b3b28,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentWxidFilterPrompt_026b3b38);
      lVar1 = 1;
    }
  }
  _objc_storeStrong(lVar1,&local_28,0);
  return;
}

