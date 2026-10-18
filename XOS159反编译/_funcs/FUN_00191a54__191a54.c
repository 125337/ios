// FUN_00191a54 @0x191a54


undefined1  [16] FUN_00191a54(long param_1)



{

  long lVar1;

  long lVar2;

  float fVar3;

  undefined1 auVar4 [16];

  double dVar5;

  undefined8 uVar6;

  

  _objc_retain();

  if (param_1 == 0) {

    dVar5 = 0.0;

    uVar6 = 0;

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6eb8);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 == 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6300);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if (lVar2 == 0) {

        dVar5 = 0.0;

      }

      else {

        fVar3 = (float)FUN_00295480(lVar2);

        dVar5 = (double)fVar3;

      }

      uVar6 = 0;

      _objc_release(lVar2);

    }

    else {

      fVar3 = (float)FUN_00295480(lVar1);

      dVar5 = (double)fVar3;

      uVar6 = 0;

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  auVar4._8_8_ = uVar6;

  auVar4._0_8_ = dVar5;

  return auVar4;

}




