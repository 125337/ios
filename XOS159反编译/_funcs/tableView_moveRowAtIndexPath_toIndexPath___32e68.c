// tableView:moveRowAtIndexPath:toIndexPath: @0x32e68


/* Function Stack Size: 0x28 bytes */



void _0x2f19de29::tableView_moveRowAtIndexPath_toIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  undefined **ppuVar1;

  long lVar2;

  undefined **ppuVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  lVar2 = FUN_002a4e60(param_3);

  if (((lVar2 == 0x3f5) && (lVar2 = FUN_0029c020(param_4), lVar2 == 1)) &&

     (lVar2 = FUN_0029c020(param_5), lVar2 == 1)) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d40(auVar7._0_8_,auVar7._8_8_,&cf_xzyHomeBottomBarPopupItems);

    ppuVar3 = (undefined **)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_003bdae0;

    if (ppuVar3 != (undefined **)0x0) {

      ppuVar1 = ppuVar3;

    }

    lVar2 = FUN_0029bae0(param_4);

    lVar4 = FUN_00293860(ppuVar1);

    if (lVar2 < lVar4) {

      lVar2 = FUN_0029bae0(param_5);

      lVar4 = FUN_00293860(ppuVar1);

      if (lVar2 < lVar4) {

        uVar5 = FUN_00299020(ppuVar1);

        auVar7 = FUN_0029bae0(param_4);

        FUN_00299500(uVar5,auVar7._8_8_,auVar7._0_8_);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        auVar7 = FUN_0029bae0(param_4);

        FUN_0029b480(uVar5,auVar7._8_8_,auVar7._0_8_);

        auVar7 = FUN_0029bae0(param_5);

        FUN_00297000(uVar5,auVar7._8_8_,uVar6,auVar7._0_8_);

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002a0060(auVar7._0_8_,auVar7._8_8_,uVar5,&cf_xzyHomeBottomBarPopupItems);

        _objc_release(auVar7._0_8_);

        FUN_00240480();

        _objc_release(uVar6);

        _objc_release(uVar5);

      }

    }

    _objc_release(ppuVar1);

  }

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




