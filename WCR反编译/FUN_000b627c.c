// FUN_000b627c @ 000b627c

undefined1 FUN_000b627c(void)

{
  ulong uVar1;
  ulong local_20;
  
  local_20 = 0;
  while( true ) {
    if (3 < (long)local_20) {
      return 0;
    }
    uVar1 = local_20;
    FUN_000a68d0(local_20 - 4);
    if ((uVar1 & 1) != 0) break;
    local_20 = local_20 + 1;
  }
  return 1;
}

