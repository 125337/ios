// FUN_002392b4 @0x2392b4


void FUN_002392b4(undefined1 param_1 [16],double param_2,undefined8 param_3,int param_4)



{

  cfstringStruct *pcVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  double dVar8;

  double dVar9;

  double dVar10;

  

  _objc_retain();

  FUN_002a62a0(param_3,extraout_x1,&DAT_0000239c);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___UILabel);

  uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

  if (((uVar5 & 1) != 0) && (uVar5 = FUN_002978a0(uVar3), (uVar5 & 1) == 0)) {

    FUN_002a5020(uVar3);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf___;

    if (pcVar6 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar6;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar6);

    dVar8 = (double)FUN_002394e8(pcVar1);

    bVar2 = false;

    if ((dVar8 == *(double *)PTR__CGSizeZero_00388bf8) &&

       (bVar2 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_00388bf8 + 8)))) {

      bVar2 = param_2 == *(double *)(PTR__CGSizeZero_00388bf8 + 8);

    }

    if (!bVar2) {

      if (param_4 == 0) {

        FUN_002925a0(param_3);

        dVar9 = (double)_CGRectGetWidth();

        FUN_002925a0(param_3);

        dVar10 = (double)_CGRectGetHeight();

        dVar9 = (dVar9 - dVar8) + -14.0;

        dVar10 = (dVar10 - param_2) * 0.5;

      }

      else {

        FUN_002925a0(param_3);

        dVar9 = (double)_CGRectGetWidth();

        dVar9 = (dVar9 - dVar8) + 2.0;

        dVar10 = -2.0;

      }

      FUN_0029e5e0(dVar9,dVar10,dVar8,param_2,uVar3);

      FUN_00297e40(uVar3);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(param_2 * 0.5);

      _objc_release(uVar4);

      FUN_002a62a0(param_3,extraout_x1_00,&DAT_0000239d);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      uVar7 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

      uVar5 = _objc_opt_isKindOfClass(uVar4,uVar7);

      if (((uVar5 & 1) != 0) && (uVar5 = FUN_002978a0(uVar4), (uVar5 & 1) == 0)) {

        FUN_00295600(uVar3);

        FUN_0029e5e0(uVar4);

      }

      _objc_release(uVar4);

    }

    _objc_release(pcVar1);

  }

  _objc_release(uVar3);

  _objc_release(param_3);

  return;

}




