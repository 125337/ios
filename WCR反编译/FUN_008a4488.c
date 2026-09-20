// FUN_008a4488 @ 008a4488

byte FUN_008a4488(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_008a47c0(local_20,PTR_s_isOriginSelected_026a97b8,0);
  if ((uVar1 & 1) == 0) {
    if (local_28 != 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_isOriginalImage_026a97c0);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_28;
        FUN_008a47c0(local_28,PTR_s_isOriginalImage_026a97c0,0);
        if ((uVar1 & 1) != 0) {
          local_11 = 1;
          goto LAB_008a45d0;
        }
      }
    }
    local_11 = 0;
  }
  else {
    local_11 = 1;
  }
LAB_008a45d0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

