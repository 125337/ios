// FUN_00f84914 @ 00f84914

void FUN_00f84914(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  long local_30;
  ulong local_28;
  int local_20;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_19 = param_2;
  if ((local_18 == 0) || ((param_2 & 1) == 0)) {
    local_20 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    for (local_30 = 0; local_28 != 0 && local_30 < 5; local_30 = local_30 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,0);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_TableViewCell);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_isEqualToString__0269ccc8,&cf_UITableViewCell), (uVar1 & 1) == 0)
         ) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_28;
        local_28 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_20 = 0;
      }
      else {
        local_20 = 2;
      }
      _objc_storeStrong(&local_38,0);
      if (local_20 != 0) break;
    }
    _objc_storeStrong(&local_28,0);
    local_20 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

