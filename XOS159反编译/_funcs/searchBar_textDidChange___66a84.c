// searchBar:textDidChange: @0x66a84


/* Function Stack Size: 0x20 bytes */



void _0x00bdda58::searchBar_textDidChange_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_4);

  auVar2 = FUN_00297fa0(param_4);

  if (auVar2._0_8_ == 0) {

    FUN_0029f120(param_1,auVar2._8_8_,0);

    FUN_0029bf40(param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b240();

    _objc_release(uVar1);

    FUN_00292a60(param_1);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar2._0_8_,auVar2._8_8_,0);

    _objc_release(auVar2._0_8_);

  }

  else {

    FUN_0029f120(param_1,auVar2._8_8_,1);

    FUN_00292a60(param_1);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar2._0_8_,auVar2._8_8_,1);

    _objc_release(auVar2._0_8_);

    FUN_0029bf80(param_1,extraout_x1,param_4);

  }

  FUN_002a4dc0(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  _objc_release(param_4);

  return;

}




