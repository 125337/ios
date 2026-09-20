// FUN_01d3ca60 @ 01d3ca60

void FUN_01d3ca60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineClearSessionHook_026ce348;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineClearSessionHook_026ce348,PTR_s_clearChatRecordsKeepingSessionsW_026a6d00,
             *(undefined8 *)(param_1 + 0x20));
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gntNUOO);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__nt);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentNativePageSheetDoneWithTi_026b76a8,&cf_nt_b);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

