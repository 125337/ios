// FUN_010cb9d8 @ 010cb9d8

byte FUN_010cb9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (((uVar1 == 0) ||
      (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      uVar1 == 0)) || (local_30 == 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsAtPath__026ca630,local_20);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_28);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_010cbc50();
        if (uVar1 == 0) {
          local_11 = 0;
        }
        else {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsAtPath__026ca630,local_28);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_28;
            FUN_010cbc50();
            if (uVar2 == uVar1) {
              local_11 = 1;
              goto LAB_010cbc14;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_removeItemAtPath_error__0269f910,local_28,0);
          }
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_copyItemAtPath_toPath_error__026a1758,local_20,local_28,0);
          if ((uVar1 & 1) == 0) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
        }
      }
      else {
        local_11 = 1;
      }
    }
  }
LAB_010cbc14:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

