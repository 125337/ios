// openVoicePackSettings @ 01a75eb4

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceFunctionViewController::openVoicePackSettings(ID param_1,SEL param_2)

{
  int iVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  iVar1 = 0x25bd560;
  FUN_01a19cf0(&cf_voice_pack,1,0x7b18c65d,0);
  if (iVar1 != 2) {
    puVar2 = PTR_WCRefineVoicePackSettingsViewController_026cea18;
    _objc_alloc_init();
    IVar3 = local_18;
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

