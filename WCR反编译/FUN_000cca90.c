// FUN_000cca90 @ 000cca90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_000cca90(undefined8 param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5,
            undefined8 param_6,double *param_7,double *param_8,double *param_9,undefined8 *param_10)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double local_200;
  double local_1d8;
  double local_1c0;
  long local_70;
  ulong local_68;
  undefined8 local_60;
  double dStack_58;
  undefined8 local_50;
  double dStack_48;
  undefined8 local_40;
  double dStack_38;
  undefined8 local_30;
  double dStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  dStack_58 = param_2;
  local_50 = param_3;
  dStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_6);
  uVar3 = local_60;
  dVar4 = dStack_58;
  uVar5 = local_50;
  dVar6 = dStack_48;
  FUN_000cc12c(local_68);
  uVar1 = local_68;
  local_40 = uVar3;
  dStack_38 = dVar4;
  local_30 = uVar5;
  dStack_28 = dVar6;
  FUN_000ce114();
  if ((uVar1 & 1) == 0) {
    lVar2 = local_70;
    FUN_000ce36c();
    local_1c0 = (double)lVar2;
  }
  else {
    local_1c0 = 0.0;
  }
  uVar1 = local_68;
  FUN_000ce114();
  if ((uVar1 & 1) == 0) {
    lVar2 = local_70;
    FUN_000ce9a4();
    local_1d8 = (double)lVar2;
  }
  else {
    local_1d8 = 0.0;
  }
  FUN_000cefdc(local_1c0,local_40,dStack_38,local_30,dStack_28);
  FUN_000cf0e4(local_1d8,local_40,dStack_38,local_30,dStack_28,local_1c0);
  if (param_7 != (double *)0x0) {
    *param_7 = local_1c0;
  }
  if (param_8 != (double *)0x0) {
    *param_8 = local_1d8;
  }
  if (param_9 != (double *)0x0) {
    *param_9 = local_1c0 + local_1d8;
  }
  if (param_10 != (undefined8 *)0x0) {
    param_10[1] = dStack_38;
    *param_10 = local_40;
    param_10[3] = dStack_28;
    param_10[2] = local_30;
  }
  if (0.0 < local_1c0) {
    dStack_38 = dStack_38 + local_1c0;
  }
  else if (local_1d8 <= 0.0) goto LAB_000cce04;
  local_200 = (dStack_28 - local_1c0) - local_1d8;
  if (local_200 <= 1.0) {
    local_200 = 1.0;
  }
  dStack_28 = local_200;
LAB_000cce04:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  return local_40;
}

