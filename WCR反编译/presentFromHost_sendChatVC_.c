// presentFromHost:sendChatVC: @ 01b5dc38

/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonLibraryViewController::presentFromHost_sendChatVC_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_e4;
  undefined *local_d8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar3 = PTR_WCRefineLocalEmoticonLibraryViewController_026ce6c8;
  _objc_alloc_init();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setSendChatVC__026bf808,local_40);
  local_59 = 0;
  bVar1 = local_38 == (undefined *)0x0;
  if (bVar1) {
    local_d8 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_d8;
  }
  else {
    local_d8 = local_38;
  }
  local_59 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_d8;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (local_50 == (undefined *)0x0) {
    local_60 = 1;
  }
  else {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_79 = 0;
    local_89 = 0;
    local_e4 = 0;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_e4 = 0;
      local_78 = puVar4;
      if (puVar4 == local_50) {
        puVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_e4 = (uint)puVar4 ^ 1;
      }
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_e4 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_98 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setModalPresentationStyle__0269d2a8,1);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHalfSheetAppearance__026bf810,1);
      FUN_01b5e198(local_98);
      puVar2 = local_48;
      puVar4 = local_50;
      puVar3 = local_98;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01b5e594;
      local_a8 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_presentViewController_animated_c_0269d2b0,puVar3,1,&local_c0);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      local_60 = 0;
    }
    else {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_60 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

