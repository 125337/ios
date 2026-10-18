// FUN_002233dc @0x2233dc


void FUN_002233dc(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar8 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  long local_48;

  

  lVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar2 != 0) {

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

    uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

    lVar1 = lVar2;

    if ((uVar4 & 1) == 0) {

      lVar1 = 0;

    }

    _objc_retain(lVar1);

    if ((uVar4 & 1) != 0) {

      auVar8 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);

      uVar3 = FUN_00296ea0(auVar8._0_8_,auVar8._8_8_,0);

      FUN_00296680();

      uVar5 = _objc_alloc_init(&objc::class_t::XZYChatListGroupingSettingsViewController);

      FUN_002990e0(lVar2);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar6 == 0) {

        auVar8 = _objc_alloc(&_OBJC_CLASS___UINavigationController);

        auVar8 = FUN_00296dc0(auVar8._0_8_,auVar8._8_8_,uVar5);

        lVar6 = auVar8._0_8_;

        FUN_0029a500(lVar2,auVar8._8_8_,lVar6,1,0);

      }

      else {

        FUN_002a4d40(lVar2);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4d20();

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar7);

        uVar7 = extraout_x1;

        if (lVar6 != 0) {

          FUN_002387a4(lVar6);

          uVar7 = extraout_x1_00;

        }

        FUN_0029e8c0(uVar5,uVar7,1);

        FUN_002990e0(lVar2);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_0029aa80(auVar8._0_8_,auVar8._8_8_,uVar5,1);

        _objc_release(auVar8._0_8_);

        if (lVar6 != 0) {

          local_68 = PTR___NSConcreteStackBlock_003886f0;

          local_60 = 0xc2000000;

          local_58 = FUN_00223628;

          puStack_50 = &DAT_00388e60;

          _objc_retain(lVar6);

          local_48 = lVar6;

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_68);

          _objc_release(local_48);

        }

      }

      _objc_release(lVar6);

      _objc_release(uVar5);

      _objc_release(uVar3);

    }

    _objc_release(lVar1);

  }

  _objc_release(lVar2);

  return;

}




