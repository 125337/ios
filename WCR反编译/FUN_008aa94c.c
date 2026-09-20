// FUN_008aa94c @ 008aa94c

void FUN_008aa94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((DAT_028cde7a & 1) == 0) {
    (*DAT_028cde70)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

