// FUN_000c5788 @ 000c5788

undefined1  [16]
FUN_000c5788(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  double dVar3;
  double dVar4;
  double local_c8;
  double local_88 [3];
  double local_70;
  double dStack_68;
  double local_58;
  double dStack_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  local_48 = 0;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  dStack_28 = param_2;
  _objc_storeStrong(&local_48,param_5);
  dStack_68 = dStack_28;
  local_70 = local_30;
  dVar3 = local_30;
  dVar4 = dStack_28;
  (*DAT_028c81f0)(local_38,local_40,local_48);
  local_88[0] = 0.0;
  local_58 = dVar3;
  dStack_50 = dVar4;
  if (((dVar3 <= 1.0) || (uVar2 = local_48, FUN_000c9a18(local_48,local_88), (uVar2 & 1) == 0)) ||
     (local_58 <= local_88[0])) {
    dStack_18 = dStack_50;
    local_20 = local_58;
  }
  else {
    local_c8 = (double)(long)((dStack_50 * local_88[0]) / local_58);
    if (local_c8 <= 1.0) {
      local_c8 = 1.0;
    }
    dVar3 = local_88[0];
    FUN_000c9dd4();
    local_20 = dVar3;
    dStack_18 = local_c8;
  }
  _objc_storeStrong(&local_48,0);
  auVar1._8_8_ = dStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

