// FUN_0220cb10 @ 0220cb10

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0220cb10(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double local_b0 [3];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  double local_58;
  
  local_98 = 0.0;
  local_60 = 0;
  dVar2 = param_1;
  local_70 = param_5;
  FUN_021b0958();
  dVar3 = param_1;
  local_80 = dVar2;
  FUN_021b0994(param_1,param_2,param_3,param_4);
  local_88 = dVar3;
  FUN_021c8058();
  puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3minyxx_xtSLRzlF(&local_78,&local_80,&local_88);
  local_90 = local_78 * 0.5;
  __ss3minyxx_xtSLRzlF(&local_70,&local_90,puVar1,param_6);
  __ss3maxyxx_xtSLRzlF(&local_58,&local_60,auStack_68,puVar1,param_6);
  local_98 = local_58;
  local_b0[1] = 1.0;
  dVar2 = param_1;
  FUN_021b0958(param_1,param_2,param_3,param_4);
  FUN_021b0994(param_1,param_2,param_3,param_4);
  local_b0[0] = ((dVar2 + param_1) - local_58 * 4.0) * 2.0 + DAT_02324200 * local_58;
  __ss3maxyxx_xtSLRzlF(local_b0 + 2,local_b0 + 1,local_b0,puVar1,param_6);
  return local_b0[2];
}

