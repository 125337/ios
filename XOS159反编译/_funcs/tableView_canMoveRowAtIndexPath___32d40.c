// tableView:canMoveRowAtIndexPath: @0x32d40


/* Function Stack Size: 0x20 bytes */



bool _0x2f19de29::tableView_canMoveRowAtIndexPath_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined **ppuVar1;

  long lVar2;

  undefined **ppuVar3;

  long lVar4;

  bool bVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  lVar2 = FUN_002a4e60(param_3);

  if ((lVar2 == 0x3f5) && (lVar2 = FUN_0029c020(param_4), lVar2 == 1)) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d40(auVar6._0_8_,auVar6._8_8_,&cf_xzyHomeBottomBarPopupItems);

    ppuVar3 = (undefined **)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_003bdac8;

    if (ppuVar3 != (undefined **)0x0) {

      ppuVar1 = ppuVar3;

    }

    lVar2 = FUN_0029bae0(param_4);

    lVar4 = FUN_00293860(ppuVar1);

    bVar5 = (bool)(lVar2 < lVar4);

    _objc_release(ppuVar1);

  }

  else {

    bVar5 = 0;

  }

  _objc_release(param_4);

  _objc_release(param_3);

  return bVar5;

}




