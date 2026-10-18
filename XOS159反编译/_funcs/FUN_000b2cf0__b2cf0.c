// FUN_000b2cf0 @0xb2cf0


bool FUN_000b2cf0(undefined8 param_1)



{

  bool bVar1;

  long lVar2;

  double dVar3;

  double dVar4;

  

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6410);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    bVar1 = false;

  }

  else {

    dVar3 = (double)_CACurrentMediaTime();

    dVar4 = (double)FUN_00294860(lVar2);

    bVar1 = dVar3 < dVar4;

  }

  _objc_release(lVar2);

  return bVar1;

}




