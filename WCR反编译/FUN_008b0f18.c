// FUN_008b0f18 @ 008b0f18

void FUN_008b0f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,uint param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar3;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  FUN_008b4e10();
  if ((uVar1 & 1) != 0) {
    uVar3 = local_28;
    FUN_008c3378(local_28,local_30);
    if ((uVar3 & 1) != 0) {
      FUN_008c02b4();
    }
  }
  (*DAT_028cdfa0)(local_18,local_20,local_28,local_30,local_38,param_6 & 1,param_7 & 1,param_8);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

