// FUN_000ce114 @ 000ce114

byte FUN_000ce114(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  int local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_58 = 0;
  }
  else {
    local_58 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  do {
    if (local_28 == 0) {
      local_38 = 2;
LAB_000ce2ec:
      _objc_storeStrong(&local_28,0);
      local_38 = local_38 + -2;
      if (local_38 == 0) {
        local_38 = 1;
        local_11 = 0;
      }
      _objc_storeStrong(local_38,&local_20,0);
      return local_11 & 1;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_000c7a5c();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) != 0) {
      local_11 = 1;
      local_38 = 1;
      goto LAB_000ce2ec;
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

