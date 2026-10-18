// FUN_0018ee10 @0x18ee10


void FUN_0018ee10(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar8;

  undefined8 uVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined1 auVar16 [16];

  

  _objc_retain();

  if (param_5 == 0) goto LAB_0018f134;

  uVar1 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar2 = _objc_opt_isKindOfClass(param_5,uVar1);

  if ((uVar2 & 1) == 0) goto LAB_0018f134;

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6ea8);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((lVar3 != 0) && (uVar2 = FUN_002978a0(lVar3), (uVar2 & 1) == 0)) {

    FUN_0011a8ec(param_5);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    lVar4 = auVar16._0_8_;

    if (lVar4 == 0) {

      FUN_002a62a0(param_5,auVar16._8_8_,0x1352577);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) goto LAB_0018eec0;

    }

    else {

LAB_0018eec0:

      uVar2 = FUN_002978a0(lVar4);

      if ((uVar2 & 1) == 0) {

        FUN_002a4880(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar5 != 0) {

          auVar16 = _objc_opt_respondsToSelector(lVar4,"text");

          if ((auVar16._0_8_ & 1) == 0) {

            uVar1 = 0;

          }

          else {

            FUN_002a6080(lVar4,auVar16._8_8_,&cf_text);

            uVar1 = _objc_retainAutoreleasedReturnValue();

          }

          lVar5 = FUN_00297fa0(uVar1);

          if (lVar5 != 0) {

            FUN_002a4880(lVar4);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar4);

            uVar8 = FUN_00293720(uVar6,extraout_x1,param_5);

            uVar13 = param_2;

            uVar14 = param_3;

            uVar15 = param_4;

            _objc_release(uVar6);

            FUN_002a4880(lVar3);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar3);

            uVar9 = FUN_00293720(uVar6,extraout_x1_00,param_5);

            _objc_release(uVar6);

            dVar10 = (double)_CGRectGetMinY(uVar9,uVar13,uVar14,uVar15);

            dVar11 = (double)_CGRectGetHeight(uVar8,param_2,param_3,param_4);

            dVar12 = (double)_CGRectGetMinY(uVar8,param_2,param_3,param_4);

            dVar11 = (dVar10 + -3.0) - dVar11;

            if (0.5 < ABS(dVar12 - dVar11)) {

              dVar12 = (double)_CGRectGetMinY(uVar8,param_2,param_3,param_4);

              FUN_002a4880(lVar4);

              auVar16 = _objc_retainAutoreleasedReturnValue();

              dVar10 = dVar11;

              FUN_00293720(uVar8,dVar11,param_3,param_4,param_5,auVar16._8_8_,auVar16._0_8_);

              _objc_release(auVar16._0_8_);

              uVar13 = FUN_00295600(lVar4);

              FUN_0029e5e0(uVar13,dVar10,lVar4);

              FUN_002a62a0(param_5,extraout_x1_01,0x1352579);

              auVar16 = _objc_retainAutoreleasedReturnValue();

              uVar13 = auVar16._8_8_;

              lVar5 = auVar16._0_8_;

              if ((lVar5 != 0) && (lVar5 != lVar4)) {

                FUN_0018f1f8(dVar11 - dVar12,lVar5,param_5);

                uVar13 = extraout_x1_02;

              }

              FUN_002a62a0(param_5,uVar13,0x1352578);

              lVar7 = _objc_retainAutoreleasedReturnValue();

              if (((lVar7 != 0) && (lVar7 != lVar4)) && (lVar7 != lVar5)) {

                FUN_0018f1f8(dVar11 - dVar12,lVar7,param_5);

              }

              _objc_release(lVar7);

              _objc_release(lVar5);

            }

          }

          _objc_release(uVar1);

        }

      }

    }

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

LAB_0018f134:

  _objc_release(param_5);

  return;

}




