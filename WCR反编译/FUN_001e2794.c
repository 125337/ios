// FUN_001e2794 @ 001e2794

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_001e2794(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  ulong local_1b8;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_5;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_7);
  FUN_001e25f4(local_38,*(undefined8 *)(param_5 + 0x20));
  dVar1 = param_4;
  uVar4 = param_3;
  uVar5 = param_2;
  dVar6 = param_1;
  FUN_001e25f4(local_40,*(undefined8 *)(param_5 + 0x20));
  dVar2 = param_1;
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  dVar3 = dVar1;
  _CGRectGetMidY(dVar1,uVar4,uVar5,dVar6);
  if (ABS(dVar2 - dVar3) <= 6.0) {
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    _CGRectGetMinX(dVar1,uVar4,uVar5,dVar6);
    if (0.0 <= param_1 - dVar1) {
      local_1b8 = (ulong)(0.0 < param_1 - dVar1);
    }
    else {
      local_1b8 = 0xffffffffffffffff;
    }
    local_28 = local_1b8;
  }
  else {
    local_28 = 1;
    if (dVar2 - dVar3 < 0.0) {
      local_28 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

