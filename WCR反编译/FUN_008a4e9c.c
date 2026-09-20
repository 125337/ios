// FUN_008a4e9c @ 008a4e9c

void FUN_008a4e9c(undefined8 param_1)

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
  }
  else {
    uVar1 = local_18;
    FUN_008a52d4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (((uVar1 == 0) ||
        ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isHidden_026ca768), (uVar1 & 1) != 0)) ||
       (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isSelected_026a9808),
       (uVar1 & 1) != 0)) {
      local_30 = 1;
    }
    else {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onOriginImageCheck__026a97b0);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelected__0269fd48,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOriginImageCheck__026a97b0,local_38);
      }
      if ((local_20 != 0) &&
         (uVar1 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setIsOriginalImage__026a9810),
         (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setIsOriginalImage__026a9810,1);
      }
      local_30 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

