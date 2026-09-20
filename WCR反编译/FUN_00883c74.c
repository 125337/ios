// FUN_00883c74 @ 00883c74

byte FUN_00883c74(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_gh_);
      if ((uVar1 & 1) == 0) {
        if (local_20 != 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isBrandContact_0269d9c8);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isBrandContact_0269d9c8);
            if ((uVar1 & 1) != 0) {
              local_11 = 0;
              goto LAB_00883e60;
            }
          }
        }
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
LAB_00883e60:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

