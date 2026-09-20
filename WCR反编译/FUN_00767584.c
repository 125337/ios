// FUN_00767584 @ 00767584

void FUN_00767584(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  if ((DAT_028cc880 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_18;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar2 & 1) == 0) {
        _objc_storeStrong(&local_28,0);
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_30 = uVar2;
        while (local_30 != 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((uVar3 & 1) != 0) {
            _objc_storeStrong(&local_28,local_30);
            break;
          }
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_30;
          local_30 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        local_1c = 2;
        _objc_storeStrong(&local_30,0);
      }
      if ((local_28 == 0) || (uVar2 = local_28, FUN_007612d8(), (uVar2 & 1) == 0)) {
        local_1c = 1;
      }
      else {
        DAT_028cc880 = 1;
        FUN_00765798(local_28);
        DAT_028cc880 = 0;
        local_1c = 0;
      }
      _objc_storeStrong(&local_28,0);
      goto LAB_00767808;
    }
  }
  local_1c = 1;
LAB_00767808:
  _objc_storeStrong(&local_18,0);
  return;
}

