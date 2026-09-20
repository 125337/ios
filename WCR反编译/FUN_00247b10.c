// FUN_00247b10 @ 00247b10

void FUN_00247b10(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long local_50;
  long local_40;
  long local_28;
  long local_20;
  long local_18;
  
  lVar4 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_presentingViewController_026a0db0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    local_28 = lVar4;
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar2 = lVar4 != *(long *)(param_1 + 0x20);
      bVar3 = true;
      local_40 = lVar4;
      if (bVar2) {
        local_50 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = local_50 == *(long *)(param_1 + 0x20);
      }
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar3) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_popViewControllerAnimated__0269ede0,1);
      _objc_unsafeClaimAutoreleasedReturnValue(lVar4);
    }
    _objc_storeStrong(&local_28,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
  }
  return;
}

