// FUN_006aba98 @ 006aba98

void FUN_006aba98(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long local_78;
  long local_68;
  bool local_51;
  long local_50;
  long local_40;
  long local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  FUN_006abd20();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  if (param_1 == 0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = false;
    local_51 = false;
    if (param_1 == 0) {
      local_30 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_40 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      if (local_40 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_78;
      }
      local_51 = local_40 != 0;
      local_68 = local_78;
    }
    else {
      local_68 = local_18;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_68;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(param_1);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,0,0);
    }
    FUN_006ac914(local_18);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

