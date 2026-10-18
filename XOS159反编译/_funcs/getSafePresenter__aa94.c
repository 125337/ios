// getSafePresenter @0xaa94


/* Function Stack Size: 0x10 bytes */



ID _0x2f19de29::getSafePresenter(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  ID IVar8;

  

  FUN_002990e0();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_002990e0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      _objc_release(uVar2);

      _objc_release(lVar1);

    }

    else {

      FUN_002990e0(param_1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220();

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6520();

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar5);

      _objc_release(uVar4);

      _objc_release(lVar3);

      _objc_release(uVar2);

      _objc_release(lVar1);

      if (lVar6 != 0) {

        FUN_002990e0(param_1);

        lVar1 = _objc_retainAutoreleasedReturnValue();

        FUN_002a5520();

        param_1 = _objc_retainAutoreleasedReturnValue();

        goto LAB_0000ac8c;

      }

    }

  }

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_00299260(lVar1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      FUN_002a6220(lVar3);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6520();

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar6 == 0) {

        _objc_release(uVar2);

      }

      else {

        FUN_002a5520(lVar3);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        _objc_release(lVar6);

        _objc_release(uVar2);

        if (lVar7 != 0) {

          FUN_002a5520(lVar3);

          param_1 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar3);

          goto LAB_0000ac8c;

        }

      }

    }

    _objc_release(lVar3);

  }

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar2);

  if (lVar3 == 0) {

    param_1 = 0;

  }

  else {

    _objc_retain(param_1);

  }

LAB_0000ac8c:

  _objc_release(lVar1);

  IVar8 = _objc_autoreleaseReturnValue(param_1);

  return IVar8;

}




