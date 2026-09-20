// FUN_0023d2e4 @ 0023d2e4

void FUN_0023d2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 byte param_13,undefined4 param_14,undefined8 param_15)

{
  bool bVar1;
  ulong uVar2;
  ulong local_a8;
  uint local_a0;
  undefined8 local_90;
  byte local_81;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_10);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_11);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_12);
  local_81 = param_13;
  local_90 = 0;
  _objc_storeStrong(&local_90,param_15);
  uVar2 = local_38;
  FUN_0023f984();
  if ((uVar2 & 1) == 0) {
    uVar2 = local_80;
    FUN_0023fa84();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = uVar2;
    FUN_00240100(uVar2,local_48,local_50);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      (*DAT_028c92b0)(local_28,local_30,local_38,local_40,local_48,local_50,local_58,local_60,
                      local_68,local_70,local_78,local_80,local_81 & 1);
    }
    local_a0 = (uint)!bVar1;
    _objc_storeStrong(&local_a8,0);
  }
  else {
    (*DAT_028c92b0)(local_28,local_30,local_38,local_40,local_48,local_50,local_58,local_60,local_68
                    ,local_70,local_78,local_80,local_81 & 1);
    local_a0 = 1;
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

