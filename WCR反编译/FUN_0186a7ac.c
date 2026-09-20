// FUN_0186a7ac @ 0186a7ac

byte FUN_0186a7ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_5c;
  ulong local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_20);
    if ((uVar2 & 1) == 0) {
      uVar3 = local_20;
      FUN_0186efec();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_38 = uVar3;
      FUN_0186efec();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      local_5c = 0;
      if (uVar2 != 0) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_38);
        local_5c = (byte)uVar2;
      }
      local_11 = local_5c & 1;
      local_2c = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

