// unreadDotColorForTraitCollection: @ 0111fd7c

/* Function Stack Size: 0x18 bytes */

ID WCRefinePrivateFriendManager::unreadDotColorForTraitCollection_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined1 *puVar3;
  ID local_a0;
  undefined1 *local_88;
  ID local_70;
  ID local_60;
  undefined1 *local_50;
  undefined1 *local_48;
  byte local_39;
  ID local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = (undefined1 *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  bVar1 = local_30 == (undefined1 *)0x0;
  local_38 = IVar2;
  if (bVar1) {
    local_88 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
  }
  else {
    local_88 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_88;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userInterfaceStyle_026cabc8);
  local_39 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  _objc_storeStrong(&local_48,0);
  bVar1 = (local_39 & 1) == 0;
  local_a0 = local_38;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unreadDotColorLight_026af0e0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_a0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unreadDotColorDark_026af0d8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_a0;
  }
  FUN_0111fff0();
  _objc_retainAutoreleasedReturnValue();
  local_18 = local_a0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

