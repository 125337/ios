// FUN_00802adc @ 00802adc

void FUN_00802adc(long param_1,ulong param_2)

{
  ulong local_48;
  
  local_48 = param_2;
  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    local_48 = param_2 + 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addIndex__0269fc98,local_48);
  return;
}

