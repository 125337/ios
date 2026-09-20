// FUN_002f1fa0 @ 002f1fa0

byte FUN_002f1fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026dfda0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if (local_30 == lVar1) {
    local_11 = 1;
  }
  else {
    lVar1 = local_20;
    (*DAT_028c9a10)(local_20,local_28,local_30,local_38);
    local_11 = (byte)lVar1 & 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

