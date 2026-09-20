// floatBarBack @ 01f94c94

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::floatBarBack(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selecting_026c9890);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatBarDoneSelecting_026c9bf8);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (1 < IVar3) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hostSheet_026c8f78);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_popViewControllerAnimated__0269ede0,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_01f94f4c;
    local_50 = &DAT_025839b0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_30;
    local_48 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_28;
    local_40 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar2;
    _dispatch_async(puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

