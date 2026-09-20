// FUN_000dd800 @ 000dd800

void FUN_000dd800(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined4 uVar5;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_000d8d08(local_18,"m_footerView");
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 != 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c837a);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c8379);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_18;
    FUN_000dd52c();
    if ((uVar2 & 1) == 0) {
      if ((uVar1 == 0) && ((uVar3 & 1) != 0)) {
        pcVar4 = &cf_onStateOfNoData_;
        _NSSelectorFromString();
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar4,&cf_feeN);
        }
      }
      else {
        pcVar4 = &cf_resetStatus_;
        _NSSelectorFromString();
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar1 & 1) != 0) {
          uVar5 = 2;
          if ((uVar3 & 1) == 0) {
            uVar5 = 0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar4,uVar5);
        }
        pcVar4 = &cf_updateTableFooterHeaderView;
        _NSSelectorFromString();
        if (((uVar3 & 1) != 0) &&
           (uVar1 = local_18,
           (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar4)
           , (uVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar4);
        }
      }
    }
    else {
      pcVar4 = &cf_onStateOfLoading;
      _NSSelectorFromString();
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar4);
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

