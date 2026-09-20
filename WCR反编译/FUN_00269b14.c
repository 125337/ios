// FUN_00269b14 @ 00269b14

byte FUN_00269b14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0026a464();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_28 = uVar1;
  FUN_0026af7c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_40[0] = uVar2;
  FUN_0026b2e0(local_28,PTR_s_type_0269e6f8,0xffffffff);
  uVar2 = local_40[0];
  FUN_0026b2e0(local_40[0],PTR_s_dataType_026a13b8,0xffffffff);
  local_48 = (int)uVar2;
  if (local_48 < 0) {
    uVar2 = local_40[0];
    FUN_0026b2e0(local_40[0],PTR_s_getDataType_0269db00,0xffffffff);
    local_48 = (int)uVar2;
  }
  if (((int)uVar1 == 8) || (local_48 == 8)) {
    local_11 = 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

