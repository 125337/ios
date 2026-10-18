// FUN_00127838 @0x127838


undefined1  [16] FUN_00127838(undefined1 param_1 [16],undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  float fVar3;

  undefined1 auVar4 [16];

  double dVar5;

  undefined8 uVar6;

  

  uVar6 = param_1._8_8_;

  dVar5 = param_1._0_8_;

  _objc_retain();

  _objc_getAssociatedObject(param_2,&DAT_003e8485);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

    FUN_002993a0(dVar5,&_OBJC_CLASS___NSNumber);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_2,&DAT_003e8485,uVar2,1);

    _objc_release(uVar2);

  }

  else {

    fVar3 = (float)FUN_00295480(lVar1);

    dVar5 = (double)fVar3;

    uVar6 = 0;

  }

  _objc_release(lVar1);

  _objc_release(param_2);

  auVar4._8_8_ = uVar6;

  auVar4._0_8_ = dVar5;

  return auVar4;

}




