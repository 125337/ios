// FUN_007cc33c @ 007cc33c

byte FUN_007cc33c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 = DAT_028cccd0, uVar3 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = DAT_028cccd0,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd0,PTR_s_length_0269cca0), uVar2 == 0)) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      uVar2 = DAT_028cccd0;
      FUN_007cc908();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        FUN_007cc680(local_20,DAT_028cccd0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_20;
        local_38 = uVar2;
        FUN_007c9cf4();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_38;
        FUN_007c9cf4();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
        local_11 = (byte)uVar4 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_30 = 1;
        _objc_storeStrong(&local_38,0);
      }
      else {
        uVar2 = local_20;
        FUN_007cbcf8(local_20,DAT_028cccd0);
        local_11 = (byte)uVar2 & 1;
        local_30 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

