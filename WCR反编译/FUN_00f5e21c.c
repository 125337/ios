// FUN_00f5e21c @ 00f5e21c

void FUN_00f5e21c(long param_1,byte param_2,undefined8 param_3)

{
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    if ((local_19 & 1) == 0) {
      local_50 = local_28;
    }
    else {
      local_50 = &cf_eQ___uv__9e_g_;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_19 & 1,local_50)
    ;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

