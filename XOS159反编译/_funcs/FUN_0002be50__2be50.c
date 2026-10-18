// FUN_0002be50 @0x2be50


void FUN_0002be50(undefined8 param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  _objc_retain(param_2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar3._0_8_,auVar3._8_8_,&cf_xzyHomeBottomBarSearchText);

  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  auVar3 = FUN_00297fa0(pcVar2);

  pcVar1 = &cf_d__;

  if (auVar3._0_8_ != 0) {

    pcVar1 = pcVar2;

  }

  FUN_002a1d60(param_2,auVar3._8_8_,pcVar1);

  FUN_002a06e0(param_2,extraout_x1,&cf_d__);

  _objc_release(pcVar2);

  _objc_release(param_2);

  return;

}




