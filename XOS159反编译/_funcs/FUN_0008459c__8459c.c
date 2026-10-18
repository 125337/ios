// FUN_0008459c @0x8459c


ulong FUN_0008459c(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 local_60;

  undefined8 uStack_58;

  undefined8 local_50;

  undefined8 uStack_48;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      FUN_000843d8(param_1);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 == 0) {

        uVar3 = 0;

      }

      else {

        FUN_000822c8(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 == 0) {

LAB_000846a4:

          uVar3 = 0;

        }

        else {

          FUN_002a4880(lVar5);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          uVar3 = 0;

          if (lVar6 != 0) {

            iVar1 = FUN_0008471c(lVar5);

            if (iVar1 == 0) goto LAB_000846a4;

            FUN_00295600(lVar5);

            uStack_58 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

            local_60 = *(undefined8 *)PTR__CGRectZero_00388bf0;

            uStack_48 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18);

            local_50 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

            uVar3 = FUN_00083fa4(lVar5,&local_60);

            if ((uVar3 & 1) != 0) {

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

              FUN_0029e5e0(local_60,uStack_58,local_50,uStack_48,lVar5);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

            }

          }

        }

        _objc_release(lVar5);

      }

      _objc_release(lVar4);

      goto LAB_000846b8;

    }

  }

  uVar3 = 0;

LAB_000846b8:

  _objc_release(param_1);

  return uVar3;

}




