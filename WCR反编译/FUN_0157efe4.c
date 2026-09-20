// FUN_0157efe4 @ 0157efe4

byte FUN_0157efe4(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 byte param_6)

{
  ulong uVar1;
  long local_50;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((((DAT_028e3880 == 0) || (DAT_028e3888 == 0)) ||
      (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
      uVar1 == 0)) || (DAT_028e3890 == 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,DAT_028e3890);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      local_50 = DAT_028e3888;
      FUN_01563a08();
      if (local_50 < 0) {
        local_50 = DAT_028c5f68;
      }
      if (((param_2 == DAT_028c5f58) && (param_3 == DAT_028c5f60)) &&
         ((param_4 == local_50 &&
          ((param_5 == DAT_028e39f0 && ((param_6 & 1) == (DAT_028e39f8 & 1))))))) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

