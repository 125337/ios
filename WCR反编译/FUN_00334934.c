// FUN_00334934 @ 00334934

byte FUN_00334934(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong local_38;
  int local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if ((local_20 == 0) || (param_2 == 0)) {
    iVar3 = 1;
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    while (local_38 != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,local_28);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        local_2c = 1;
        goto LAB_00334aa4;
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_2c = 2;
LAB_00334aa4:
    _objc_storeStrong(&local_38,0);
    iVar3 = local_2c + -2;
    if (iVar3 == 0) {
      iVar3 = 1;
      local_11 = 0;
      local_2c = 1;
    }
  }
  _objc_storeStrong(iVar3,&local_20,0);
  return local_11 & 1;
}

