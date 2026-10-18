// imagePickerController:didFinishPickingMediaWithInfo: @0x5f6e8


/* Function Stack Size: 0x20 bytes */



void OBF_AIChatSettingViewController::imagePickerController_didFinishPickingMediaWithInfo_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  _objc_retain(param_4);

  FUN_00294700(param_3,extraout_x1,1,0);

  FUN_00299540(param_4,extraout_x1_00,

               *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_00388490);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  lVar1 = auVar5._0_8_;

  if (lVar1 == 0) {

    FUN_00299540(param_4,auVar5._8_8_,

                 *(undefined8 *)PTR__UIImagePickerControllerEditedImage_00388478);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 == 0) goto LAB_0005f898;

  }

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002994e0(auVar5._0_8_,auVar5._8_8_,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar6._0_8_,auVar6._8_8_,&cf_ai_chat_menu_icon_png);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0005f94c(0x4038000000000000,0x4038000000000000,lVar1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    _UIImagePNGRepresentation(lVar3);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6580(auVar7._0_8_,auVar7._8_8_,uVar2,1);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0060(auVar8._0_8_,auVar8._8_8_,uVar2,&cf_aiChatCustomIconPath);

    _objc_release(auVar8._0_8_);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4a40();

    _objc_release(uVar4);

    FUN_002a4dc0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar4);

    _objc_release(auVar7._0_8_);

  }

  _objc_release(lVar3);

  _objc_release(uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(lVar1);

LAB_0005f898:

  _objc_release(param_4);

  return;

}




