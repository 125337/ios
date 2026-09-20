// FUN_000c59e8 @ 000c59e8

void FUN_000c59e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_270;
  undefined4 local_268;
  undefined4 local_264;
  code *local_260;
  undefined *local_258;
  ulong local_250;
  undefined8 local_248;
  double local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined4 local_218;
  undefined4 local_214;
  code *local_210;
  undefined *local_208;
  ulong local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  ulong local_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uStack_98 = uStack_38;
    local_a0 = local_40;
    uStack_88 = uStack_28;
    local_90 = local_30;
    dVar4 = local_40;
    uVar5 = uStack_38;
    uVar6 = local_30;
    uVar7 = uStack_28;
    FUN_000c9e00(local_48);
    local_80 = dVar4;
    uStack_78 = uVar5;
    local_70 = uVar6;
    uStack_68 = uVar7;
    FUN_000c9f94(0,local_48);
    local_f0 = PTR___NSConcreteGlobalBlock_02578658;
    local_e8 = 0xd0800000;
    local_e4 = 0;
    local_e0 = FUN_000ca1d0;
    local_d8 = &DAT_02579f70;
    local_d0 = local_48;
    local_c8 = local_50;
    uStack_b8 = uStack_78;
    local_c0 = local_80;
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,&local_f0);
  }
  else {
    uStack_128 = uStack_38;
    local_130 = local_40;
    uStack_118 = uStack_28;
    local_120 = local_30;
    dVar4 = local_40;
    uVar5 = uStack_38;
    uVar6 = local_30;
    uVar7 = uStack_28;
    FUN_000c9e00(local_48);
    local_138 = 0.0;
    local_140 = 0.0;
    local_180 = dVar4;
    uStack_178 = uVar5;
    local_170 = uVar6;
    uStack_168 = uVar7;
    local_110 = dVar4;
    uStack_108 = uVar5;
    local_100 = uVar6;
    uStack_f8 = uVar7;
    FUN_000ca230(local_48,&local_138,&local_140);
    local_160 = dVar4;
    uStack_158 = uVar5;
    local_150 = uVar6;
    uStack_148 = uVar7;
    FUN_000ca428(local_48);
    uVar3 = local_48;
    local_188 = dVar4;
    FUN_000ca528();
    local_190 = dVar4;
    if ((ABS(local_138 - local_188) < 0.25) && (ABS(local_140 - dVar4) < 0.25)) {
      uStack_1a8 = uStack_38;
      local_1b0 = local_40;
      uStack_198 = uStack_28;
      local_1a0 = local_30;
      uStack_1c8 = uStack_158;
      local_1d0 = local_160;
      uStack_1b8 = uStack_148;
      local_1c0 = local_150;
      FUN_000ca628(local_40,uStack_38,local_30,uStack_28,local_160,uStack_158,local_150,uStack_148);
      if ((uVar3 & 1) != 0) {
        local_220 = PTR___NSConcreteGlobalBlock_02578658;
        local_218 = 0xd0800000;
        local_214 = 0;
        local_210 = FUN_000ca6e8;
        local_208 = &DAT_02579f70;
        local_200 = local_48;
        local_1f8 = local_50;
        uStack_1e8 = uStack_38;
        local_1f0 = local_40;
        uStack_1d8 = uStack_28;
        local_1e0 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,
                   &local_220);
        return;
      }
    }
    FUN_000c9f94(local_138,local_140,local_48);
    local_270 = PTR___NSConcreteGlobalBlock_02578658;
    local_268 = 0xd0800000;
    local_264 = 0;
    local_260 = FUN_000ca748;
    local_258 = &DAT_02579f70;
    local_250 = local_48;
    local_248 = local_50;
    uStack_238 = uStack_158;
    local_240 = local_160;
    uStack_228 = uStack_148;
    local_230 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,&local_270)
    ;
  }
  return;
}

