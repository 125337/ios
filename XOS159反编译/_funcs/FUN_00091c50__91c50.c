// FUN_00091c50 @0x91c50


void FUN_00091c50(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  double *pdVar1;

  uint uVar2;

  uint uVar3;

  int iVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar8;

  double dVar9;

  undefined1 auVar10 [16];

  

  (*DAT_003e7780)();

  FUN_00082e7c();

  if ((DAT_003e74b9 & 1) == 0) {

    FUN_00293940(param_5);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 == 0) {

      return;

    }

    FUN_00293940(param_5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

    goto LAB_000920a0;

  }

  FUN_00082ce4();

  _objc_retain(param_5);

  _objc_getAssociatedObject(param_5,&DAT_003e7954);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar5 == 0) {

    if (DAT_003e7968 != -1) {

      FUN_0028ef50();

    }

    FUN_002a4880(param_5);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      uVar2 = 0;

      uVar3 = 0;

    }

    else {

      uVar3 = 0;

      uVar2 = 0;

      lVar8 = lVar5;

      do {

        if (((uVar2 & 1) == 0) && (DAT_003e7958 != 0)) {

          uVar2 = _objc_opt_isKindOfClass(lVar8);

        }

        if ((uVar3 & 1) == 0 && DAT_003e7960 != 0) {

          uVar3 = _objc_opt_isKindOfClass(lVar8);

        }

        if ((uVar2 & uVar3 & 1) != 0) {

          uVar2 = 1;

          uVar3 = 1;

          lVar5 = lVar8;

          break;

        }

        FUN_002a4880(lVar8);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar8);

        lVar8 = lVar5;

      } while (lVar5 != 0);

    }

    _objc_setAssociatedObject(param_5,&DAT_003e7954,PTR____kCFBooleanTrue_00388320,1);

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1,uVar2 & 1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,&DAT_003e7950,uVar6,1);

    _objc_release(uVar6);

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_00,uVar3 & 1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,&DAT_003e7953,uVar6,1);

    _objc_release(uVar6);

    _objc_release(lVar5);

  }

  _objc_release(param_5);

  _objc_getAssociatedObject(param_5,&DAT_003e7950);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_002924e0();

  _objc_release(uVar6);

  if (DAT_003e7951 == '\x01') {

    if (uVar2 == 0) {

LAB_00091eb4:

      dVar9 = 0.0;

      if (0.0 < DAT_003e7980) {

        dVar9 = DAT_003e7980;

      }

    }

    else {

      iVar4 = FUN_00297a60(param_5);

      pdVar1 = (double *)&DAT_003e7970;

      if (iVar4 == 0) {

        pdVar1 = (double *)&DAT_003e7978;

      }

      dVar9 = *pdVar1;

      if (*pdVar1 <= 0.0) goto LAB_00091eb4;

    }

    FUN_002925a0(param_5);

    FUN_002925a0(param_5);

    if (param_4 <= param_3) {

      param_3 = param_4;

    }

    if (dVar9 <= 0.0) {

      param_3 = param_3 * 0.5;

    }

    else {

      param_3 = (dVar9 * param_3) / 100.0;

    }

    FUN_00297e40(param_5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002993a0(param_3,&_OBJC_CLASS___NSNumber);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(uVar6,&DAT_003e7952,uVar7,1);

    _objc_release(uVar7);

    _objc_release(uVar6);

    FUN_00297e40(param_5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    dVar9 = (double)FUN_00293820();

    _objc_release(uVar6);

    if (0.5 < ABS(dVar9 - param_3)) {

      FUN_00297e40(param_5);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(param_3);

      _objc_release(uVar6);

    }

    auVar10 = FUN_00292e20(param_5);

    if ((auVar10._0_8_ & 1) == 0) {

      FUN_0029d4a0(param_5,auVar10._8_8_,1);

    }

  }

  else {

    FUN_00297e40(param_5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(uVar6,&DAT_003e7952);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar6);

    if (lVar5 != 0) {

      FUN_00297e40(param_5);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(uVar6,&DAT_003e7952,0,1);

      _objc_release(uVar6);

    }

  }

  _objc_getAssociatedObject(param_5,&DAT_003e7953);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  iVar4 = FUN_002924e0();

  _objc_release(uVar6);

  if (iVar4 == 0) {

    if ((DAT_003e74d8 & 1) == 0) {

      if ((uVar2 & 1) == 0) {

        FUN_00293940(param_5);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar5 != 0) {

          FUN_00293940(param_5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b340();

          goto LAB_000920a0;

        }

      }

    }

    else if ((uVar2 & 1) == 0) {

      FUN_002a2b80(param_5);

      return;

    }

  }

  else {

    FUN_00293940(param_5);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 != 0) {

      FUN_00293940(param_5);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b340();

LAB_000920a0:

      _objc_release(uVar6);

      FUN_0029d880(param_5,extraout_x1_01,0);

      return;

    }

  }

  return;

}




