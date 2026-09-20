// FUN_001489f4 @ 001489f4

undefined8 FUN_001489f4(byte param_1)

{
  undefined8 local_30;
  
  if ((param_1 & 1) == 0) {
    local_30 = 0x404e000000000000;
    FUN_0013a1e0();
  }
  else {
    local_30 = 0x4074a00000000000;
    FUN_0013a1e0();
  }
  return local_30;
}

