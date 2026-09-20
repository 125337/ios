// FUN_00069960 @ 00069960

void FUN_00069960(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (param_3 != (code *)0x0) {
    (*param_3)(local_18,param_2);
  }
  FUN_00069244(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

