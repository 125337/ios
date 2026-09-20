// editProfileCustomWxid @ 01cdc538

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardBeautifyViewController::editProfileCustomWxid(ID param_1,SEL param_2)

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
            (param_1,PTR_s_showProfileInputAlertWithTitle_m_026c38d8,&cf__Ofbc_N,&cf_eQfbcv_OeHh,300
             ,puVar2,PTR_s_handleProfileCustomWxidInput__026c38d0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

