// xzy_handleLongPress: @0x2361b4


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockButton::xzy_handleLongPress_(ID param_1,SEL param_2,ID param_3)



{

  ulong uVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined1 auVar7 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  _objc_retain(param_3);

  lVar3 = FUN_002a4240(param_3);

  if ((lVar3 != 1) || (lVar3 = FUN_002a6860(param_1), lVar3 != -2)) goto LAB_00236398;

  FUN_002a6840(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_retain();

  if (lVar3 != 0) {

    if ((long)DAT_003e7298 < 100) {

      if (DAT_003e7298 == 3) goto LAB_0023624c;

    }

    else {

      FUN_0023d02c(lVar3);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar4 != 0) {

LAB_0023624c:

        FUN_00235cf4(lVar3);

        uVar1 = DAT_003e7298;

        if (2 < DAT_003e7298 - 2 && (long)DAT_003e7298 < 100) {

          uVar1 = 1;

        }

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar7._0_8_;

        if (uVar1 < 100) {

          DAT_003eb268 = (DAT_003eb268 ^ 0xff) & 1;

          FUN_0029d080(uVar5,auVar7._8_8_,DAT_003eb268,&cf_xzyHomeBottomBarFloatingMenuSpread);

        }

        else {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_____ld);

          auVar7 = _objc_retainAutoreleasedReturnValue();

          uVar6 = auVar7._0_8_;

          uVar2 = FUN_002924c0(uVar5,auVar7._8_8_,uVar6);

          FUN_0029d080(uVar5,extraout_x1,uVar2 ^ 1,uVar6);

          _objc_release(uVar6);

        }

        FUN_0029ff40(lVar3);

        local_58 = PTR___NSConcreteStackBlock_003886f0;

        local_50 = 0xc2000000;

        local_48 = FUN_002427e0;

        puStack_40 = &DAT_00388e60;

        _objc_retain(lVar3);

        local_38 = lVar3;

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

        auVar7 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);

        uVar6 = FUN_00296ea0(auVar7._0_8_,auVar7._8_8_,0);

        FUN_00296680();

        _objc_release(uVar6);

        _objc_release(local_38);

        _objc_release(uVar5);

      }

    }

  }

  _objc_release(lVar3);

  _objc_release(lVar3);

LAB_00236398:

  _objc_release(param_3);

  return;

}




