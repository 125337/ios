// FUN_0015d640 @ 0015d640

byte FUN_0015d640(undefined8 param_1)

{
  ulong uVar1;
  ulong local_68;
  bool local_49;
  ulong local_48;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0015d898;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isShowingTipsBar_0269f6f0);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isShowingTipsBar_0269f6f0);
    local_11 = (byte)uVar1 & 1;
    local_24 = 1;
    goto LAB_0015d898;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_tipsNewNavBar_0269f658);
  local_49 = (uVar1 & 1) == 0;
  if (local_49) {
    local_68 = 0;
  }
  else {
    local_68 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tipsNewNavBar_0269f658);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_68;
  }
  local_49 = !local_49;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = local_68;
  if (local_49) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (local_40[0] == 0) {
LAB_0015d86c:
    local_11 = 0;
  }
  else {
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_isShowingTipsBar_0269f6f0);
    if ((uVar1 & 1) == 0) goto LAB_0015d86c;
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_isShowingTipsBar_0269f6f0);
    local_11 = (byte)uVar1 & 1;
  }
  local_24 = 1;
  _objc_storeStrong(local_40,0);
LAB_0015d898:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

