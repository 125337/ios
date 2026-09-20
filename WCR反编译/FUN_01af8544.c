// FUN_01af8544 @ 01af8544

byte FUN_01af8544(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_28);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_01af86b0;
      }
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_wxid_);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
LAB_01af86b0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

