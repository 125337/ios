// FUN_0009bb30 @ 0009bb30

void FUN_0009bb30(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028c7fc8)(param_1,param_2);
  uVar1 = local_28;
  FUN_0009c980();
  if ((uVar1 & 1) == 0) {
    FUN_0009cb18(local_28);
    FUN_0009cf30(local_28);
    FUN_0009d13c(local_28);
  }
  else {
    if (local_28 == 0) {
      _memset(auStack_60,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_60,local_28,PTR_s_transform_0269e178);
    }
    _memcpy(auStack_90,PTR__CGAffineTransformIdentity_025782d8,0x30);
    puVar2 = auStack_60;
    _CGAffineTransformEqualToTransform(puVar2,auStack_90);
    if (((ulong)puVar2 & 1) == 0) {
      _memcpy(auStack_c0,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar1 = local_28;
      _memcpy(auStack_f0,auStack_c0,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_f0);
    }
  }
  return;
}

