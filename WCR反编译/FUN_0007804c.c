// FUN_0007804c @ 0007804c

byte FUN_0007804c(undefined8 param_1,byte param_2,long param_3)

{
  byte local_68 [8];
  long local_60;
  undefined4 local_34;
  long local_30;
  byte local_21;
  undefined8 local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = param_3;
  local_21 = param_2;
  if ((param_2 & 1) == 0) {
    FUN_0007814c(local_68,local_20);
    local_11 = (local_68[0] & 1) != 0 && local_60 < 1;
  }
  else {
    local_11 = param_3 < 1;
  }
  local_34 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

