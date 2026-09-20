// _WCRGroupingProjectSession @ 01a99cb4

ulong _WCRGroupingProjectSession(ulong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint3 local_20;
  byte bStack_b;
  undefined1 local_8;
  byte local_7;
  
  bStack_b = (byte)(param_1 >> 8);
  local_8 = (undefined1)(param_1 >> 0x20);
  local_7 = (byte)(param_1 >> 0x28);
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = bStack_b;
  }
  bVar2 = 0;
  if ((((param_1 & 0x1000000000000) == 0) && (bVar2 = 0, (bVar1 & 1) != 1)) &&
     (bVar2 = 0, (param_1 & 0x1000000) != 0)) {
    bVar2 = local_7;
  }
  uVar3 = 0;
  if (((((param_1 & 0x1000000000000) == 0) && (uVar3 = 0, (bVar2 & 1) == 0)) &&
      (((param_1 & 0x100) != 0 || (uVar3 = 0, (param_1 & 1) == 0)))) &&
     (uVar3 = 0, (param_1 & 0x10000) != 0)) {
    uVar3 = local_8;
  }
  local_20 = CONCAT12(bVar2,CONCAT11(uVar3,bVar1)) & 0x10101;
  return (ulong)local_20;
}

