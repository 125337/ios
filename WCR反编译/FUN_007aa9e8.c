// FUN_007aa9e8 @ 007aa9e8

byte FUN_007aa9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_49 [24];
  byte local_31;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_31 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028ccb90)(local_20,local_28,local_30,local_31 & 1);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    local_49[0] = 0;
    uVar2 = local_30;
    FUN_007ab000(local_30,local_31 & 1,local_49);
    if ((local_49[0] & 1) == 0) {
      uVar3 = local_20;
      (*DAT_028ccb90)(local_20,local_28,local_30,local_31 & 1);
      local_11 = (byte)uVar3 & 1;
    }
    else {
      local_11 = (byte)uVar2 & 1;
    }
  }
  local_49[1] = 1;
  local_49[2] = 0;
  local_49[3] = 0;
  local_49[4] = 0;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

