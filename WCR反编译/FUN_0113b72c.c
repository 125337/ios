// FUN_0113b72c @ 0113b72c

code * FUN_0113b72c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort local_20;
  int local_1c;
  ulong local_18;
  
  local_18 = 0;
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    uVar1 = *(undefined4 *)(&DAT_028e68cc + (long)local_1c * 4);
    uVar2 = *(undefined4 *)(&DAT_028e68dc + (long)local_1c * 4);
    iVar3 = local_1c;
    FUN_0113b8f4(local_1c,DAT_028e68ec,DAT_028e68f0);
    local_20 = (ushort)uVar1 ^ (ushort)uVar2 ^ (ushort)iVar3;
    local_18 = local_18 | (ulong)local_20 << ((ulong)(uint)(local_1c * 0x10) & 0x3f);
  }
  return FUN_009dea6c + local_18;
}

