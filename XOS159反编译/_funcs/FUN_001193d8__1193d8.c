// FUN_001193d8 @0x1193d8


void FUN_001193d8(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),"bubbleNavController");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

    lVar4 = 0;

    lVar2 = 0;

  }

  else {

    FUN_00299260(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      lVar4 = 0;

    }

    else {

      FUN_002a5520(lVar2);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220();

      auVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3eb);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar5._0_8_);

      _objc_release(uVar3);

      if (lVar4 != 0) {

        uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

        auVar5 = _objc_opt_isKindOfClass(lVar4,uVar3);

        if ((auVar5._0_8_ & 1) != 0) {

          FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar5._8_8_,0);

          auVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b1c0(lVar4,auVar5._8_8_,auVar5._0_8_,5);

          _objc_release(auVar5._0_8_);

        }

      }

    }

  }

  _objc_release(lVar2);

  _objc_release(lVar1);

  _objc_release(lVar4);

  return;

}




