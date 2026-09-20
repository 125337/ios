// FUN_001d151c @ 001d151c

byte FUN_001d151c(undefined8 param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte local_64;
  byte local_60;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    goto LAB_001d1654;
  }
  FUN_001d1ba0();
  puVar2 = puVar1;
  FUN_001d1c14();
  if (puVar1 == (ulong *)0x0) {
LAB_001d15cc:
    local_64 = 0;
    if (puVar2 != (ulong *)0x0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_64 = (byte)uVar3;
    }
    local_60 = local_64;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_60 = 1;
    if ((uVar3 & 1) == 0) goto LAB_001d15cc;
  }
  local_11 = local_60 & 1;
LAB_001d1654:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

