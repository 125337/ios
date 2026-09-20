// FUN_008a4608 @ 008a4608

byte FUN_008a4608(undefined8 param_1,undefined8 param_2)

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
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_canSendOriginalImage_026a2188);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_20;
    FUN_008a47c0(local_20,PTR_s_canSendOriginalImage_026a2188,0);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
      goto LAB_008a4788;
    }
  }
  if (local_28 != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_canSendOriginImage_026a21c8);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_28;
      FUN_008a47c0(local_28,PTR_s_canSendOriginImage_026a21c8,0);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
        goto LAB_008a4788;
      }
    }
  }
  local_11 = 1;
LAB_008a4788:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

