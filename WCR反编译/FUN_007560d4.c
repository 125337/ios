// FUN_007560d4 @ 007560d4

byte FUN_007560d4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_30;
    FUN_00744988();
    if ((uVar1 & 1) == 0) {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (lVar2 != 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_28);
        if ((uVar1 & 1) != 0) {
          local_11 = 0;
          goto LAB_0075626c;
        }
      }
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
LAB_0075626c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

