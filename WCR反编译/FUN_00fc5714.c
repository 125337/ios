// FUN_00fc5714 @ 00fc5714

void FUN_00fc5714(void)

{
  byte bVar1;
  long local_28;
  
  local_28 = 0;
  while( true ) {
    bVar1 = 0;
    if ((local_28 < 0x78) && (bVar1 = 0, (DAT_028e2fcf & 1) == 0)) {
      bVar1 = DAT_028e2ef4 ^ 1;
    }
    if (((bVar1 & 1) == 0) || (FUN_00fc5634(), (DAT_028e2fcf & 1) != 0)) break;
    _usleep(50000);
    local_28 = local_28 + 1;
  }
  return;
}

