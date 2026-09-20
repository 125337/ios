// FUN_00f83858 @ 00f83858

void FUN_00f83858(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  *param_2 = 1;
  *param_3 = 1;
  uVar1 = local_18;
  local_28 = param_3;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
  if ((uVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isHeadPart_0269f0b0);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHeadPart_0269f0b0);
      *local_20 = (char)uVar1;
    }
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_isTailPart_026a03c0);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isTailPart_026a03c0);
      *local_28 = (char)uVar1;
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

