// FUN_008b8a0c @ 008b8a0c

bool FUN_008b8a0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_008b8ec8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_008b9014();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar1;
  FUN_008b91b0(uVar1,PTR_s_type_0269e6f8,0x80000000);
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return (int)uVar1 == 3;
}

