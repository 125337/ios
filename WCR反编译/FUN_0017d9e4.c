// FUN_0017d9e4 @ 0017d9e4

byte FUN_0017d9e4(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_b8;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  undefined8 local_30;
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_24 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    uVar1 = local_24;
    FUN_0017e154();
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      uVar4 = (ulong)local_24;
      FUN_0017a184(uVar4,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      FUN_0017b8cc();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      uVar3 = local_20;
      if (uVar4 == 0) {
        local_11 = 0;
        local_40 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          local_11 = 0;
        }
        else {
          uVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_48);
          local_b8 = 1;
          if ((uVar3 & 1) == 0) {
            uVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,local_48);
            local_b8 = (byte)uVar3;
          }
          local_11 = local_b8 & 1;
        }
        local_40 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

