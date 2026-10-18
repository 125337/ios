// refreshSelectedName @0x25e40c


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockCustomStyleListController::refreshSelectedName(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  auVar4 = FUN_00297480(auVar3._0_8_,auVar3._8_8_,&cf_xzyHomeBottomBarStyleMode);

  if (auVar4._0_8_ < 100) {

    FUN_002a11e0(param_1,auVar4._8_8_,0);

  }

  else {

    FUN_0024da68();

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar4._0_8_,auVar4._8_8_,&cf_name);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    pcVar2 = auVar5._0_8_;

    pcVar1 = &cf__IN7h_;

    if (pcVar2 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar2;

    }

    FUN_002a11e0(param_1,auVar5._8_8_,pcVar1);

    _objc_release(pcVar2);

    _objc_release(auVar4._0_8_);

  }

  _objc_release(auVar3._0_8_);

  return;

}




