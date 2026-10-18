// FUN_001cbd20 @0x1cbd20


void FUN_001cbd20(long param_1)



{

  long lVar1;

  int iVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined8 extraout_x1_01;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar4 = extraout_x1;

    if (DAT_003ea9f8 == 0) {

      FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      lVar1 = DAT_003ea9f8;

      DAT_003ea9f8 = lVar3;

      _objc_release(lVar1);

      uVar4 = extraout_x1_00;

    }

    iVar2 = FUN_00293560(DAT_003ea9f8,uVar4,param_1);

    if (iVar2 == 0) {

      FUN_00291240(DAT_003ea9f8,extraout_x1_01,param_1);

    }

    else {

      FUN_0029b460(DAT_003ea9f8,extraout_x1_01,param_1);

    }

    FUN_0020ba40();

    DAT_003eaab4 = DAT_003eaab4 + 1;

  }

  _objc_release(param_1);

  return;

}




