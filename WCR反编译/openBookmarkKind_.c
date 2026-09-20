// openBookmarkKind: @ 01f90190

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::openBookmarkKind_
               (ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
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
  lVar1 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatName_026aa868);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithKind_chatName__026c9920,lVar1);
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hostSheet_026c8f78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHostSheet__026c8ee0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageSheetMode_026c9788);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPageSheetMode__026c9830,IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageSheetMode_026c9788);
  puVar2 = PTR___dispatch_main_q_02578680;
  if ((IVar3 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01f903f4;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar3;
    _dispatch_async(puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

