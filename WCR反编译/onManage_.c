// onManage: @ 01f835d0

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRVPPickerSheetProxy::onManage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  ID local_50;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nav_026c9af0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30[0] = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheet_026aa728);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30[0];
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((IVar1 & 1) == 0) || (local_38 == 0)) {
    FUN_01f83864(local_38);
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineVoicePackSettingsViewController_026cea18;
    _objc_alloc_init();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setPageSheetMode__026c9830,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHostSheet__026c8ee0,local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30[0],PTR_s_pushViewController_animated__0269d590,local_48,1);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30[0];
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01f83984;
    local_60 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_38;
    local_58 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = IVar1;
    _dispatch_async(puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

