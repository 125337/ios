// FUN_0019f818 @0x19f818


undefined8

FUN_0019f818(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

            long param_5)



{

  undefined *puVar1;

  undefined8 uVar2;

  int iVar3;

  uint uVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined1 auVar11 [16];

  undefined8 local_b8;

  undefined1 auStack_b0 [32];

  

  _objc_retain();

  if (param_5 != 0) {

    uVar5 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar6 = _objc_opt_isKindOfClass(param_5,uVar5);

    if ((uVar6 & 1) != 0) {

      _objc_retain(param_5);

      uVar6 = FUN_001a0234(param_5,auStack_b0);

      if (((uVar6 & 1) == 0) || (FUN_0018da3c(), DAT_003e95c8 != '\x01')) {

LAB_0019f984:

        uVar5 = 0;

      }

      else {

        uVar6 = _objc_opt_respondsToSelector(param_5,"viewModel");

        if ((uVar6 & 1) == 0) goto LAB_0019f984;

        auVar11 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

        if ((auVar11._0_8_ & 1) == 0) goto LAB_0019f984;

        FUN_00299c80(param_5,auVar11._8_8_,"viewModel");

        auVar11 = _objc_retainAutoreleasedReturnValue();

        lVar7 = auVar11._0_8_;

        FUN_00299c80(param_5,auVar11._8_8_,"getHeadImageView");

        lVar8 = _objc_retainAutoreleasedReturnValue();

        uVar5 = 0;

        if ((lVar7 != 0) && (lVar8 != 0)) {

          uVar6 = FUN_002978a0(lVar8);

          if ((uVar6 & 1) == 0) {

            FUN_002a4880(lVar8);

            lVar9 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            uVar5 = 0;

            if (lVar9 != 0) {

              iVar3 = FUN_00191434(lVar7);

              if (iVar3 == 0) goto LAB_0019f9c8;

              uVar6 = FUN_00191330(lVar7);

              uVar5 = FUN_00191d84(lVar7);

              FUN_001a029c(lVar7,uVar6,uVar5);

              uVar4 = FUN_001a07fc(lVar7);

              if ((uVar6 & 1) == 0) {

                uVar4 = (uint)uVar5 | uVar4 ^ 1;

              }

              else {

                uVar4 = 1;

              }

              FUN_001a0888(param_5,1);

              FUN_001a08f8(param_5);

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

              local_b8 = 0;

              iVar3 = FUN_001a0964(param_5,lVar8,uVar6,lVar7,&local_b8);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

              uVar2 = local_b8;

              puVar1 = PTR_LOOP_003e6eb0;

              if (iVar3 != 0) {

                FUN_002993a0(local_b8,&_OBJC_CLASS___NSNumber);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(param_5,puVar1,uVar10,1);

                _objc_release(uVar10);

                puVar1 = PTR_LOOP_003e6eb8;

                FUN_002993a0(uVar2,&_OBJC_CLASS___NSNumber);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(param_5,puVar1,uVar10,1);

                _objc_release(uVar10);

                uVar10 = FUN_00295600(lVar8);

                FUN_001a0c34(param_5,lVar7,uVar6,1,uVar5,uVar4);

                FUN_001a2190(uVar10,param_2,param_3,param_4,uVar2,param_5,uVar6,1,uVar5,uVar4);

                FUN_001a27bc(uVar10,param_2,param_3,param_4,param_5,lVar7,uVar6,1);

              }

              FUN_0019fbfc(param_5);

              FUN_001a0888(param_5,0);

              uVar5 = 1;

            }

          }

          else {

LAB_0019f9c8:

            uVar5 = 0;

          }

        }

        _objc_release(lVar8);

        _objc_release(lVar7);

      }

      _objc_release(param_5);

      goto LAB_0019f990;

    }

  }

  uVar5 = 0;

LAB_0019f990:

  _objc_release(param_5);

  return uVar5;

}




