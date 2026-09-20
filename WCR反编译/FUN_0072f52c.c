// FUN_0072f52c @ 0072f52c

void FUN_0072f52c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hideSettingsSearchBarEnabled_026a7af8);
  DAT_028cc508 = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsProfileEnabled_026a7b00);
  DAT_028cc509 = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsAccountSecurityEnabl_026a7b08);
  DAT_028cc50a = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsPersonalInfoEnabled_026a7b10);
  DAT_028cc50b = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsNotificationEnabled_026a7b18);
  DAT_028cc50c = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsUIDisplayEnabled_026a7b20);
  DAT_028cc50d = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsStorageEnabled_026a7b28);
  DAT_028cc50e = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsOtherFunctionsEnable_026a7b30);
  DAT_028cc50f = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsPluginEnabled_026a7b38);
  DAT_028cc510 = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsHelpFeedbackEnabled_026a7b40);
  DAT_028cc511 = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsAboutWeChatEnabled_026a7b48);
  DAT_028cc512 = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsSwitchAccountEnabled_026a7b50);
  DAT_028cc513 = SUB81(puVar1,0);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideSettingsLogoutEnabled_026a7b58);
  DAT_028cc514 = SUB81(puVar1,0);
  if (DAT_028cc4c0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028cc4c0;
    DAT_028cc4c0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc4c0,PTR_s_removeAllObjects_0269d508);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

