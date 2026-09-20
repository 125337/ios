// FUN_002c0e74 @ 002c0e74

bool FUN_002c0e74(long param_1,long param_2)

{
  bool local_1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_1 = false;
  }
  else {
    local_1 = false;
    if (((*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68)) &&
        (((local_1 = false, *(long *)(param_1 + 0x70) == *(long *)(param_2 + 0x70) &&
          (local_1 = false, (*(byte *)(param_1 + 0x78) & 1) == (*(byte *)(param_2 + 0x78) & 1))) &&
         (local_1 = false, (*(byte *)(param_1 + 0x79) & 1) == (*(byte *)(param_2 + 0x79) & 1))))) &&
       (((local_1 = false, (*(byte *)(param_1 + 0x7a) & 1) == (*(byte *)(param_2 + 0x7a) & 1) &&
         (local_1 = false, (*(byte *)(param_1 + 0x7b) & 1) == (*(byte *)(param_2 + 0x7b) & 1))) &&
        (local_1 = false, (*(byte *)(param_1 + 0x7c) & 1) == (*(byte *)(param_2 + 0x7c) & 1))))) {
      local_1 = (*(byte *)(param_1 + 0x7d) & 1) == (*(byte *)(param_2 + 0x7d) & 1);
    }
  }
  return local_1;
}

