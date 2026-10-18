// tableView:didSelectRowAtIndexPath: @0x6e7b0


/* Function Stack Size: 0x20 bytes */



void XZYTTSVoiceExpressionSettingsController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 uVar3;

  undefined8 extraout_x1_09;

  cfstringStruct *pcVar4;

  undefined1 auVar5 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  auVar5 = _objc_alloc(&objc::class_t::XZYFvEmotionPickerViewController);

  uVar1 = FUN_00296ea0(auVar5._0_8_,auVar5._8_8_,2);

  lVar2 = FUN_0029c020(param_4);

  if ((lVar2 == 0) && (auVar5 = FUN_0029bae0(param_4), auVar5._0_8_ == 0)) {

    FUN_002a06c0(uVar1,auVar5._8_8_,&::cf_F);

    FUN_0006d5ac();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0440(uVar1,auVar5._8_8_,auVar5._0_8_);

    _objc_release(auVar5._0_8_);

    pcVar4 = &cf_ttsFvEmotion;

    uVar3 = extraout_x1_08;

  }

  else {

    lVar2 = FUN_0029c020(param_4);

    if ((lVar2 == 0) && (auVar5 = FUN_0029bae0(param_4), auVar5._0_8_ == 1)) {

      FUN_002a06c0(uVar1,auVar5._8_8_,&::cf_F);

      FUN_002a0440(uVar1,extraout_x1_00,&PTR__OBJC_CLASS___NSConstantDictionary_003c0630);

      pcVar4 = &cf_ttsFvMarkup;

      uVar3 = extraout_x1_01;

    }

    else {

      auVar5 = FUN_0029c020(param_4);

      if (auVar5._0_8_ == 0) {

        FUN_002a06c0(uVar1,auVar5._8_8_,&::cf_F);

        FUN_002a0440(uVar1,extraout_x1_04,&PTR__OBJC_CLASS___NSConstantDictionary_003c0658);

        pcVar4 = &cf_ttsFvAudioEffect;

        uVar3 = extraout_x1_05;

      }

      else {

        auVar5 = FUN_0029bae0(param_4);

        if (auVar5._0_8_ == 0) {

          FUN_002a06c0(uVar1,auVar5._8_8_,&::cf_F);

          FUN_002a0440(uVar1,extraout_x1_06,&PTR__OBJC_CLASS___NSConstantDictionary_003c05b8);

          pcVar4 = &cf_ttsFishEmotion;

          uVar3 = extraout_x1_07;

        }

        else {

          FUN_002a06c0(uVar1,auVar5._8_8_,&::cf_F);

          FUN_002a0440(uVar1,extraout_x1_02,&PTR__OBJC_CLASS___NSConstantDictionary_003c05e0);

          pcVar4 = &cf_ttsFishEffect;

          uVar3 = extraout_x1_03;

        }

      }

    }

  }

  FUN_0029dba0(uVar1,uVar3,pcVar4);

  auVar5 = FUN_0029c020(param_4);

  pcVar4 = &cf_N_;

  if (auVar5._0_8_ != 0) {

    pcVar4 = &cf_N_;

  }

  FUN_0029e5a0(uVar1,auVar5._8_8_,pcVar4);

  _objc_initWeak(auStack_38,param_1);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_0006ea90;

  puStack_48 = &DAT_0038a150;

  _objc_copyWeak(auStack_40,auStack_38);

  FUN_002a1240(uVar1,extraout_x1_09,&local_60);

  FUN_002990e0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar5._0_8_,auVar5._8_8_,uVar1,1);

  _objc_release(auVar5._0_8_);

  _objc_destroyWeak(auStack_40);

  _objc_destroyWeak(auStack_38);

  _objc_release(uVar1);

  _objc_release(param_4);

  return;

}




