// FUN_021b0724 @ 021b0724

double FUN_021b0724(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 local_118;
  double local_f0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined1 auStack_60 [8];
  undefined1 local_58 [8];
  double local_50;
  double local_48;
  double local_40;
  
  local_40 = 0.0;
  local_48 = 0.0;
  local_50 = 0.0;
  dVar4 = param_1;
  FUN_021b0588();
  dVar3 = dVar4;
  local_40 = dVar4;
  FUN_021b0678();
  uVar2 = (ulong)param_5;
  local_48 = dVar3;
  if ((param_5 & 1) == 0) {
    local_f0 = 0.0;
  }
  else {
    local_f0 = dVar3;
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_118);
    uVar2 = unaff_x20;
    (*(code *)PTR__objc_release_02578630)();
    FUN_021b0958(local_f0,param_2,param_3);
    local_f0 = local_f0 - dVar4;
  }
  local_50 = local_f0;
  uVar6 = 0x3fe0000000000000;
  dVar5 = dVar3 * 0.5;
  local_68 = param_1 - dVar5;
  dVar4 = 8.0;
  local_70 = 0x4020000000000000;
  FUN_021c8058();
  puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3maxyxx_xtSLRzlF(&local_68,&local_70);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222060(unaff_x20,local_118);
  local_90 = dVar4;
  local_88 = dVar5;
  local_80 = uVar6;
  local_78 = param_4;
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021b0994(dVar4,dVar5,uVar6,param_4);
  local_98 = (dVar4 - dVar3) - 8.0;
  __ss3minyxx_xtSLRzlF(local_58,auStack_60,&local_98,puVar1,uVar2);
  return local_f0;
}

