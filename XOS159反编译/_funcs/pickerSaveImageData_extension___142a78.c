// pickerSaveImageData:extension: @0x142a78


/* Function Stack Size: 0x20 bytes */



void CadisCardImagePickerViewController::pickerSaveImageData_extension_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar9 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002940e0(&_OBJC_CLASS___NSDate);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a51c0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_card______);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0013e1a0();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar9._0_8_,auVar9._8_8_,uVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  iVar2 = FUN_002a6580(param_3,extraout_x1_01,uVar5,1);

  if (iVar2 != 0) {

    iVar2 = FUN_002976a0(param_1);

    pcVar1 = &cf_CadisSelectedCardDark;

    if (iVar2 == 0) {

      pcVar1 = &cf_CadisSelectedCardLight;

    }

    _objc_retain(pcVar1);

    FUN_00136588();

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0060(auVar9._0_8_,auVar9._8_8_,uVar3,pcVar1);

    _objc_release(auVar9._0_8_);

    FUN_00136588();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4a40();

    _objc_release(uVar6);

    FUN_0013fe6c();

    FUN_00136604();

    FUN_00296640(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_00293560(auVar9._0_8_,auVar9._8_8_,uVar3);

    _objc_release(auVar9._0_8_);

    uVar6 = extraout_x1_02;

    if ((uVar7 & 1) == 0) {

      FUN_00296640(param_1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(auVar9._0_8_,auVar9._8_8_,uVar3);

      _objc_release(auVar9._0_8_);

      FUN_00296640(param_1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002a3f00(auVar9._0_8_,auVar9._8_8_,"localizedCaseInsensitiveCompare:");

      _objc_release(auVar9._0_8_);

      uVar6 = extraout_x1_03;

    }

    FUN_0029da20(param_1,uVar6,uVar3);

    FUN_002a4dc0(param_1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar6);

    FUN_00299720(param_1);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar8 != 0) {

      FUN_00299720(param_1);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar8 + 0x10))(lVar8,uVar3);

      _objc_release(lVar8);

    }

    _objc_release(pcVar1);

  }

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar4);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




