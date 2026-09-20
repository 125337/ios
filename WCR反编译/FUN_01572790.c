// FUN_01572790 @ 01572790

byte FUN_01572790(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,
               PTR_s_onClickComplainBtn_dataItem__026a5bd0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onEditBlackList__026a5878);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onEditBlackList__026a5878,local_20);
        local_11 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_onClickComplainBtn_dataItem__026a5bd0,0,local_20);
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

