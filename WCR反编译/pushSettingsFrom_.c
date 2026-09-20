// pushSettingsFrom: @ 011206a8

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::pushSettingsFrom_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_39 = 0;
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_60 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  else {
    local_60 = local_28;
  }
  local_39 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar4 & 1) != 0) {
    _objc_storeStrong(&local_48,local_30);
  }
  puVar2 = PTR_WCRefinePrivateFriendViewController_026cece0;
  _objc_alloc_init();
  puVar4 = local_30;
  local_50 = puVar2;
  if (local_48 == (undefined *)0x0) {
    if (local_30 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_presentViewController_animated_c_0269d2b0,puVar2,1,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    puVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_PushViewController_animated__0269cd40);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_pushViewController_animated__0269d590,local_50,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_PushViewController_animated__0269cd40,local_50,1);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

