// wcr_openBookmarkKind: @ 01f73998

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackManagerViewController::wcr_openBookmarkKind_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined *local_48;
  ID local_40;
  byte local_31;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineVoicePackBookmarkListViewController_026cf7c0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_31 = 0;
  IVar3 = local_18;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar5;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_40;
  puVar2 = PTR_WCRefineVoicePackPickerViewController_026cea10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackPickerViewController_026cea10,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar3 & 1) != 0) {
    local_31 = 1;
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hostSheet_026c8f78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHostSheet__026c8ee0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPageSheetMode__026c9830,1);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR___dispatch_main_q_02578680;
  if ((local_31 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01f73cb0;
    local_58 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_30;
    local_50 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar1;
    _dispatch_async(puVar2,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return;
}

