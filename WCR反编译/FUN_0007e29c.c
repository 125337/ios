// FUN_0007e29c @ 0007e29c

byte FUN_0007e29c(double param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong local_48;
  int local_40;
  undefined1 local_39;
  ulong local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_39 = 0;
  bVar2 = true;
  uVar1 = local_20 != 0;
  if ((bool)uVar1) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_39 = uVar1;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  uVar3 = local_20;
  if (bVar2) {
    iVar5 = 1;
    local_11 = 0;
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar3;
    while (local_48 != 0) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
      if (((uVar3 & 1) != 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_alpha_026ca4d8),
         param_1 <= DAT_02323cd0)) {
        local_11 = 0;
        local_40 = 1;
        goto LAB_0007e4b0;
      }
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_40 = 2;
LAB_0007e4b0:
    _objc_storeStrong(&local_48,0);
    iVar5 = local_40 + -2;
    if (iVar5 == 0) {
      iVar5 = 1;
      local_11 = 1;
      local_40 = 1;
    }
  }
  _objc_storeStrong(iVar5,&local_20,0);
  return local_11 & 1;
}

