// tableView:didSelectRowAtIndexPath: @0x6db90


/* Function Stack Size: 0x20 bytes */



void XZYFvEmotionPickerViewController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined1 auVar7 [16];

  

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  FUN_00295300(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar7 = FUN_0029bae0(param_4);

  FUN_00299500(uVar2,auVar7._8_8_,auVar7._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002942a0(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  pcVar4 = auVar7._0_8_;

  pcVar1 = &cf_ttsFvEmotion;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  FUN_002a0060(uVar2,auVar7._8_8_,uVar3,pcVar1);

  _objc_release(pcVar4);

  FUN_002a4a40(uVar2);

  FUN_002a4dc0(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar5);

  FUN_0029c3a0(param_1);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar6 != 0) {

    FUN_0029c3a0(param_1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar6 + 0x10))();

    _objc_release(lVar6);

  }

  _objc_release(uVar2);

  _objc_release(uVar3);

  _objc_release(param_4);

  return;

}




