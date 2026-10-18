// showTTSCellInfo: @0x72b6c


/* Function Stack Size: 0x18 bytes */



void _0x016d26c7::showTTSCellInfo_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  

  lVar1 = FUN_002a4e60(param_3);

  if ((lVar1 - 0xf3dU < 199) && (lVar1 + -4000 == ((lVar1 + -4000) / 100) * 100)) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(auVar5._0_8_,auVar5._8_8_,&cf_xzy_voice_jump_keyword);

    pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar5._0_8_);

    if ((pcVar2 == (cfstringStruct *)0x0) || (lVar1 = FUN_00297fa0(pcVar2), lVar1 == 0)) {

      _objc_release(pcVar2);

      pcVar2 = &cf_r;

    }

    FUN_002a5780(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_SMR);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar5._0_8_);

    _objc_release(pcVar2);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf__T_ueW_l,uVar3,1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar5._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar5._8_8_,&cf_wSN,0,0);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar5._8_8_,auVar5._0_8_);

    _objc_release(auVar5._0_8_);

    FUN_0029a500(param_1,extraout_x1_00,uVar4,1,0);

    _objc_release(uVar4);

    _objc_release(uVar3);

    return;

  }

  return;

}




