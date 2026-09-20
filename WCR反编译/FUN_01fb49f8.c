// FUN_01fb49f8 @ 01fb49f8

ulong FUN_01fb49f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  uVar1 = local_20;
  FUN_01fb5834(local_20,PTR_s_getAllAppListItem_026c9e50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
      uVar1 == 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,
                PTR_s_getAllAppListItemsIsIncludeStar__026c9e58), (uVar1 & 1) != 0)) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_getAllAppListItemsIsIncludeStar__026c9e58,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onDeleteWeAppItem__026c9e60);
  uVar3 = local_18;
  uVar1 = local_30;
  if ((uVar4 & 1) != 0) {
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01fb5cc4;
    local_40 = &DAT_0258d1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar3;
    FUN_01fb58f8(uVar1,&local_58);
    local_28 = uVar1;
    _objc_storeStrong(&local_38,0);
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_deleteAllAppListItem_026c9e68);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_deleteAllAppListItem_026c9e68);
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_deleteAppUsageInfoBeforeTime__026c9e70);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_deleteAppUsageInfoBeforeTime__026c9e70,0xffffffff);
  }
  uVar1 = local_28;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return uVar1;
}

