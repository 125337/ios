// FUN_003c8d38 @ 003c8d38

void FUN_003c8d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  if (local_18 != 0) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_70 = &cf___;
    }
    else {
      local_70 = local_20;
    }
    _objc_setAssociatedObject(local_18,&DAT_028ca290,local_70,3);
    if (local_28 == (cfstringStruct *)0x0) {
      local_88 = &cf___;
    }
    else {
      local_88 = local_28;
    }
    _objc_setAssociatedObject(local_18,&DAT_028ca291,local_88,3);
    if (local_30 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    else {
      local_a0 = local_30;
    }
    _objc_setAssociatedObject(local_18,&DAT_028ca292,local_a0,3);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

