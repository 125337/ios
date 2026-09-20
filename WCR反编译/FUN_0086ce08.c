// FUN_0086ce08 @ 0086ce08

void FUN_0086ce08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cd6b8)(local_18,local_20,local_28);
  FUN_00884260(local_28,&cf_setM_contact);
  _objc_storeStrong(&local_28,0);
  return;
}

