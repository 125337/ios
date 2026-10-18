// FUN_000af718 @0xaf718


undefined8 FUN_000af718(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  double dVar4;

  double dVar5;

  

  _objc_retain();

  if (param_1 == 0) {

    lVar1 = 0;

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e63d8);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      dVar4 = (double)_CACurrentMediaTime();

      dVar5 = (double)FUN_00294860(lVar1);

      if (dVar4 <= dVar5) {

        uVar3 = 1;

        goto LAB_000af7a4;

      }

    }

  }

  FUN_000a36d8(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_000a6724(uVar2,param_1);

  _objc_release(uVar2);

LAB_000af7a4:

  _objc_release(lVar1);

  _objc_release(param_1);

  return uVar3;

}




