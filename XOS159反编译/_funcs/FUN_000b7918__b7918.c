// FUN_000b7918 @0xb7918


undefined8 FUN_000b7918(long param_1,long *param_2)



{

  undefined *puVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar5 = 0;

  }

  else {

    lVar2 = FUN_000b921c(param_1);

    if (param_2 != (long *)0x0) {

      *param_2 = lVar2;

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e65d8);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if ((lVar3 == 0) || (lVar4 = FUN_002a5a20(lVar3), lVar4 != lVar2)) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e65e0);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar6._8_8_;

      lVar4 = auVar6._0_8_;

      if ((lVar4 == 0) ||

         (auVar6 = FUN_002a5a20(lVar4), uVar5 = auVar6._8_8_, auVar6._0_8_ != lVar2)) {

        puVar1 = PTR_LOOP_003e65e0;

        FUN_00299480(&_OBJC_CLASS___NSNumber,uVar5,lVar2);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar5,1);

        _objc_release(uVar5);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e65f8,0,1);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6600,0,1);

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e65e8);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar2 = FUN_002a5a20();

        _objc_release(uVar5);

        puVar1 = PTR_LOOP_003e65e8;

        FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,lVar2 + 1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar5,1);

        _objc_release(uVar5);

        FUN_000822c8(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(uVar5,PTR_LOOP_003e6310,0,1);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6340,0,1);

        _objc_release(uVar5);

      }

      _objc_release(lVar4);

      uVar5 = 1;

    }

    else {

      uVar5 = 0;

    }

    _objc_release(lVar3);

  }

  _objc_release(param_1);

  return uVar5;

}




