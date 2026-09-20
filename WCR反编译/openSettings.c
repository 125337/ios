// openSettings @ 01f91028

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::openSettings(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineVoicePackSettingsViewController_026cea18;
  _objc_alloc_init();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageSheetMode_026c9788);
  if ((IVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPageSheetMode__026c9830,1);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hostSheet_026c8f78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHostSheet__026c8ee0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageSheetMode_026c9788);
  puVar1 = PTR___dispatch_main_q_02578680;
  if ((IVar2 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01f91230;
    local_38 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = IVar2;
    _dispatch_async(puVar1,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

