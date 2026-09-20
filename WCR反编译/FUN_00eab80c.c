// FUN_00eab80c @ 00eab80c

void FUN_00eab80c(long param_1)

{
  cfstringStruct *local_38;
  
  local_38 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_38 == (cfstringStruct *)0x0) {
    local_38 = &cf___;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_38);
  return;
}

