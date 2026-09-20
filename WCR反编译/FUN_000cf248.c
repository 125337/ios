// FUN_000cf248 @ 000cf248

byte FUN_000cf248(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    FUN_000c7730();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_000ce114();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar3 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_000cfa34();
        local_11 = (byte)uVar3 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

