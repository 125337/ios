// FUN_001c2738 @0x1c2738


void FUN_001c2738(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  float fVar1;

  double dVar2;

  double dVar3;

  float fVar4;

  

  _objc_retain();

  if (DAT_003ea890 != (code *)0x0) {

    (*DAT_003ea890)(param_1,param_2,param_3);

  }

  fVar4 = (float)param_1;

  fVar1 = 0.0;

  if ((uint)ABS(fVar4) < 0x7f800000) {

    if (fVar4 < 0.0) {

      param_1 = ___exp10f(fVar4 / 20.0);

    }

    dVar2 = (double)((float)param_1 * 1.35);

    dVar3 = 1.0;

    if (dVar2 <= 1.0) {

      dVar3 = dVar2;

    }

    if (dVar3 <= 0.0) {

      dVar3 = 0.0;

    }

    fVar1 = (float)dVar3;

  }

  FUN_001bfb40(fVar1,fVar1,fVar1 * 0.55,fVar1 * 0.32);

  _objc_release(param_2);

  return;

}




