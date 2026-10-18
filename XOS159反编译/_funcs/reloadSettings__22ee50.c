// reloadSettings @0x22ee50


/* Function Stack Size: 0x10 bytes */



void XZYHighRefreshDriver::reloadSettings(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._0_8_;

  iVar1 = FUN_002924c0(uVar2,auVar3._8_8_,&cf_coversEnabled);

  if (iVar1 == 0) {

    DAT_003eb0e8 = 0;

    DAT_003eb0e9 = 0;

  }

  else {

    DAT_003eb0e8 = FUN_002924c0(uVar2,extraout_x1,&cf_xzyHighRefreshEnabled);

    DAT_003eb0e9 = FUN_002924c0(uVar2,extraout_x1_00,&cf_xzyHighRefreshFPSVisible);

    if (((DAT_003eb0e8 | DAT_003eb0e9) & 1) != 0) {

      FUN_002a41e0(param_1);

      goto LAB_0022eee8;

    }

  }

  FUN_002a42a0(param_1);

LAB_0022eee8:

  if (DAT_003eb0e9 == 1) {

    FUN_0022ef28();

  }

  else {

    FUN_0022f82c();

  }

  _objc_release(uVar2);

  return;

}




