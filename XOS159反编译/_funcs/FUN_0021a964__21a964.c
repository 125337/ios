// FUN_0021a964 @0x21a964


void FUN_0021a964(double param_1,undefined1 param_2 [16],double param_3,undefined8 param_4,

                 undefined8 param_5,double *param_6,double *param_7)



{

  int iVar1;

  long lVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  _objc_retain(param_5);

  _objc_getAssociatedObject(param_4,&DAT_003eae52);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924c0(auVar8._0_8_,auVar8._8_8_,

                         &cf_xzyChatListGroupingHorizontalSearchOrbExpanded);

    _objc_release(auVar8._0_8_);

  }

  else {

    iVar1 = FUN_00294ea0(lVar2);

  }

  dVar7 = DAT_003e7160;

  FUN_002925a0(param_5);

  dVar7 = dVar7 * 62.4;

  dVar5 = dVar7;

  if (dVar7 <= param_3 + -24.0) {

    dVar5 = param_3 + -24.0;

  }

  FUN_00295600(param_5);

  dVar3 = (double)_CGRectGetMinX();

  dVar3 = dVar3 + 12.0;

  if ((DAT_003e715e & 1) == 0) {

    *param_6 = dVar3;

    param_6[1] = param_1;

    param_6[2] = dVar5;

    param_6[3] = dVar7;

    dVar7 = *(double *)PTR__CGRectZero_00388bf0;

    dVar3 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

    dVar5 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

    param_7[1] = *(double *)(PTR__CGRectZero_00388bf0 + 8);

    *param_7 = dVar7;

    param_7[3] = dVar3;

    param_7[2] = dVar5;

  }

  else {

    dVar4 = DAT_003e7160 * 6.0;

    dVar6 = (dVar5 - dVar7) - dVar4;

    dVar5 = dVar7;

    if (dVar7 <= dVar6) {

      dVar5 = dVar6;

    }

    dVar6 = dVar7;

    if (iVar1 == 0) {

      dVar6 = dVar5;

    }

    *param_6 = dVar3;

    param_6[1] = param_1;

    param_6[2] = dVar6;

    param_6[3] = dVar7;

    if (iVar1 == 0) {

      dVar5 = dVar7;

    }

    *param_7 = dVar4 + dVar3 + dVar6;

    param_7[1] = param_1;

    param_7[2] = dVar5;

    param_7[3] = dVar7;

  }

  _objc_release(lVar2);

  _objc_release(param_5);

  _objc_release(param_4);

  return;

}




