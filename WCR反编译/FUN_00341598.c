// FUN_00341598 @ 00341598

void FUN_00341598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint local_84;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  FUN_0033f294(local_18,local_28,local_30);
  local_84 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = local_28;
    FUN_0033f024();
    local_84 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = local_30;
      FUN_0033f024();
      local_84 = (uint)uVar3;
    }
  }
  if ((local_84 & 1) != 0) {
    FUN_0034028c();
  }
  if (param_5 != (code *)0x0) {
    (*param_5)(local_18,local_20,local_28,local_30);
  }
  if ((local_84 & 1) != 0) {
    FUN_003402a0();
  }
  if ((uVar1 & 1) != 0) {
    DAT_028c9ee0 = 0;
    FUN_0033dbc4(0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

