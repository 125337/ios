// FUN_008b3fdc @ 008b3fdc

void FUN_008b3fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar1,param_4);
  FUN_008b4e10();
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028cdfe8)(local_18,local_20,local_28,local_30,param_5);
  }
  else {
    FUN_008c0c98();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = local_28;
      FUN_008b50d8();
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_28, FUN_008c38d0(local_28,local_30), (uVar2 & 1) == 0)) {
        (*DAT_028cdfe8)(local_18,local_20,local_28,local_30,param_5);
      }
    }
    else {
      (*DAT_028cdfe8)(local_18,local_20,local_28,local_30,param_5);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

