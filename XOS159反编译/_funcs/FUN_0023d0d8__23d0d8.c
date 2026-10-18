// FUN_0023d0d8 @0x23d0d8


void FUN_0023d0d8(long param_1,uint param_2,uint param_3)



{

  ulong uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined *local_188;

  undefined8 local_180;

  code *local_178;

  undefined *puStack_170;

  long local_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  undefined8 local_d0;

  undefined8 uStack_c8;

  undefined8 uStack_c0;

  undefined8 uStack_b8;

  undefined8 local_b0;

  undefined8 uStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 uStack_90;

  undefined8 uStack_88;

  undefined8 local_80;

  undefined8 uStack_78;

  

  _objc_retain();

  if (param_1 != 0) {

    if (param_2 == 0) {

      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

      local_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

      local_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

    }

    else {

      _CGAffineTransformMakeRotation(&local_a0,0x3fe921fb54432708);

    }

    FUN_002a56a0(&local_d0,param_1);

    uStack_f8 = uStack_98;

    local_100 = local_a0;

    uStack_e8 = uStack_88;

    uStack_f0 = uStack_90;

    uStack_d8 = uStack_78;

    local_e0 = local_80;

    uVar1 = _CGAffineTransformEqualToTransform(&local_d0,&local_100);

    if ((uVar1 & 1) == 0) {

      if (param_2 == 0) {

        uVar3 = 0x3fe199999999999a;

      }

      else {

        _CGAffineTransformMakeScale(&local_130,0x3fec28f5c28f5c29,0x3fec28f5c28f5c29);

        uStack_c8 = uStack_128;

        local_d0 = local_130;

        uStack_b8 = uStack_118;

        uStack_c0 = uStack_120;

        uStack_a8 = uStack_108;

        local_b0 = local_110;

        FUN_002a21c0(param_1,extraout_x1,&local_d0);

        uVar3 = 0x3fe6666666666666;

      }

      uVar2 = 0x3fd3333333333333;

      if (param_3 == 0) {

        uVar2 = 0x3fd5c28f5c28f5c3;

      }

      if (param_2 == 0) {

        uVar2 = 0x3fd1eb851eb851ec;

      }

      uVar4 = 0x3fe6666666666666;

      if ((param_2 & (param_3 ^ 1)) == 0) {

        uVar4 = 0x3fe70a3d70a3d70a;

      }

      local_188 = PTR___NSConcreteStackBlock_003886f0;

      local_180 = 0xc2000000;

      local_178 = FUN_00244dd8;

      puStack_170 = &DAT_0038f780;

      _objc_retain(param_1);

      uStack_158 = uStack_98;

      local_160 = local_a0;

      uStack_148 = uStack_88;

      uStack_150 = uStack_90;

      uStack_138 = uStack_78;

      local_140 = local_80;

      local_168 = param_1;

      FUN_00291800(uVar2,0,uVar4,uVar3,&_OBJC_CLASS___UIView,extraout_x1_00,6,&local_188,0);

      _objc_release(local_168);

    }

  }

  _objc_release(param_1);

  return;

}




