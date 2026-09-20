// FUN_002a1490 @ 002a1490

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002a1490(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  double dVar4;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined **local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined **local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ulong local_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  byte local_f0;
  undefined **local_e8 [5];
  double local_c0;
  undefined4 local_b4;
  ulong local_90;
  ulong local_88 [3];
  ulong local_70;
  byte local_61;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_58 = 0;
  local_50 = param_5;
  uStack_48 = param_6;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_58,param_7);
  uVar1 = local_58;
  local_61 = param_9;
  local_60 = param_8;
  FUN_002ae960(local_58,&cf_MMTabBarItemView);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_58;
  local_70 = uVar1;
  FUN_002ae960(local_58,&cf_UITabBarButton);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_58;
  local_88[0] = uVar2;
  FUN_002adfd4();
  local_90 = uVar1;
  if ((uVar1 == 0) || (_CGRectIsEmpty(local_40,uStack_38,local_30,uStack_28), (uVar1 & 1) != 0)) {
    local_b4 = 1;
  }
  else {
    dVar4 = local_40;
    _CGRectGetWidth(local_40,uStack_38,local_30,uStack_28);
    uVar1 = local_58;
    local_c0 = (double)NEON_ucvtf(local_90);
    local_c0 = dVar4 / local_c0;
    ppuVar3 = &local_158;
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_002b3234;
    local_140 = &DAT_0257b968;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = uVar1;
    uStack_128 = uStack_38;
    local_130 = local_40;
    uStack_118 = uStack_28;
    local_120 = local_30;
    local_110 = local_c0;
    uStack_100 = uStack_48;
    local_108 = local_50;
    local_f0 = local_61 & 1;
    local_f8 = local_60;
    _objc_retainBlock();
    uVar1 = local_70;
    local_180 = PTR___NSConcreteGlobalBlock_02578658;
    local_178 = 0xd0800000;
    local_174 = 0;
    local_170 = FUN_002b38b4;
    local_168 = &DAT_0257b998;
    local_e8[0] = ppuVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_180);
    uVar1 = local_88[0];
    ppuVar3 = local_e8[0];
    local_1a8 = PTR___NSConcreteGlobalBlock_02578658;
    local_1a0 = 0xd0800000;
    local_19c = 0;
    local_198 = FUN_002b396c;
    local_190 = &DAT_0257b998;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_1a8);
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(local_e8,0);
    _objc_storeStrong(&local_138,0);
    local_b4 = 0;
  }
  _objc_storeStrong(local_88);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  return;
}

