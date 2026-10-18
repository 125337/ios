// FUN_0027a610 @0x27a610


void FUN_0027a610(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,

                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  double dVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  

  dVar7 = param_2;

  _objc_retain(param_6);

  _objc_retain(param_7);

  FUN_002a06a0(param_6,extraout_x1,param_8);

  if (param_8 == 2) {

    FUN_00297e40(param_7);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a540();

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      FUN_00297e40(param_7);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      dVar4 = (double)FUN_0029a100();

      _objc_release(uVar3);

    }

    else {

      dVar4 = (double)FUN_0029a100(lVar2);

    }

    _objc_release(lVar2);

    _objc_release(uVar1);

    FUN_002a21a0(param_6,extraout_x1_00,1);

    dVar5 = (double)_CGRectGetMidX(param_1,param_2,param_3,param_4);

    dVar6 = (double)_CGRectGetMidY(param_1,param_2,param_3,param_4);

    FUN_0029d340(dVar5 - dVar4,dVar6 - dVar7,param_6);

  }

  _objc_release(param_7);

  _objc_release(param_6);

  return;

}




