// FUN_00127a34 @0x127a34


undefined1  [16] FUN_00127a34(undefined1 param_1 [16],undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  float fVar4;

  double dVar5;

  undefined1 auVar6 [16];

  double dVar7;

  undefined8 uVar8;

  

  uVar8 = param_1._8_8_;

  dVar7 = param_1._0_8_;

  _objc_retain();

  _objc_getAssociatedObject(param_2,&DAT_003e8484);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_2,&DAT_003e8486);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

    FUN_002993a0(dVar7,&_OBJC_CLASS___NSNumber);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_2,&DAT_003e8484,uVar3,1);

  }

  else {

    fVar4 = (float)FUN_00295480(lVar1);

    dVar7 = (double)fVar4;

    uVar8 = 0;

    if (lVar2 == 0) goto LAB_00127b48;

    dVar5 = (double)FUN_00295600(param_2);

    fVar4 = (float)FUN_00295480(lVar2);

    if (ABS(dVar5 - (double)fVar4) <= 0.5) goto LAB_00127b48;

    auVar6 = FUN_00295600(param_2);

    uVar8 = auVar6._8_8_;

    dVar7 = auVar6._0_8_;

    FUN_002993a0(&_OBJC_CLASS___NSNumber);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_2,&DAT_003e8484,uVar3,1);

  }

  _objc_release(uVar3);

LAB_00127b48:

  _objc_release(lVar2);

  _objc_release(lVar1);

  _objc_release(param_2);

  auVar6._8_8_ = uVar8;

  auVar6._0_8_ = dVar7;

  return auVar6;

}




