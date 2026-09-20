// FUN_003b7ba0 @ 003b7ba0

uint FUN_003b7ba0(undefined8 param_1)

{
  long lVar1;
  uint local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  local_24 = 0;
  local_20 = lVar1;
  if (lVar1 != 0) {
    FUN_0037a830(lVar1,&cf_isChatStatusNotifyOpen);
    local_24 = (uint)lVar1 ^ 1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_24 & 1;
}

