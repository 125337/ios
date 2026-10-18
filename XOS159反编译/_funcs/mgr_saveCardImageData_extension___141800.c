// mgr_saveCardImageData:extension: @0x141800


/* Function Stack Size: 0x20 bytes */



void CadisCardImageManagerViewController::mgr_saveCardImageData_extension_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002940e0(&_OBJC_CLASS___NSDate);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a51c0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_card______);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0013e1a0();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar6._0_8_,auVar6._8_8_,uVar2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  iVar1 = FUN_002a6580(param_3,extraout_x1_01,uVar4,1);

  if (iVar1 != 0) {

    FUN_00136588();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00141a28();

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0060(uVar5,auVar6._8_8_,uVar2,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar5);

    FUN_0013fe6c();

    FUN_00136604();

    FUN_0029b120(param_1);

    FUN_002a4dc0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar5);

  }

  _objc_release(uVar4);

  _objc_release(uVar2);

  _objc_release(uVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




