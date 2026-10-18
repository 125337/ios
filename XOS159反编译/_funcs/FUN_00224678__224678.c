// FUN_00224678 @0x224678


void FUN_00224678(undefined1 param_1 [16],double param_2,undefined8 param_3,undefined8 param_4,

                 long param_5)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  float fVar6;

  undefined8 uVar7;

  double dVar8;

  undefined1 auVar9 [16];

  

  _objc_retain();

  if (param_5 == 0) goto LAB_00224918;

  uVar1 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar2 = _objc_opt_isKindOfClass(param_5,uVar1);

  if ((uVar2 & 1) == 0) goto LAB_00224918;

  _objc_retain(param_5);

  uVar2 = FUN_002249d4(param_5);

  if ((uVar2 & 1) == 0) {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e7168);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 != 0) {

      FUN_00224a64(param_5);

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e7168,0,1);

    }

  }

  else {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e7168);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if ((lVar3 == 0) || (fVar6 = (float)FUN_00295480(lVar3), fVar6 <= 0.5)) {

      FUN_00224a64(param_5);

    }

    else {

      if (DAT_003eafa8 != -1) {

        FUN_0028fb44();

      }

      if (DAT_003eafa0 == 0) {

        lVar4 = 0;

LAB_00224890:

        uVar2 = FUN_00224b5c(param_5);

        if ((uVar2 & 1) == 0) {

          FUN_00224a64(param_5);

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e7168,0,1);

        }

      }

      else {

        FUN_00083134(param_5);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        if (lVar4 == 0) goto LAB_00224890;

        FUN_002a4880(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar5 == 0) goto LAB_00224890;

        FUN_000822c8(param_5);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 == 0) {

LAB_002248bc:

          uVar2 = 0;

        }

        else {

          FUN_002a4880(lVar5);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          if (auVar9._0_8_ == 0) goto LAB_002248bc;

          uVar2 = FUN_00297700(lVar5,auVar9._8_8_,param_5);

          _objc_release(auVar9._0_8_);

          if ((int)uVar2 != 0) {

            FUN_002a4880(lVar5);

            uVar1 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar5);

            FUN_00293720(uVar1,extraout_x1,param_5);

            dVar8 = param_2;

            _objc_release(uVar1);

            FUN_002a4880(lVar4);

            uVar1 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar4);

            uVar7 = FUN_00293720(uVar1,extraout_x1_00,param_5);

            _objc_release(uVar1);

            dVar8 = (double)_CGRectGetMaxY(uVar7,dVar8,param_3,param_4);

            uVar2 = (ulong)(dVar8 + -0.5 <= param_2);

          }

        }

        FUN_00084dd4(param_5);

        uVar1 = _objc_retainAutoreleasedReturnValue();

        FUN_00224c70((double)fVar6,param_5,lVar4,lVar5,uVar1,uVar2);

        _objc_release(uVar1);

        _objc_release(lVar5);

      }

      _objc_release(lVar4);

    }

    _objc_release(lVar3);

  }

  _objc_release(param_5);

LAB_00224918:

  _objc_release(param_5);

  return;

}




