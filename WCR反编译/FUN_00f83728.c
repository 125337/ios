// FUN_00f83728 @ 00f83728

byte FUN_00f83728(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_00f83838;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewModel_0269d080);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
LAB_00f8380c:
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0);
    if ((uVar1 & 1) == 0) goto LAB_00f8380c;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSender_0269d1b0);
    local_11 = (byte)uVar1 & 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_00f83838:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

