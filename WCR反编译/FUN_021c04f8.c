// FUN_021c04f8 @ 021c04f8

/* WARNING: Removing unreachable block (ram,0x021c0970) */
/* WARNING: Removing unreachable block (ram,0x021c080c) */
/* WARNING: Removing unreachable block (ram,0x021c05b4) */
/* WARNING: Removing unreachable block (ram,0x021c0828) */
/* WARNING: Removing unreachable block (ram,0x021c098c) */

void FUN_021c04f8(double param_1,double param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 local_198;
  undefined8 local_190;
  uint local_174;
  uint local_154;
  uint local_114;
  ulong local_d8;
  char local_cb;
  char local_ca;
  undefined1 local_c9;
  undefined1 auStack_c8 [29];
  char local_ab;
  char local_aa;
  undefined1 local_a9;
  undefined1 auStack_a8 [24];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  long local_60;
  long local_58;
  undefined1 auStack_50 [24];
  
  local_78 = 0.0;
  local_90 = 0.0;
  plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  _swift_beginAccess(plVar4,auStack_50,0x20,0);
  lVar2 = *plVar4;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_50);
  local_58 = 0;
  local_60 = lVar2;
  if (lVar2 == 0) {
    plVar4 = &local_60;
    FUN_021c82dc();
    local_114 = 1;
  }
  else {
    FUN_021c830c(&local_60,&local_d8);
    lVar2 = local_58;
    if (local_58 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
      plVar4 = &local_60;
      FUN_021c8298();
      local_114 = 0;
    }
    else {
      __s8WCRefine22WCRSuperFloatPetPlayerCMa(0);
      uVar3 = local_d8;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_d8,lVar2);
      local_114 = (uint)uVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(local_d8);
      FUN_021c82dc(&local_60);
      plVar4 = (long *)(uVar3 & 0xffffffff);
    }
  }
  if (((local_114 & 1) == 0) && (FUN_021b61a8(), ((ulong)plVar4 & 1) == 0)) {
    local_70 = param_1;
    FUN_021c8058();
    plVar5 = plVar4;
    FUN_021c9b6c();
    puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
    __ss3absyxxSLRzs13SignedNumericRzlF
              (&local_68,&local_70,PTR___s12CoreGraphics7CGFloatVN_02578ba0,plVar4);
    local_78 = local_68;
    local_88 = param_2;
    __ss3absyxxSLRzs13SignedNumericRzlF(&local_80,&local_88,puVar1,plVar4,plVar5);
    local_90 = local_80;
    if (local_80 <= local_68 * 1.15) {
      if (param_1 < 0.0) {
        local_198 = 2;
      }
      else {
        local_198 = 3;
      }
      FUN_021b5b1c(local_198);
    }
    else {
      if (param_2 < 0.0) {
        plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
        _swift_beginAccess(plVar4,auStack_c8,0x20,0);
        if (*plVar4 == 0) {
          _swift_endAccess(auStack_c8);
          local_154 = 2;
        }
        else {
          lVar2 = *plVar4;
          (*(code *)PTR__objc_retain_02578638)(lVar2);
          local_154 = 0;
          _swift_endAccess();
          __s8WCRefine22WCRSuperFloatPetPlayerC9hasDragUpSbvg();
          (*(code *)PTR__objc_release_02578630)(lVar2);
          local_154 = local_154 & 1;
        }
        local_ca = (char)local_154;
        local_c9 = 1;
        if (local_ca != '\x02') {
          local_cb = local_ca;
        }
        if (local_ca != '\x02' && (local_154 & 1) == 1) {
          FUN_021b5b1c(4);
          return;
        }
      }
      if (0.0 < param_2) {
        plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
        _swift_beginAccess(plVar4,auStack_a8,0x20,0);
        if (*plVar4 == 0) {
          _swift_endAccess(auStack_a8);
          local_174 = 2;
        }
        else {
          lVar2 = *plVar4;
          (*(code *)PTR__objc_retain_02578638)(lVar2);
          local_174 = 0;
          _swift_endAccess();
          __s8WCRefine22WCRSuperFloatPetPlayerC11hasDragDownSbvg();
          (*(code *)PTR__objc_release_02578630)(lVar2);
          local_174 = local_174 & 1;
        }
        local_aa = (char)local_174;
        local_a9 = 1;
        if (local_aa != '\x02') {
          local_ab = local_aa;
        }
        if (local_aa != '\x02' && (local_174 & 1) == 1) {
          FUN_021b5b1c(5);
          return;
        }
      }
      if (param_1 < 0.0) {
        local_190 = 2;
      }
      else {
        local_190 = 3;
      }
      FUN_021b5b1c(local_190);
    }
  }
  return;
}

