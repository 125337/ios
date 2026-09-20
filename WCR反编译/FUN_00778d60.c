// FUN_00778d60 @ 00778d60

void FUN_00778d60(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  if (DAT_028cc9b8 == (code *)0x0) {
    if (DAT_028cc9b0 != 0) {
      local_30 = local_18;
      local_28 = DAT_028cc9b0;
      _objc_msgSendSuper(&local_30,param_2);
    }
  }
  else {
    (*DAT_028cc9b8)(local_18,param_2);
  }
  FUN_00778f34(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

