// editProfileCustomName @ 01cdc458

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardBeautifyViewController::editProfileCustomName(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showProfileLegacyInputAlertWithT_026c38c8,&cf_TW_fbc_N,&cf_eQ_OvN___TT,
             0x50,puVar2,PTR_s_handleProfileCustomNameInput__026c38c0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

