// FUN_001e40a8 @ 001e40a8

long FUN_001e40a8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5
                 ,double param_6,long param_7)

{
  long lVar1;
  long local_58;
  long local_50;
  double local_48;
  double local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  
  local_50 = 0;
  local_48 = param_6;
  local_40 = param_5;
  local_38 = param_7;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  _objc_storeStrong(&local_50);
  local_58 = ((((long)local_18 ^ (long)local_20 << 0x10) * 0x1f + local_38) * 0x1f +
             (long)(local_40 * 10.0)) * 0x1f + (long)(local_48 * 10.0);
  if (0.0 < local_48) {
    lVar1 = local_50;
    FUN_001db430();
    local_58 = local_58 * 0x1f + lVar1;
  }
  _objc_storeStrong(&local_50,0);
  return local_58;
}

