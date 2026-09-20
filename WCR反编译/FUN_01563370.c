// FUN_01563370 @ 01563370

void FUN_01563370(void)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***local_58;
  undefined8 ***local_48;
  undefined8 ***local_40;
  uint local_38;
  byte local_31;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  
  ppppuVar3 = (undefined8 ****)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
  _objc_retainAutoreleasedReturnValue();
  local_20 = ppppuVar3;
  if (ppppuVar3 != (undefined8 ****)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar3,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 0;
    local_58 = ppppuVar3;
    if (ppppuVar3 == (undefined8 ****)0x0) {
      local_58 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_58;
    }
    local_31 = ppppuVar3 == (undefined8 ****)0x0;
    FUN_015616fc();
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_58;
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(ppppuVar3);
    pppuVar2 = local_28;
    bVar1 = (undefined8 ****)local_28 != (undefined8 ****)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pppuVar2;
    }
    local_38 = (uint)bVar1;
    ppppuVar3 = &local_28;
    _objc_storeStrong(ppppuVar3,0);
    if (local_38 != 0) goto LAB_01563618;
  }
  FUN_015451e4();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIWindow_026cdf68;
  local_40 = ppppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(ppppuVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  ppppuVar5 = (undefined8 ****)local_40;
  if (((ulong)ppppuVar3 & 1) == 0) {
    local_18 = (undefined8 ****)0x0;
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = ppppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar5,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (ppppuVar5 == (undefined8 ****)0x0) {
      local_18 = (undefined8 ****)0x0;
    }
    else {
      ppppuVar3 = (undefined8 ****)local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar3;
      FUN_015616fc();
      _objc_retainAutoreleasedReturnValue();
      local_18 = ppppuVar5;
      (*(code *)PTR__objc_release_02578630)(ppppuVar3);
    }
    local_38 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_01563618:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

