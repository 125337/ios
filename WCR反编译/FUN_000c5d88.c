// FUN_000c5d88 @ 000c5d88

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_000c5d88(double param_1,undefined8 param_2,undefined8 param_3,double param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double local_190;
  double local_180;
  double local_178;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  double local_38;
  undefined8 uStack_30;
  byte local_21;
  
  local_50 = 0;
  local_48 = param_6;
  local_40 = param_5;
  local_38 = param_1;
  uStack_30 = param_2;
  _objc_storeStrong(&local_50,param_7);
  uVar1 = local_40;
  local_180 = local_38;
  (*DAT_028c8208)(local_38,uStack_30,local_40,local_48,local_50);
  FUN_000cb95c(local_40);
  local_190 = local_180;
  FUN_000cba84(local_40);
  if ((uVar1 & 1) == 0) {
    dVar2 = local_180;
    if ((0.5 < local_180) || (dVar2 = local_190, 0.5 < local_190)) {
      dVar3 = 0.5;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_21 = (byte)uVar1;
      local_178 = local_180;
      if (local_180 <= 0.0) {
        local_178 = 0.0;
      }
      if (local_180 <= 0.0) {
        local_180 = 0.0;
      }
      if (local_190 <= 0.0) {
        local_190 = 0.0;
      }
      _CGRectContainsPoint
                (dVar2,dVar3 - local_178,param_3,param_4 + local_180 + local_190,local_38,uStack_30)
      ;
      local_21 = local_21 & 1;
    }
    else {
      local_21 = 0;
    }
  }
  else {
    local_21 = 1;
  }
  _objc_storeStrong(&local_50,0);
  return local_21 & 1;
}

