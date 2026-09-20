// FUN_008a5584 @ 008a5584

void FUN_008a5584(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_008a4394(local_18,PTR_s_controlCenter_026a9798);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  FUN_008a5128(local_18,uVar1);
  if ((uVar2 & 1) == 0) {
    local_30 = 1;
    goto LAB_008a5758;
  }
  uVar1 = local_18;
  FUN_008a52d4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_38 = uVar1;
  FUN_008a47c0(local_18,PTR_s_canSendOriginalImage_026a2188,0);
  if (((uVar2 & 1) == 0) || (local_38 == 0)) {
LAB_008a56cc:
    FUN_008a4d30(local_18);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_reloadBottomBar_026a21d8);
    if ((uVar1 & 1) == 0) {
      FUN_008a4e9c(local_18);
      local_30 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadBottomBar_026a21d8);
      local_30 = 1;
    }
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
    if ((uVar1 & 1) != 0) goto LAB_008a56cc;
    FUN_008a4e9c(local_18);
    local_30 = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_008a5758:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

