// FUN_00244830 @0x244830


void FUN_00244830(long param_1,undefined8 param_2)



{

  long lVar1;

  undefined *puVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  ulong uVar9;

  undefined8 uVar10;

  double dVar11;

  double dVar12;

  undefined1 auVar13 [16];

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

  

  puVar2 = PTR__CGAffineTransformIdentity_00388998;

  if (0 < *(long *)(param_1 + 0x30)) {

    uVar9 = 0;

    do {

      FUN_002a62a0(*(undefined8 *)(param_1 + 0x20),param_2,&DAT_000023f0 + uVar9);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

      uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

      if ((uVar5 & 1) != 0) {

        uVar5 = *(ulong *)(param_1 + 0x38);

        dVar11 = 15.0;

        lVar1 = 0x40;

        if (uVar9 != uVar5) {

          lVar1 = 0x48;

          dVar11 = *(double *)(param_1 + 0x58) + 24.0 + 10.0;

        }

        dVar12 = *(double *)(param_1 + lVar1);

        FUN_0029e5e0(((double)uVar9 + 0.5) * *(double *)(param_1 + 0x50) - dVar12 * 0.5,

                     dVar11 - dVar12 * 0.5,dVar12,dVar12,uVar3);

        FUN_00297e40(uVar3);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        uVar10 = 0x4024000000000000;

        if (uVar9 != uVar5) {

          uVar10 = 0x3ff0000000000000;

        }

        FUN_002a2860(uVar10);

        _objc_release(uVar4);

        FUN_002a62a0(uVar3,extraout_x1,&DAT_0000239c);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar13._0_8_;

        FUN_002a62a0(uVar3,auVar13._8_8_,&DAT_0000239d);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UILabel);

        auVar13 = _objc_opt_isKindOfClass(uVar4,uVar6);

        if ((auVar13._0_8_ & 1) != 0) {

          uStack_c8 = *(undefined8 *)(puVar2 + 8);

          local_d0 = *(undefined8 *)puVar2;

          uStack_b8 = *(undefined8 *)(puVar2 + 0x18);

          uStack_c0 = *(undefined8 *)(puVar2 + 0x10);

          uStack_a8 = *(undefined8 *)(puVar2 + 0x28);

          local_b0 = *(undefined8 *)(puVar2 + 0x20);

          FUN_002a21c0(uVar4,auVar13._8_8_,&local_d0);

        }

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

        auVar13 = _objc_opt_isKindOfClass(uVar10,uVar6);

        if ((auVar13._0_8_ & 1) != 0) {

          uStack_c8 = *(undefined8 *)(puVar2 + 8);

          local_d0 = *(undefined8 *)puVar2;

          uStack_b8 = *(undefined8 *)(puVar2 + 0x18);

          uStack_c0 = *(undefined8 *)(puVar2 + 0x10);

          uStack_a8 = *(undefined8 *)(puVar2 + 0x28);

          local_b0 = *(undefined8 *)(puVar2 + 0x20);

          FUN_002a21c0(uVar10,auVar13._8_8_,&local_d0);

        }

        FUN_002392b4(uVar3,1);

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UILabel);

        uVar7 = _objc_opt_isKindOfClass(uVar4,uVar6);

        if (((uVar7 & 1) != 0) && (uVar7 = FUN_002978a0(uVar4), (uVar7 & 1) == 0)) {

          uVar6 = 0x3ff4000000000000;

          if (uVar9 != uVar5) {

            uVar6 = 0x3ff0000000000000;

          }

          _CGAffineTransformMakeScale(&local_100,uVar6,uVar6);

          uStack_c8 = uStack_f8;

          local_d0 = local_100;

          uStack_b8 = uStack_e8;

          uStack_c0 = uStack_f0;

          uStack_a8 = uStack_d8;

          local_b0 = local_e0;

          FUN_002a21c0(uVar4,extraout_x1_00,&local_d0);

          uVar8 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

          uVar5 = _objc_opt_isKindOfClass(uVar10,uVar8);

          if (((uVar5 & 1) != 0) && (uVar5 = FUN_002978a0(uVar10), (uVar5 & 1) == 0)) {

            _CGAffineTransformMakeScale(&local_130,uVar6,uVar6);

            uStack_c8 = uStack_128;

            local_d0 = local_130;

            uStack_b8 = uStack_118;

            uStack_c0 = uStack_120;

            uStack_a8 = uStack_108;

            local_b0 = local_110;

            FUN_002a21c0(uVar10,extraout_x1_01,&local_d0);

          }

        }

        _objc_release(uVar10);

        _objc_release(uVar4);

      }

      _objc_release(uVar3);

      uVar9 = uVar9 + 1;

      param_2 = extraout_x1_02;

    } while ((long)uVar9 < *(long *)(param_1 + 0x30));

    if ((0 < *(long *)(param_1 + 0x30)) && ((DAT_003eb428 & 1) == 0)) {

      uVar9 = 0;

      do {

        FUN_00244c70(*(undefined8 *)(param_1 + 0x20),uVar9);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar3 = auVar13._0_8_;

        if (uVar9 == *(ulong *)(param_1 + 0x38)) {

          FUN_0029e8a0(uVar3,auVar13._8_8_,1);

        }

        else {

          FUN_002a62a0(*(undefined8 *)(param_1 + 0x20),auVar13._8_8_,&DAT_000023f0 + uVar9);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          uVar10 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

          auVar13 = _objc_opt_isKindOfClass(uVar4,uVar10);

          if ((auVar13._0_8_ & 1) != 0) {

            FUN_0029e8a0(uVar3,auVar13._8_8_,0);

            dVar12 = *(double *)(param_1 + 0x50);

            FUN_00295600(uVar4);

            dVar11 = (double)_CGRectGetMaxY();

            FUN_0029e5e0(((double)uVar9 + 0.5) * dVar12 + *(double *)(param_1 + 0x50) * -0.5,

                         dVar11 + 2.0,*(double *)(param_1 + 0x50),0x402c000000000000,uVar3);

          }

          _objc_release(uVar4);

        }

        _objc_release(uVar3);

        uVar9 = uVar9 + 1;

      } while ((long)uVar9 < *(long *)(param_1 + 0x30));

    }

  }

  FUN_0029e5e0(*(double *)(param_1 + 0x50) * ((double)*(long *)(param_1 + 0x38) + 0.5) + -2.5,

               *(double *)(param_1 + 0x58) + 39.0,0x4014000000000000,0x4014000000000000,

               *(undefined8 *)(param_1 + 0x28));

  return;

}




