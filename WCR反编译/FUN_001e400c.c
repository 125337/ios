// FUN_001e400c @ 001e400c

ulong FUN_001e400c(ulong param_1,long param_2)

{
  ulong local_18;
  
  local_18 = (ulong)((param_1 & 1) != 0);
  if ((param_1 & 0x100) != 0) {
    local_18 = local_18 | 2;
  }
  if ((param_1 & 0x10000) != 0) {
    local_18 = local_18 | 4;
  }
  if ((param_1 & 0x1000000) != 0) {
    local_18 = local_18 | 8;
  }
  return local_18 ^ param_2 << 4;
}

