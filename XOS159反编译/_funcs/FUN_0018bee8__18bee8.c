// FUN_0018bee8 @0x18bee8


undefined8

FUN_0018bee8(double param_1,double param_2,double param_3,double param_4,double param_5,

            ulong param_6,long param_7)



{

  int iVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  double dVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double in_stack_00000000;

  double in_stack_00000008;

  double in_stack_00000010;

  double in_stack_00000018;

  double in_stack_00000028;

  double in_stack_00000038;

  

  dVar7 = 3.0;

  if (DAT_003e6e30 + 1.0 <= 3.0) {

    dVar7 = DAT_003e6e30 + 1.0;

  }

  if (param_7 != 3) {

    in_stack_00000010 = 0.0;

  }

  if (dVar7 <= 1.0) {

    dVar7 = 1.0;

  }

  in_stack_00000008 = in_stack_00000008 + dVar7;

  in_stack_00000018 = in_stack_00000018 + dVar7;

  dVar11 = 0.0;

  if (param_7 == 3) {

    dVar11 = in_stack_00000010 + dVar7;

  }

  dVar9 = 0.0;

  if (param_7 == 1) {

    dVar9 = in_stack_00000000 + dVar7;

  }

  dVar10 = in_stack_00000018 + 2.0;

  dVar8 = in_stack_00000008;

  if (in_stack_00000038 < in_stack_00000028) {

    dVar10 = in_stack_00000018;

    dVar8 = in_stack_00000008 + 2.0;

  }

  dVar6 = in_stack_00000018;

  dVar5 = in_stack_00000008;

  if (1.0 < ABS(in_stack_00000028 - in_stack_00000038)) {

    dVar6 = dVar10;

    dVar5 = dVar8;

  }

  if (param_6 != 0) {

    dVar6 = in_stack_00000018 + 2.0;

    dVar5 = in_stack_00000008;

  }

  if ((param_6 & 0x8000000000000000) != 0) {

    dVar6 = in_stack_00000018;

    dVar5 = in_stack_00000008 + 2.0;

  }

  dVar8 = param_1 + dVar5;

  dVar9 = param_2 + dVar9;

  dVar10 = param_3 - (dVar5 + dVar6);

  if (param_7 == 1) {

    dVar11 = in_stack_00000000 + dVar7;

  }

  dVar11 = param_4 - dVar11;

  uVar2 = _CGRectIsEmpty(dVar8,dVar9,dVar10,dVar11);

  if (((uVar2 & 1) != 0) || (iVar1 = _CGRectIsNull(dVar8,dVar9,dVar10,dVar11), iVar1 != 0)) {

    dVar8 = param_1;

    dVar9 = param_2;

    dVar10 = param_3;

    dVar11 = param_4;

  }

  dVar7 = (double)_CGRectGetWidth(dVar8,dVar9,dVar10,dVar11);

  dVar5 = (double)_CGRectGetHeight(dVar8,dVar9,dVar10,dVar11);

  if (dVar5 <= dVar7) {

    dVar7 = dVar5;

  }

  if (dVar7 * 0.5 <= param_5) {

    param_5 = dVar7 * 0.5;

  }

  if (param_7 == 3 || param_7 == 1) {

    if (param_5 <= 0.0) {

      param_5 = 0.0;

    }

    if (0.5 < param_5) {

      uVar3 = 0;

      if (param_7 == 3) {

        uVar3 = 0xc;

      }

      if (param_7 == 1) {

        uVar3 = 3;

      }

      FUN_00292360(dVar8,dVar9,dVar10,dVar11,param_5,param_5,&_OBJC_CLASS___UIBezierPath,extraout_x1

                   ,uVar3);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      goto LAB_0018c0e0;

    }

  }

  FUN_00292340(dVar8,dVar9,dVar10,dVar11,&_OBJC_CLASS___UIBezierPath);

  uVar3 = _objc_retainAutoreleasedReturnValue();

LAB_0018c0e0:

  _objc_retainAutorelease();

  FUN_00290a60();

  uVar4 = _CGPathCreateCopy();

  _objc_release(uVar3);

  return uVar4;

}




