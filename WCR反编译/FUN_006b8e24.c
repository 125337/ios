// FUN_006b8e24 @ 006b8e24

byte FUN_006b8e24(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_006b920c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  do {
    if (local_30 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      goto LAB_006b9050;
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    FUN_006babd0();
    if ((uVar2 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_24 = 0;
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_NewPersonalQRCodeViewController);
      if (((uVar2 & 1) == 0) || (uVar2 = local_30, FUN_006bad9c(), (uVar2 & 1) == 0)) {
        local_11 = 1;
        local_24 = 1;
      }
      else {
        local_11 = 0;
        local_24 = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  } while (local_24 == 0);
  goto LAB_006b91dc;
  while( true ) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar2;
    FUN_006babd0();
    if ((uVar2 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_24 = 0;
    }
    else {
      uVar2 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_isEqualToString__0269ccc8,&cf_NewPersonalQRCodeViewController);
      if (((uVar2 & 1) == 0) || (uVar2 = local_30, FUN_006bad9c(), (uVar2 & 1) == 0)) {
        local_11 = 1;
        local_24 = 1;
      }
      else {
        local_11 = 0;
        local_24 = 1;
      }
    }
    _objc_storeStrong(local_50,0);
    if (local_24 != 0) break;
LAB_006b9050:
    if (local_30 == 0) {
      local_11 = 0;
      local_24 = 1;
      break;
    }
  }
LAB_006b91dc:
  _objc_storeStrong(&local_30,0);
LAB_006b920c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

