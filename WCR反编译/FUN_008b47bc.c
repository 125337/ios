// FUN_008b47bc @ 008b47bc

void FUN_008b47bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 byte param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_58;
  byte local_49;
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
  local_48 = 0;
  local_3c = param_7;
  local_38 = param_6;
  local_34 = param_5;
  _objc_storeStrong(&local_48,param_8);
  local_49 = param_9;
  puVar1 = &local_58;
  local_58 = 0;
  _objc_storeStrong(puVar1,param_11);
  FUN_008b4e10();
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028ce008)(local_18,local_20,local_28,local_30,local_34,local_38,local_3c,local_48,
                    local_49 & 1);
  }
  else {
    FUN_008c0c98();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = local_28;
      FUN_008b50d8();
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_28, FUN_008c38d0(local_28,local_30), (uVar2 & 1) == 0)) {
        (*DAT_028ce008)(local_18,local_20,local_28,local_30,local_34,local_38,local_3c,local_48,
                        local_49 & 1);
      }
    }
    else {
      (*DAT_028ce008)(local_18,local_20,local_28,local_30,local_34,local_38,local_3c,local_48,
                      local_49 & 1);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

