// FUN_01798780 @ 01798780

byte FUN_01798780(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *local_78;
  long *local_58;
  byte local_49;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  long *local_28;
  long local_20;
  byte local_11;
  
  plVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar1,param_1);
  FUN_017990c4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    local_78 = plVar1;
    if (plVar1 == (long *)0x0) {
      FUN_01797b18();
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_78;
    }
    local_49 = plVar1 == (long *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_78;
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(plVar1);
    if (local_40 == (long *)0x0) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        local_11 = 1;
        local_38 = 1;
      }
      else {
        plVar1 = local_40;
        FUN_01797c48();
        _objc_retainAutoreleasedReturnValue();
        local_58 = plVar1;
        (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_length_0269cca0);
        if ((plVar1 != (long *)0x0) &&
           (plVar1 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_20),
           ((ulong)plVar1 & 1) == 0)) {
          plVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_popViewControllerAnimated__0269ede0,1);
          _objc_unsafeClaimAutoreleasedReturnValue(plVar1);
        }
        local_11 = 1;
        local_38 = 1;
        _objc_storeStrong(&local_58,0);
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

