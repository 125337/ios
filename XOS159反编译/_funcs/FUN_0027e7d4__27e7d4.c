// FUN_0027e7d4 @0x27e7d4


void FUN_0027e7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5

                 )



{

  long lVar1;

  undefined4 uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined1 auVar10 [16];

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined8 uStack_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  undefined8 uStack_d0;

  undefined8 uStack_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 uStack_b0;

  undefined8 uStack_a8;

  

  uVar9 = param_2;

  FUN_00297e40();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a540();

  lVar4 = _objc_retainAutoreleasedReturnValue();

  lVar1 = lVar3;

  if (lVar4 != 0) {

    lVar1 = lVar4;

  }

  _objc_retain(lVar1);

  _objc_release(lVar4);

  if ((param_4 & 1) == 0) {

    uVar5 = FUN_0029a100(lVar1);

    if (lVar1 == 0) {

      uStack_b8 = 0;

      local_c0 = 0;

      uStack_a8 = 0;

      uStack_b0 = 0;

      uStack_d8 = 0;

      local_e0 = 0;

      uStack_c8 = 0;

      uStack_d0 = 0;

      uStack_f8 = 0;

      local_100 = 0;

      uStack_e8 = 0;

      uStack_f0 = 0;

      uStack_118 = 0;

      local_120 = 0;

      uStack_108 = 0;

      uStack_110 = 0;

    }

    else {

      FUN_002a56a0(&local_120,lVar1);

    }

    uVar6 = FUN_00299860(lVar1);

    _CATransform3DMakeScale(&local_1a0,0x3fbeb851eb851eb8,0x3fbeb851eb851eb8,0x3ff0000000000000);

    uVar7 = uVar9;

    uVar9 = param_2;

    uVar8 = param_1;

  }

  else {

    uVar8 = FUN_0029a100(lVar3);

    _CATransform3DMakeScale(&local_120,0x3fc70a3d70a3d70a,0x3fc70a3d70a3d70a,0x3ff0000000000000);

    uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x48);

    local_160 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x40);

    uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x58);

    uStack_150 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x50);

    uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x68);

    local_140 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x60);

    uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x78);

    uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x70);

    uStack_198 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 8);

    local_1a0 = *(undefined8 *)PTR__CATransform3DIdentity_00388580;

    uStack_188 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x18);

    uStack_190 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x10);

    uStack_178 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x28);

    local_180 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x20);

    uStack_168 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x38);

    uStack_170 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x30);

    uVar6 = 0;

    uVar5 = param_1;

    uVar7 = param_2;

  }

  if ((param_5 & 1) == 0) {

    FUN_002a07e0(uVar8,uVar9,lVar3);

    uStack_1d8 = uStack_158;

    local_1e0 = local_160;

    uStack_1c8 = uStack_148;

    uStack_1d0 = uStack_150;

    uStack_1b8 = uStack_138;

    local_1c0 = local_140;

    uStack_1a8 = uStack_128;

    uStack_1b0 = uStack_130;

    uStack_218 = uStack_198;

    local_220 = local_1a0;

    uStack_208 = uStack_188;

    uStack_210 = uStack_190;

    uStack_1f8 = uStack_178;

    local_200 = local_180;

    uStack_1e8 = uStack_168;

    uStack_1f0 = uStack_170;

    FUN_002a21c0(lVar3,extraout_x1,&local_220);

    FUN_002a60e0(uVar5,uVar7,&_OBJC_CLASS___NSValue);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a60e0(uVar8,uVar9,&_OBJC_CLASS___NSValue);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar9 = 0;

    if (param_4 == 0) {

      uVar9 = 2;

    }

    FUN_0027f8d8(0,lVar3,&cf_position,uVar5,uVar7,uVar9);

    _objc_release(uVar7);

    _objc_release(uVar5);

    uStack_1d8 = uStack_d8;

    local_1e0 = local_e0;

    uStack_1c8 = uStack_c8;

    uStack_1d0 = uStack_d0;

    uStack_1b8 = uStack_b8;

    local_1c0 = local_c0;

    uStack_1a8 = uStack_a8;

    uStack_1b0 = uStack_b0;

    uStack_218 = uStack_118;

    local_220 = local_120;

    uStack_208 = uStack_108;

    uStack_210 = uStack_110;

    uStack_1f8 = uStack_f8;

    local_200 = local_100;

    uStack_1e8 = uStack_e8;

    uStack_1f0 = uStack_f0;

    FUN_002a60a0(&_OBJC_CLASS___NSValue,extraout_x1_00,&local_220);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uStack_1d8 = uStack_158;

    local_1e0 = local_160;

    uStack_1c8 = uStack_148;

    uStack_1d0 = uStack_150;

    uStack_1b8 = uStack_138;

    local_1c0 = local_140;

    uStack_1a8 = uStack_128;

    uStack_1b0 = uStack_130;

    uStack_218 = uStack_198;

    local_220 = local_1a0;

    uStack_208 = uStack_188;

    uStack_210 = uStack_190;

    uStack_1f8 = uStack_178;

    local_200 = local_180;

    uStack_1e8 = uStack_168;

    uStack_1f0 = uStack_170;

    FUN_002a60a0(&_OBJC_CLASS___NSValue,auVar10._8_8_,&local_220);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0027f8d8(0,lVar3,&cf_transform,auVar10._0_8_,uVar5,uVar9);

    _objc_release(uVar5);

    _objc_release(auVar10._0_8_);

  }

  uVar2 = 0x3f800000;

  if (param_4 == 0) {

    uVar2 = 0;

  }

  uVar9 = 0x3fc70a3d70a3d70a;

  if (param_4 == 0) {

    uVar9 = 0x3fc47ae147ae147b;

  }

  FUN_002a0400(uVar2,lVar3);

  FUN_002993c0(uVar6,&_OBJC_CLASS___NSNumber);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00299860(lVar3);

  FUN_002993c0(&_OBJC_CLASS___NSNumber);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  uVar5 = 0x3fc3333333333333;

  if (param_5 == 0) {

    uVar5 = uVar9;

  }

  FUN_0026fc38(uVar5,0,lVar3,uVar6,uVar7);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(lVar1);

  _objc_release(lVar3);

  return;

}




