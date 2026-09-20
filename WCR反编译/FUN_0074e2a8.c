// FUN_0074e2a8 @ 0074e2a8

void FUN_0074e2a8(long param_1)

{
  **(ulong **)(param_1 + 0x20) = (ulong)((DAT_026f45d0 & 1) != 0);
  DAT_026f45d0 = (DAT_026f45d0 ^ 1) & 1;
  return;
}

