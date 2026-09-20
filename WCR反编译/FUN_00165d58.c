// FUN_00165d58 @ 00165d58

byte FUN_00165d58(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (((DAT_028c8858 & 1) == 0) || (FUN_0015aa74(), uVar4 = local_20, (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar4 = local_20;
      FUN_0015aee0();
      local_11 = (byte)uVar4 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

