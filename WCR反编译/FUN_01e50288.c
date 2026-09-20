// FUN_01e50288 @ 01e50288

void FUN_01e50288(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_58 = &cf___;
    }
    else {
      local_58 = local_20;
    }
    if (local_28 == (cfstringStruct *)0x0) {
      local_70 = &cf___;
    }
    else {
      local_70 = local_28;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_58,local_70);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

