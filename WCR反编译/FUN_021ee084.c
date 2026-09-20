// FUN_021ee084 @ 021ee084

/* WARNING: Type propagation algorithm not settling */

double FUN_021ee084(double param_1,double param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  double local_100;
  double local_d0 [2];
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  double local_b0 [3];
  undefined1 auStack_98 [24];
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  double local_48;
  
  local_78 = 0.0;
  if (((param_1 <= param_2) || (param_1 <= 0.0)) || (param_2 <= 0.0)) {
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
    puVar3 = auStack_60;
    _swift_beginAccess(puVar1,puVar3,0x20,0);
    uVar4 = *puVar1;
    _swift_endAccess(puVar3);
    local_70 = 0x3ff0000000000000;
    local_68 = uVar4;
    FUN_021c8058();
    __ss3maxyxx_xtSLRzlF
              (&local_48,&local_68,&local_70,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar3);
    local_100 = local_48;
  }
  else {
    local_78 = param_1 * 4.0 * param_1 * param_2 * param_2 - param_2 * param_2 * param_2 * param_2;
    if (local_78 <= 0.0) {
      puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
      puVar3 = auStack_98;
      _swift_beginAccess(puVar1,puVar3,0x20,0);
      uVar4 = *puVar1;
      _swift_endAccess(puVar3);
      local_b0[1] = 1.0;
      local_b0[2] = (double)uVar4;
      FUN_021c8058();
      __ss3maxyxx_xtSLRzlF
                (&local_80,local_b0 + 2,local_b0 + 1,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar3
                );
      local_100 = local_80;
    }
    else {
      local_b8 = 0x3ff0000000000000;
      local_d0[1] = -1.0;
      local_d0[0] = SQRT(local_78) / (param_1 * 2.0 * param_1);
      FUN_021c8058();
      puVar2 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
      __ss3maxyxx_xtSLRzlF(local_d0 + 1,local_d0);
      __ss3minyxx_xtSLRzlF(local_b0,&local_b8,auStack_c0,puVar2,param_3);
      _asin();
      local_100 = param_1 * 2.0 * local_b0[0];
    }
  }
  return local_100;
}

