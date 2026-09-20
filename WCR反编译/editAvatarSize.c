// editAvatarSize @ 01aea3a4

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripSettingsViewController::editAvatarSize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showNumericAlertForKey_title_hin_026be4d0,&cf_avatarSize,&cf_4YP_Y_,
             &cf_28_88,0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

