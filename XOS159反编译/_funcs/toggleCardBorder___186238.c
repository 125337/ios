// toggleCardBorder: @0x186238


/* Function Stack Size: 0x18 bytes */



void GrayTestSettingViewController::toggleCardBorder_(ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_002979c0(param_3);

  FUN_0029d080(uVar3,auVar5._8_8_,auVar5._0_8_,&cf_grayTestCardBorderEnabled);

  FUN_002a4a40(uVar3);

  FUN_002a4dc0(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  iVar2 = FUN_002979c0(param_3);

  pcVar1 = &cf_aSGrFh_;

  if (iVar2 == 0) {

    pcVar1 = &cf_aSGrFh_sQ_T_OTuHe;

  }

  FUN_002a3940(param_1,extraout_x1,pcVar1);

  _objc_release(uVar3);

  _objc_release(param_3);

  return;

}




