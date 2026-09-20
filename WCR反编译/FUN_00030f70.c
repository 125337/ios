// FUN_00030f70 @ 00030f70

void FUN_00030f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c7ad8)(local_18,local_20,local_28);
  lVar1 = local_28;
  FUN_0003bd70(local_28,PTR_s_retcode_0269d918);
  if (lVar1 == 0) {
    FUN_0004751c(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

