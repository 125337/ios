// FUN_003bfcb8 @ 003bfcb8

void FUN_003bfcb8(double param_1,undefined8 param_2)

{
  undefined8 local_20;
  double local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20,param_2);
  if (DAT_028ca190 < local_18) {
    DAT_028ca190 = local_18;
    _CACurrentMediaTime();
  }
  _objc_storeStrong(&local_20,0);
  return;
}

