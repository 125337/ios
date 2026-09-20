// FUN_007cbcf8 @ 007cbcf8

byte FUN_007cbcf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 = local_38, uVar3 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      uVar2 = local_30;
      FUN_007c9cf4();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_38;
      FUN_007c9cf4();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar4 & 1) == 0) {
        uVar3 = local_38;
        FUN_007cc908();
        uVar2 = local_38;
        if ((uVar3 & 1) == 0) {
          local_21 = 0;
          local_48 = 1;
        }
        else {
          uVar3 = local_30;
          FUN_007cccac();
          _objc_retainAutoreleasedReturnValue();
          FUN_007cca08();
          _objc_retainAutoreleasedReturnValue();
          local_50 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar2 = local_30;
          FUN_007c9cf4();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_50;
          FUN_007c9cf4();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((uVar4 & 1) == 0) {
            uVar2 = local_30;
            FUN_007c8b6c();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_38;
            local_58 = uVar2;
            FUN_007cd064();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_58;
            local_60 = uVar3;
            FUN_007c9cf4();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_60;
            FUN_007c9cf4();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
            local_21 = (byte)uVar4 & 1;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar2);
            local_48 = 1;
            _objc_storeStrong(&local_60);
            _objc_storeStrong(&local_58,0);
          }
          else {
            local_21 = 1;
            local_48 = 1;
          }
          _objc_storeStrong(&local_50,0);
        }
      }
      else {
        local_21 = 1;
        local_48 = 1;
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

