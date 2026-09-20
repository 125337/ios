// FUN_01de574c @ 01de574c

void FUN_01de574c(long param_1)

{
  cfstringStruct *local_38;
  
  local_38 = *(cfstringStruct **)(param_1 + 0x28);
  if (local_38 == (cfstringStruct *)0x0) {
    local_38 = &cf_b_YS;
  }
  FUN_01de2b48(*(undefined8 *)(param_1 + 0x20),&cf_title,local_38);
  return;
}

