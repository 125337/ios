// FUN_00262558 @ 00262558

byte FUN_00262558(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  long local_48;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_numberOfButtonsExcludingCancelBu_026a1240);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfButtonsExcludingCancelBu_026a1240);
    local_30 = uVar2;
  }
  for (local_48 = 0; local_48 < (long)local_30; local_48 = local_48 + 1) {
    local_50 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_buttonTitleAtIndex__026a1248);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_buttonTitleAtIndex__026a1248,local_48);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_28);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      local_11 = 1;
    }
    _objc_storeStrong(&local_50,0);
    if (bVar1) goto LAB_00262758;
  }
  local_11 = 0;
LAB_00262758:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

