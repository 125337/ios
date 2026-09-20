// FUN_004cd230 @ 004cd230

void FUN_004cd230(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_rightBarButtonItem_0269feb8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_38 = uVar3;
    if (uVar3 == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rightBarButtonItems_0269eab0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (bVar1) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rightBarButtonItems_0269eab0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_38;
      local_38 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar3 = local_38;
    FUN_004c9c5c();
    _objc_retainAutoreleasedReturnValue();
    local_24 = 1;
    local_18 = uVar3;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

