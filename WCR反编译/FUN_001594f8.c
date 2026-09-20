// FUN_001594f8 @ 001594f8

byte FUN_001594f8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_20;
  (*DAT_028c8838)(local_20,local_28,local_30,param_4);
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    FUN_0015ab30();
    uVar2 = local_30;
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar2 = local_30;
        FUN_001631c8(local_30,param_4);
        local_11 = (byte)uVar2 & 1;
      }
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

