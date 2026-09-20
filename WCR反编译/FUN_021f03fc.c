// FUN_021f03fc @ 021f03fc

/* WARNING: Type propagation algorithm not settling */

void FUN_021f03fc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  long local_1e0;
  long local_1d8;
  undefined8 local_188;
  double local_c8 [2];
  undefined1 auStack_b8 [8];
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  long local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_80 = 0;
  dVar3 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222060(param_5,local_188);
  dVar4 = param_1;
  local_78 = dVar3;
  local_70 = param_2;
  local_68 = param_1;
  local_60 = param_4;
  local_58 = dVar3;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  FUN_02222dc0(param_5,local_188);
  (*(code *)PTR__objc_release_02578630)(param_5);
  lVar1 = param_5;
  FUN_02223ac0(param_5,local_188,0x77636963);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_2 = 0x3fe0000000000000;
    dVar3 = param_1 * 0.5;
    dVar4 = dVar3;
    FUN_022220c0(lVar1,local_188);
    FUN_02222e40(lVar1,local_188);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  FUN_02223ac0(param_5,local_188,0x7763746c);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    local_1e0 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_opt_self(PTR__OBJC_CLASS___UILabel_026cdfb8);
    local_1d8 = param_5;
    _swift_dynamicCastObjCClass(param_5,puVar2);
    if (local_1d8 == 0) {
      (*(code *)PTR__objc_release_02578630)(param_5);
      local_1d8 = 0;
    }
    local_1e0 = local_1d8;
  }
  if (local_1e0 != 0) {
    local_80 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222060(local_1e0,local_188);
    lVar1 = local_1e0;
    local_a8 = dVar3;
    local_a0 = param_2;
    local_98 = dVar4;
    local_90 = param_4;
    (*(code *)PTR__objc_release_02578630)();
    FUN_021b0958(dVar3,param_2);
    local_c8[1] = 0.0;
    local_c8[0] = param_1 - 4.0;
    local_b0 = dVar3;
    FUN_021c8058();
    puVar2 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
    __ss3maxyxx_xtSLRzlF(local_c8 + 1,local_c8);
    __ss3minyxx_xtSLRzlF(&local_88,&local_b0,auStack_b8,puVar2,lVar1);
    (*(code *)PTR__objc_retain_02578638)(local_1e0);
    uVar5 = 0x3fe0000000000000;
    dVar3 = (param_1 - local_88) * 0.5;
    FUN_02222440(local_1e0,local_188);
    FUN_022230c0(local_1e0,local_188);
    (*(code *)PTR__objc_release_02578630)(local_1e0);
    (*(code *)PTR__objc_retain_02578638)(local_1e0);
    FUN_02222440(local_1e0,local_188);
    FUN_022230c0(dVar3,uVar5,local_88,param_4,local_1e0,local_188);
    (*(code *)PTR__objc_release_02578630)(local_1e0);
    (*(code *)PTR__objc_release_02578630)(local_1e0);
  }
  return;
}

