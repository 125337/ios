// FUN_0157cf84 @ 0157cf84

byte FUN_0157cf84(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_11 = 0;
  }
  else {
    FUN_0157b188();
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onSelectContact__026a4388);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_didSelectContact__026a4390);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_AddAtUser__026a4398);
        if ((uVar1 & 1) == 0) {
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_AddAtUser__026a4398,local_20);
          local_11 = 1;
        }
      }
      else {
        FUN_0157d158(local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_didSelectContact__026a4390,local_20);
        local_11 = 1;
      }
    }
    else {
      FUN_0157d158(local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onSelectContact__026a4388,local_20);
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

