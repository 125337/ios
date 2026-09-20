// FUN_000c6098 @ 000c6098

void FUN_000c6098(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_328;
  undefined4 local_320;
  undefined4 local_31c;
  code *local_318;
  undefined *local_310;
  ulong local_308;
  undefined8 local_300;
  double local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  double local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  double local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_208;
  double local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ulong local_138;
  undefined8 local_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b4;
  double local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  ulong local_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  FUN_000cb95c(param_5);
  local_58 = param_1;
  FUN_000cba84(local_48);
  dVar4 = local_58 + param_1;
  local_68 = dVar4;
  local_60 = param_1;
  FUN_000cbbac(local_48);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_70 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_repeatChatSinkEnabled_0269e7f0);
  if (((((ulong)puVar1 & 1) == 0) &&
      (puVar1 = local_78,
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_repeatChatLiftEnabled_0269e7f8),
      ((ulong)puVar1 & 1) == 0)) && (local_68 <= 0.0)) {
    FUN_000cbce4(local_48);
    uStack_a8 = uStack_38;
    local_b0 = local_40;
    uStack_98 = uStack_28;
    local_a0 = local_30;
    (*DAT_028c8210)(local_40,uStack_38,local_30,uStack_28,local_48,local_50);
    local_b4 = 1;
    goto LAB_000c665c;
  }
  uVar2 = local_48;
  FUN_000cbd54();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  if (uVar2 == 0) {
    if (local_68 <= 0.0) {
      FUN_000cbce4(local_48);
      uStack_178 = uStack_38;
      local_180 = local_40;
      uStack_168 = uStack_28;
      local_170 = local_30;
      (*DAT_028c8210)(local_40,uStack_38,local_30,uStack_28,local_48,local_50);
    }
    else {
      uStack_f8 = uStack_38;
      local_100 = local_40;
      uStack_e8 = uStack_28;
      local_f0 = local_30;
      dVar4 = local_40;
      uVar5 = uStack_38;
      uVar6 = local_30;
      uVar7 = uStack_28;
      FUN_000cc12c(local_48);
      local_e0 = dVar4;
      uStack_d8 = uVar5;
      local_d0 = uVar6;
      uStack_c8 = uVar7;
      FUN_000cc550(local_48);
      FUN_000cbce4(local_48);
      local_158 = PTR___NSConcreteGlobalBlock_02578658;
      local_150 = 0xd0800000;
      local_14c = 0;
      local_148 = FUN_000cc63c;
      local_140 = &DAT_02579f90;
      local_138 = local_48;
      local_130 = local_50;
      uStack_120 = uStack_d8;
      local_128 = local_e0;
      uStack_110 = uStack_c8;
      local_118 = local_d0;
      local_108 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,
                 &local_158);
    }
    local_b4 = 1;
  }
  else {
    local_188 = 0;
    local_190 = 0;
    local_198 = 0.0;
    uStack_1b8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_1c0 = *(undefined8 *)PTR__CGRectZero_025782f0;
    uStack_1a8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_1b0 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    uStack_1f8 = uStack_38;
    local_200 = local_40;
    uStack_1e8 = uStack_28;
    local_1f0 = local_30;
    uVar3 = local_48;
    dVar4 = local_40;
    uVar5 = uStack_38;
    uVar6 = local_30;
    uVar7 = uStack_28;
    FUN_000cca90(local_48,uVar2,&local_188,&local_190,&local_198,&local_1c0);
    local_208 = local_198 - local_70;
    local_1e0 = dVar4;
    uStack_1d8 = uVar5;
    local_1d0 = uVar6;
    uStack_1c8 = uVar7;
    if (ABS(local_208) < 0.5) {
      uStack_228 = uStack_38;
      local_230 = local_40;
      uStack_218 = uStack_28;
      local_220 = local_30;
      local_250 = dVar4;
      uStack_248 = uVar5;
      local_240 = uVar6;
      uStack_238 = uVar7;
      FUN_000ca628(local_40,uStack_38,local_30,uStack_28,dVar4,uVar5,uVar6,uVar7);
      if ((uVar3 & 1) != 0) {
        uStack_268 = uStack_38;
        local_270 = local_40;
        uStack_258 = uStack_28;
        local_260 = local_30;
        (*DAT_028c8210)(local_40,uStack_38,local_30,uStack_28,local_48,local_50);
        uStack_288 = uStack_1b8;
        local_290 = local_1c0;
        uStack_278 = uStack_1a8;
        local_280 = local_1b0;
        FUN_000cce48(local_1c0,uStack_1b8,local_1b0,uStack_1a8,local_188,local_190,local_48,local_c0
                    );
        FUN_000ccf6c(local_48);
        local_b4 = 1;
        goto LAB_000c664c;
      }
    }
    uStack_2a8 = uStack_1b8;
    local_2b0 = local_1c0;
    uStack_298 = uStack_1a8;
    local_2a0 = local_1b0;
    uStack_2c8 = uStack_1d8;
    local_2d0 = local_1e0;
    uStack_2b8 = uStack_1c8;
    local_2c0 = local_1d0;
    FUN_000cd328(local_188,local_190,local_198,local_1c0,uStack_1b8,local_1b0,uStack_1a8,local_48);
    local_328 = PTR___NSConcreteGlobalBlock_02578658;
    local_320 = 0xd0800000;
    local_31c = 0;
    local_318 = FUN_000cd844;
    local_310 = &DAT_02579f90;
    local_308 = local_48;
    local_300 = local_50;
    uStack_2f0 = uStack_1d8;
    local_2f8 = local_1e0;
    uStack_2e0 = uStack_1c8;
    local_2e8 = local_1d0;
    local_2d8 = local_208;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,&local_328)
    ;
    FUN_000cce48(local_1c0,uStack_1b8,local_1b0,uStack_1a8,local_188,local_190,local_48,local_c0);
    local_b4 = 0;
  }
LAB_000c664c:
  _objc_storeStrong(&local_c0,0);
LAB_000c665c:
  _objc_storeStrong(&local_78,0);
  return;
}

