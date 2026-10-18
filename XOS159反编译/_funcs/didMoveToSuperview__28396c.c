// didMoveToSuperview @0x28396c


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::didMoveToSuperview(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  ID local_50;

  class_t *pcStack_48;

  

  pcStack_48 = &objc::class_t::XZYHomeDockLiquidContainer;

  local_50 = param_1;

  _objc_msgSendSuper2(&local_50,"didMoveToSuperview");

  FUN_0029c520(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_0029c520(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4880(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(lVar3);

    _objc_release(uVar2);

    _objc_release(lVar1);

    if (lVar3 != lVar4) {

      FUN_0029c520(param_1);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220();

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c520(param_1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b360(uVar5,auVar6._8_8_,auVar6._0_8_);

      _objc_release(auVar6._0_8_);

      _objc_release(uVar5);

      _objc_release(uVar2);

      FUN_002a4880(param_1);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar1 != 0) {

        FUN_002a4880(param_1);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        FUN_0029c520(param_1);

        auVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_00291140(uVar2,auVar6._8_8_,auVar6._0_8_);

        _objc_release(auVar6._0_8_);

        _objc_release(uVar2);

      }

    }

  }

  return;

}




