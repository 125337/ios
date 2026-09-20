// addScheme @ 01e33660

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatURLSchemeViewController::addScheme(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingIndex__026c62e8,DAT_0233a538);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingTitle__026c6338);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingURL__026c6340,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_presentTextAlertTitle_message_pl_026c6350,&cf_RTy,&cf_OY_wccN,&::cf___,
             0x28,PTR_s_handleTitleThenURL__026c6348);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}

