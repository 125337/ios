// FUN_0007cc50 @ 0007cc50

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_0007cc50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 ulong param_9)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double local_210;
  bool local_21;
  
  FUN_0007e6b8(param_1,param_2,param_3,param_4);
  if (((param_9 & 1) == 0) || (FUN_0007e6b8(param_5,param_6,param_7,param_8), (param_9 & 1) == 0)) {
    local_21 = false;
  }
  else {
    FUN_0007e710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((param_9 & 1) == 0) {
      dVar1 = param_1;
      uVar2 = param_2;
      uVar3 = param_3;
      uVar4 = param_4;
      _CGRectIntersection();
      FUN_0007e6b8(dVar1,uVar2,uVar3,uVar4);
      if ((param_9 & 1) == 0) {
        local_21 = false;
      }
      else {
        FUN_0007e914(param_1,param_2,param_3,param_4);
        FUN_0007e914(param_5,param_6,param_7,param_8);
        local_210 = param_5;
        if (param_1 < param_5) {
          local_210 = param_1;
        }
        if (1.0 < local_210) {
          FUN_0007e914(dVar1,uVar2,uVar3,uVar4);
          local_21 = DAT_02323cc8 <= dVar1 / local_210;
        }
        else {
          local_21 = false;
        }
      }
    }
    else {
      local_21 = true;
    }
  }
  return local_21;
}

