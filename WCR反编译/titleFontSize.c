// titleFontSize @ 01e53f44

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineTelegramTabStripView::titleFontSize
          (WCRefineTelegramTabStripView *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeTelegramGroupingCustomTitleF_026c67a8);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeNicknameFontSize_026c68f8);
    local_18 = in_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_homeTelegramGroupingTitleFontSiz_026c67b0);
    if ((in_d0 < 12.0) || (local_18 = in_d0, 20.0 < in_d0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeNicknameFontSize_026c68f8);
      local_18 = in_d0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

