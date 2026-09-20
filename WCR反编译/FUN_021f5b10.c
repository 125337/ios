// FUN_021f5b10 @ 021f5b10

/* WARNING: Type propagation algorithm not settling */

void FUN_021f5b10(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 local_f8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88 [2];
  double local_78;
  double local_70 [3];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_a0 = 0.0;
  local_98 = 0.0;
  uVar2 = param_4;
  dVar3 = param_1;
  dVar4 = param_2;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_4;
  local_28 = param_3;
  FUN_02223740();
  local_70[1] = 1.0;
  local_70[2] = dVar3;
  local_58 = dVar3;
  local_50 = dVar4;
  FUN_021c8058();
  puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3maxyxx_xtSLRzlF(&local_48,local_70 + 2,local_70 + 1);
  FUN_02223740(param_4,local_f8);
  local_90 = 0x3ff0000000000000;
  local_88[0] = dVar4;
  local_78 = dVar4;
  __ss3maxyxx_xtSLRzlF(local_70,local_88,&local_90,puVar1,uVar2);
  local_a0 = local_48;
  local_98 = local_70[0];
  local_b0 = param_1 / local_48;
  local_b8 = param_2 / local_70[0];
  __ss3minyxx_xtSLRzlF(&local_a8,&local_b0,&local_b8,puVar1,uVar2);
  FUN_02222380((param_1 - local_48 * local_a8) * 0.5,(param_2 - local_70[0] * local_a8) * 0.5,
               local_48 * local_a8,local_70[0] * local_a8,param_4,local_f8);
  return;
}

