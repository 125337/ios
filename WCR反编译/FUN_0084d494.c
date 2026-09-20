// FUN_0084d494 @ 0084d494

void FUN_0084d494(undefined8 param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long local_40 [3];
  long local_28;
  undefined4 local_20;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_19 = param_2;
  if (local_18 == 0) {
    local_20 = 1;
  }
  else {
    lVar1 = local_18;
    FUN_0084cb28();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_28 = lVar1;
    FUN_0084ce38();
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar2;
    if (local_28 != 0) {
      FUN_00853910(local_28,local_19 & 1);
    }
    if (local_40[0] != 0) {
      FUN_00853910(local_40[0],local_19 & 1);
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
    local_20 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

