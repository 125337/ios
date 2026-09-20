// FUN_00878aa4 @ 00878aa4

byte FUN_00878aa4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long local_38;
  int local_2c;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  if ((local_20 == 0) || (local_28 == 0)) {
    iVar3 = 1;
    local_11 = 0;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar1;
    while (local_38 != 0) {
      if (local_38 == local_28) {
        local_11 = 1;
        local_2c = 1;
        goto LAB_00878bf8;
      }
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_38;
      local_38 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    local_2c = 2;
LAB_00878bf8:
    _objc_storeStrong(&local_38,0);
    iVar3 = local_2c + -2;
    if (iVar3 == 0) {
      iVar3 = 1;
      local_11 = 0;
      local_2c = 1;
    }
  }
  _objc_storeStrong(iVar3,&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

