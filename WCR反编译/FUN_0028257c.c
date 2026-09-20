// FUN_0028257c @ 0028257c

void FUN_0028257c(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  pcVar1 = *(cfstringStruct **)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_localizedDescription_0269ced0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &cf_OX_1Y_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    _objc_storeStrong(&local_28,&cf_v_x_g_gN_ecvQel6eU_);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
      local_70 = local_28;
    }
    else {
      local_70 = &cf__OX_0RvQ;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(byte *)(param_1 + 0x31) & 1,local_70);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

