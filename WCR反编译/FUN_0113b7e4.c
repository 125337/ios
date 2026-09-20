// FUN_0113b7e4 @ 0113b7e4

void FUN_0113b7e4(long param_1)

{
  uint uVar1;
  u_int32_t uVar2;
  uint uVar3;
  uint local_2c;
  
  _arc4random_buf(&DAT_028e68dc,0x10);
  DAT_028e68ec = _arc4random();
  uVar2 = _arc4random_uniform(4);
  DAT_028e68f0 = (char)uVar2 + '\x01';
  for (local_2c = 0; (int)local_2c < 4; local_2c = local_2c + 1) {
    uVar1 = *(uint *)(&DAT_028e68dc + (long)(int)local_2c * 4);
    uVar3 = local_2c;
    FUN_0113b8f4(local_2c,DAT_028e68ec,DAT_028e68f0);
    *(uint *)(&DAT_028e68cc + (long)(int)local_2c * 4) =
         (uint)(param_1 - 0x9dea6cU >> ((ulong)(local_2c * 0x10) & 0x3f)) & 0xffff ^ uVar1 ^ uVar3;
  }
  DAT_028e68f1 = 1;
  return;
}

