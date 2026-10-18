// FUN_00221ddc @0x221ddc


undefined8

FUN_00221ddc(undefined1 param_1 [16],double param_2,double param_3,double param_4,undefined8 param_5

            )



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  double dVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  

  _objc_retain();

  _objc_getAssociatedObject(param_5,&DAT_003eae71);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_5,&DAT_003eae72);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = 0;

  if ((lVar1 != 0) && (lVar2 != 0)) {

    dVar4 = (double)FUN_00295600(param_5);

    dVar6 = param_2;

    dVar7 = param_3;

    dVar8 = param_4;

    dVar5 = (double)FUN_00290aa0(lVar1);

    if ((0.5 <= ABS(dVar4 - dVar5)) ||

       (((0.5 <= ABS(param_2 - dVar6) || (0.5 <= ABS(param_3 - dVar7))) ||

        (0.5 <= ABS(param_4 - dVar8))))) {

      uVar3 = 0;

    }

    else {

      FUN_00290aa0(lVar2);

      FUN_00222cec(param_5);

      uVar3 = 1;

    }

  }

  _objc_setAssociatedObject(param_5,&DAT_003eae71,0,1);

  _objc_setAssociatedObject(param_5,&DAT_003eae72,0,1);

  _objc_release(lVar2);

  _objc_release(lVar1);

  _objc_release(param_5);

  return uVar3;

}




