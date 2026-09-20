// wcr_handleChatSearchControllerDidDisappear: @ 0155bab4

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_handleChatSearchControllerDidDisappear_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_94;
  undefined *local_88;
  byte local_78;
  undefined *local_70;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  byte local_2d;
  undefined4 local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((DAT_028e39a1 & 1) == 0) || (local_28 == (undefined *)0x0)) {
    local_2c = 1;
  }
  else {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isMovingFromParentViewController_0269f458);
    local_78 = 1;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isBeingDismissed_0269f460);
      local_78 = (byte)puVar2;
    }
    local_2d = local_78 & 1;
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &DAT_028e38c8;
    local_38 = puVar3;
    _objc_loadWeakRetained();
    puVar3 = &DAT_028e38c0;
    local_40 = puVar2;
    _objc_loadWeakRetained();
    local_48 = puVar3;
    if (local_38 == (undefined *)0x0) {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_50 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_50;
      }
      _objc_storeStrong(&local_38,local_88);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    bVar1 = false;
    if ((local_2d & 1) == 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar2 == local_40;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (bVar1) {
      local_2d = 1;
    }
    if ((local_2d & 1) == 0) {
      local_2c = 1;
    }
    else {
      bVar1 = false;
      local_94 = 0;
      if ((local_38 != (undefined *)0x0) && (local_94 = 0, local_48 != (undefined *)0x0)) {
        local_70 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_94 = (uint)puVar2;
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if ((local_94 & 1) != 0) {
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_48;
        (*(code *)PTR__objc_release_02578630)();
        if (puVar3 != puVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_popToViewController_animated__0269e4f8,local_48,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
      }
      FUN_01559d40();
      local_2c = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

