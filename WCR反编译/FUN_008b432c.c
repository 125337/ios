// FUN_008b432c @ 008b432c

void FUN_008b432c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = &local_48;
  local_48 = 0;
  local_3c = param_7;
  local_38 = param_6;
  local_34 = param_5;
  _objc_storeStrong(puVar1,param_8);
  FUN_008b4e10();
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028cdff8)(local_18,local_20,local_28,local_30,local_34,local_38,local_3c,local_48);
  }
  else {
    FUN_008c0c98();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = local_28;
      FUN_008b50d8();
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_28, FUN_008c38d0(local_28,local_30), (uVar2 & 1) == 0)) {
        (*DAT_028cdff8)(local_18,local_20,local_28,local_30,local_34,local_38,local_3c,local_48);
      }
    }
    else {
      (*DAT_028cdff8)(local_18,local_20,local_28,local_30,local_34,local_38,local_3c,local_48);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

