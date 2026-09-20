// FUN_015a8f64 @ 015a8f64

bool FUN_015a8f64(long param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  bool local_1;
  
  if (((param_1 == 0) || (param_2 < param_3)) || (param_2 - param_3 < 4)) {
    local_1 = false;
  }
  else {
    pcVar1 = (char *)(param_1 + param_3);
    local_1 = false;
    if ((((*pcVar1 == -1) && (local_1 = false, (pcVar1[1] & 0xe0U) == 0xe0)) &&
        ((local_1 = false, ((int)(uint)(byte)pcVar1[1] >> 3 & 3U) != 1 &&
         ((local_1 = false, ((int)(uint)(byte)pcVar1[1] >> 1 & 3U) == 1 &&
          (local_1 = false, (int)(uint)(byte)pcVar1[2] >> 4 != 0)))))) &&
       (local_1 = false, (int)(uint)(byte)pcVar1[2] >> 4 != 0xf)) {
      local_1 = ((int)(uint)(byte)pcVar1[2] >> 2 & 3U) != 3;
    }
  }
  return local_1;
}

