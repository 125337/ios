// FUN_0009bdc8 @ 0009bdc8

void FUN_0009bdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  (*DAT_028c7fd8)(param_1,param_2,param_3,param_4,param_5,param_6);
  uVar1 = local_48;
  FUN_0009c980();
  if ((uVar1 & 1) == 0) {
    FUN_0009cb18(local_48);
    FUN_0009cf30(local_48);
    FUN_0009d13c(local_48);
  }
  else {
    if (local_48 == 0) {
      _memset(auStack_a0,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_a0,local_48,PTR_s_transform_0269e178);
    }
    _memcpy(auStack_d0,PTR__CGAffineTransformIdentity_025782d8,0x30);
    puVar2 = auStack_a0;
    _CGAffineTransformEqualToTransform(puVar2,auStack_d0);
    if (((ulong)puVar2 & 1) == 0) {
      _memcpy(auStack_100,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar1 = local_48;
      _memcpy(auStack_130,auStack_100,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_130);
    }
  }
  return;
}

