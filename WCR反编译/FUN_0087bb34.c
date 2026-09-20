// FUN_0087bb34 @ 0087bb34

byte FUN_0087bb34(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_48 [3];
  byte local_2d;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((DAT_028cd864 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_0087bd70;
  }
  uVar1 = local_20;
  FUN_0087d624();
  local_2d = (byte)uVar1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_11 = 0;
      local_2c = 1;
      goto LAB_0087bd70;
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__),
       (uVar1 & 1) == 0)) {
      local_11 = 0;
      local_2c = 1;
      goto LAB_0087bd70;
    }
  }
  uVar1 = local_20;
  FUN_0087d760();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00873154();
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar1;
    FUN_00873420();
    if ((uVar1 & 1) == 0) {
      local_11 = local_2d & 1;
    }
    else {
      local_11 = 1;
    }
    local_2c = 1;
    _objc_storeStrong(local_48,0);
  }
LAB_0087bd70:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

