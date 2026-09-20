// pickEnd @ 019572b8

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineFakeLocationSettingsViewController::pickEnd
          (WCRefineFakeLocationSettingsViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 in_d0;
  undefined8 uVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fakeLocationLatitude_026ac690);
  puVar1 = local_28;
  uVar2 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fakeLocationLongitude_026ac698);
  FUN_01954c24(in_d0,uVar2);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbwp);
  }
  else {
    *(undefined8 *)(local_18 + (long)_pickMode) = 2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentWeChatPicker_026b9bd8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

