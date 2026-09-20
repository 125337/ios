// FUN_003df438 @ 003df438

void FUN_003df438(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  long local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    if (local_20 == (cfstringStruct *)0x0) {
      local_58 = &cf___;
    }
    else {
      local_58 = local_20;
    }
    _objc_setAssociatedObject(local_18,&DAT_028ca0e0,local_58,3);
    lVar1 = local_18;
    FUN_00355cb8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 != 0) {
      if (local_20 == (cfstringStruct *)0x0) {
        local_70 = &cf___;
      }
      else {
        local_70 = local_20;
      }
      _objc_setAssociatedObject(lVar1,&DAT_028ca0e1,local_70,3);
    }
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

