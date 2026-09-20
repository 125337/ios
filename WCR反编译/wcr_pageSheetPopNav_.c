// wcr_pageSheetPopNav: @ 01f86cb8

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::wcr_pageSheetPopNav_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ID local_50;
  undefined4 local_48;
  bool local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_88 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6ae0);
  _objc_retainAutoreleasedReturnValue();
  local_41 = false;
  bVar1 = local_88 == 0;
  local_30 = local_88;
  if (bVar1) {
    local_88 = 0;
  }
  else {
    _objc_getAssociatedObject(local_88,DAT_028c6ad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_88;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_88;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_48 = 1;
  }
  else {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (uVar4 < 2) {
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_popViewControllerAnimated__0269ede0,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_38;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_01f86fa0;
      local_68 = &DAT_0257a740;
      local_50 = local_18;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_30;
      local_60 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar4;
      _dispatch_async(puVar2,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_60,0);
      local_48 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

