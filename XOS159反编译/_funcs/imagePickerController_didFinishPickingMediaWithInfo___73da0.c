// imagePickerController:didFinishPickingMediaWithInfo: @0x73da0


/* Function Stack Size: 0x20 bytes */



void _0x016d26c7::imagePickerController_didFinishPickingMediaWithInfo_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00299540(param_4,extraout_x1,*(undefined8 *)PTR__UIImagePickerControllerOriginalImage_00388490

              );

  auVar6 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar6._0_8_;

  if (lVar5 == 0) {

    FUN_00299540(param_4,auVar6._8_8_,

                 *(undefined8 *)PTR__UIImagePickerControllerEditedImage_00388478);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    lVar5 = auVar6._0_8_;

    if (lVar5 != 0) goto LAB_00073e20;

  }

  else {

LAB_00073e20:

    FUN_0005f94c(0x4038000000000000,0x4038000000000000,lVar5);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    lVar1 = auVar6._0_8_;

    if (lVar1 == 0) {

      FUN_00294700(param_3,auVar6._8_8_,1,0);

      goto LAB_00073f64;

    }

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    FUN_002a4460(uVar3,extraout_x1_00,&cf_tts_custom_icon_png);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _UIImagePNGRepresentation(lVar1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6580(auVar6._0_8_,auVar6._8_8_,uVar2,1);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0060(auVar7._0_8_,auVar7._8_8_,uVar2,&cf_ttsCustomIconPath);

    _objc_release(auVar7._0_8_);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4a40();

    _objc_release(uVar4);

    FUN_002a4dc0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar4);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar2);

    _objc_release(uVar3);

    _objc_release(lVar1);

    auVar6._8_8_ = extraout_x1_01;

    auVar6._0_8_ = lVar5;

  }

  lVar5 = auVar6._0_8_;

  FUN_00294700(param_3,auVar6._8_8_,1,0);

LAB_00073f64:

  _objc_release(lVar5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




