// FUN_0067b92c @ 0067b92c

void FUN_0067b92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  ulong uVar1;
  long local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (((DAT_028cbd48 & 1) == 0) && (local_30 == 0)) {
    uVar1 = local_28;
    FUN_0067e750(local_28,local_18);
    if ((uVar1 & 1) == 0) {
      (*DAT_028cbcf0)(local_18,local_20,local_28,local_30,param_5 & 1);
    }
  }
  else {
    (*DAT_028cbcf0)(local_18,local_20,local_28,local_30,param_5 & 1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

