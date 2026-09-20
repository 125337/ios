// FUN_005664ec @ 005664ec

byte FUN_005664ec(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isImageComment_026a5160);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isImageComment_026a5160);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_00566658;
      }
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isEmotionComment_026a5168);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEmotionComment_026a5168);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_00566658;
      }
    }
    local_11 = 0;
  }
LAB_00566658:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

