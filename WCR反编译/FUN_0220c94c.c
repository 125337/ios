// FUN_0220c94c @ 0220c94c

void FUN_0220c94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,undefined8 param_7)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  double dStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  dStack_78 = 0.0;
  local_80 = 0.0;
  uStack_68 = 0;
  local_70 = 0;
  dVar2 = param_6;
  dVar5 = param_6;
  FUN_021b4eac();
  local_90 = 0;
  local_a0 = param_5 - param_6;
  dVar3 = dVar2;
  local_80 = dVar2;
  dStack_78 = dVar5;
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_021b0958();
  dVar4 = dVar2;
  local_b0 = dVar3;
  FUN_021b0994(dVar2,dVar5,param_1,param_2);
  local_b8 = dVar4;
  FUN_021c8058();
  puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3minyxx_xtSLRzlF(&local_a8,&local_b0,&local_b8);
  local_c0 = local_a8 * 0.5;
  __ss3minyxx_xtSLRzlF(&local_a0,&local_c0,puVar1,param_7);
  __ss3maxyxx_xtSLRzlF(&local_88,&local_90,auStack_98,puVar1,param_7);
  FUN_021fcf18(0);
  FUN_0220d22c(dVar2,dVar5,param_1,param_2,local_88);
  return;
}

