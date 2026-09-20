// FUN_00eebbec @ 00eebbec

void FUN_00eebbec(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  cfstringStruct *pcVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_00eeb684(local_30,&cf_m_dicMultiSelect);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
    local_28 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &local_78;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00eec05c;
    local_60 = &DAT_025819a0;
    local_48 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar2;
    _objc_retainBlock();
    pcVar4 = &cf_allValuesInOrder;
    local_50 = ppuVar3;
    _NSSelectorFromString();
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar4);
    ppuVar3 = local_50;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_allValues_0269dae8);
      ppuVar3 = local_50;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_allValues_0269dae8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar3[2])();
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar3[2])();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    pcVar4 = &cf_allKeysInOrder;
    _NSSelectorFromString();
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar4);
    ppuVar3 = local_50;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_allKeys_0269ef58);
      ppuVar3 = local_50;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_allKeys_0269ef58);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar3[2])();
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar3[2])();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

