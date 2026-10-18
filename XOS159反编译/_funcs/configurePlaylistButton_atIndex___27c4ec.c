// configurePlaylistButton:atIndex: @0x27c4ec


/* Function Stack Size: 0x20 bytes */



void XZYHomeDockLiquidContainer::configurePlaylistButton_atIndex_

               (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long_long lVar5;

  ulong uVar6;

  undefined8 uVar7;

  cfstringStruct *pcVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar9 [16];

  

  _objc_retain(param_3);

  if (-1 < (long)param_4) {

    FUN_0029a000(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00293860();

    _objc_release(uVar2);

    if ((long)param_4 < lVar3) {

      FUN_002a2e40(&objc::class_t::XZYDockPlayerEngine);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_0029a000(param_1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00299500(auVar9._0_8_,auVar9._8_8_,param_4);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar9._0_8_);

      lVar5 = FUN_00293ce0(uVar2);

      if (param_4 == lVar5) {

        uVar6 = FUN_00299f80(uVar2);

      }

      else {

        uVar6 = 0;

      }

      uVar7 = _objc_alloc_init(&objc::class_t::XZYHomeDockLiquidItem);

      FUN_002a5360(uVar4);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      pcVar8 = auVar9._0_8_;

      pcVar1 = &cf__gwfv;

      if (pcVar8 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar8;

      }

      FUN_002a1f60(uVar7,auVar9._8_8_,pcVar1);

      _objc_release(pcVar8);

      if ((uVar6 & 1) == 0) {

        FUN_00291e20(uVar4);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1b20(uVar7,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        FUN_002a4bc0(&_OBJC_CLASS___UIImage,extraout_x1_01,&cf_music_note);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ec00(uVar7,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        FUN_0029eb60(0x4038000000000000,uVar7);

        uVar6 = FUN_00293ec0(param_1);

        if ((uVar6 & 1) == 0) {

          FUN_00292400(&_OBJC_CLASS___UIColor);

          auVar9 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_002a64a0();

          auVar9 = _objc_retainAutoreleasedReturnValue();

        }

      }

      else {

        FUN_002a1b20(uVar7,extraout_x1,&cf_ck_Wd>e);

        FUN_002a4bc0(&_OBJC_CLASS___UIImage,extraout_x1_00,&cf_music_note);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ec00(uVar7,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        FUN_0029eb60(0x4038000000000000,uVar7);

        FUN_002a4a80(&_OBJC_CLASS___UIColor);

        auVar9 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_0029d520(uVar7,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      FUN_002a1c80(param_3,extraout_x1_02,param_4 + 3);

      FUN_002a4e60(param_3);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf_xzy_liquid_menu__ld);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c740(param_3,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      FUN_00291b20(param_1,extraout_x1_04,uVar7,param_3);

      _objc_release(uVar7);

      _objc_release(uVar4);

      _objc_release(uVar2);

    }

  }

  _objc_release(param_3);

  return;

}




