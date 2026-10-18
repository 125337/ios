// FUN_002173d8 @0x2173d8


bool FUN_002173d8(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4,

                 double *param_5)



{

  bool bVar1;

  bool bVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  double dVar7;

  double dVar8;

  

  _objc_retain();

  *param_5 = 0.0;

  if ((((param_4 == 0) || (DAT_003eaa30 != '\x01' || DAT_003eaad0 != 1)) || (3 < DAT_003eaac8 - 1U))

     || (iVar3 = FUN_00216b40(param_4), iVar3 == 0)) {

    bVar1 = false;

  }

  else {

    FUN_00215838(param_4);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002158c4();

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      uVar6 = 0;

    }

    else {

      _objc_getAssociatedObject(lVar5,&DAT_003eae6d);

      uVar6 = _objc_retainAutoreleasedReturnValue();

    }

    dVar7 = (double)FUN_00294860(uVar6);

    if (((dVar7 <= 0.0) && (lVar4 != 0)) &&

       ((FUN_00215bbc(lVar4), 0.0 < param_3 && (dVar7 = 54.0, param_3 <= 274.0)))) {

      dVar7 = 48.0;

    }

    bVar1 = false;

    bVar2 = true;

    if (0.0 < DAT_003eaa38) {

      bVar1 = false;

      bVar2 = true;

      if (!NAN(dVar7)) {

        bVar1 = dVar7 == 0.0;

        bVar2 = 0.0 <= dVar7;

      }

    }

    dVar8 = DAT_003eaa38;

    if (bVar2 && !bVar1) {

      dVar8 = dVar7;

    }

    if (dVar8 <= 0.0) {

      dVar8 = 54.0;

    }

    *param_5 = dVar8;

    bVar1 = 0.0 < dVar8;

    _objc_release(uVar6);

    _objc_release(lVar5);

    _objc_release(lVar4);

  }

  _objc_release(param_4);

  return bVar1;

}




