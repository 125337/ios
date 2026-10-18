// FUN_000baf7c @0xbaf7c


void FUN_000baf7c(long param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  double dVar3;

  

  _objc_retain();

  puVar1 = PTR_LOOP_003e6410;

  if (param_1 != 0) {

    dVar3 = (double)_CACurrentMediaTime();

    FUN_002993a0(dVar3 + 1.2,&_OBJC_CLASS___NSNumber);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar2,1);

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  return;

}




