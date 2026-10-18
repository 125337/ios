// FUN_002359e4 @0x2359e4


void FUN_002359e4(undefined8 param_1,long param_2)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar6;

  undefined1 auVar7 [16];

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  _objc_retain();

  FUN_00235cf4(param_1);

  if (param_2 == -1) {

    FUN_0023fafc(param_1);

    goto LAB_00235c4c;

  }

  FUN_002318f4(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (((lVar1 != 0) && (param_2 + 0xfU < 6)) &&

     (lVar2 = _NSClassFromString((&PTR_cf_WCPluginsViewController_0038fce8)[param_2 + 0xfU]),

     lVar2 != 0)) {

    auVar7 = _objc_alloc_init();

    lVar2 = auVar7._0_8_;

    if (lVar2 != 0) {

      FUN_0029e8c0(lVar2,auVar7._8_8_,1);

      if (param_2 == -0xf) {

        FUN_002387ac(param_1,1);

      }

      else {

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e7258);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar7._0_8_;

        FUN_0029e8a0(uVar4,auVar7._8_8_,1);

        FUN_0029cb60(0,uVar4);

        FUN_002a23c0(uVar4,extraout_x1,0);

        _objc_release(uVar4);

      }

      FUN_0029c340(lVar1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);

      uVar5 = _objc_opt_isKindOfClass(lVar3,uVar4);

      if ((uVar5 & 1) == 0) {

        FUN_002990e0(lVar3);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar6 != 0) {

          FUN_002990e0(lVar3);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          if (lVar6 != 0) goto LAB_00235b5c;

        }

LAB_00235b8c:

        auVar7 = _objc_alloc(&_OBJC_CLASS___UINavigationController);

        auVar7 = FUN_00296dc0(auVar7._0_8_,auVar7._8_8_,lVar2);

        uVar4 = auVar7._0_8_;

        FUN_0029fda0(uVar4,auVar7._8_8_,0);

        FUN_0029a500(lVar1,extraout_x1_00,uVar4,1,0);

        _objc_release(uVar4);

        lVar6 = 0;

      }

      else {

        _objc_retain(lVar3);

        lVar6 = lVar3;

        if (lVar3 == 0) goto LAB_00235b8c;

LAB_00235b5c:

        auVar7 = _objc_opt_respondsToSelector(lVar6,"PushViewController:animated:");

        if ((auVar7._0_8_ & 1) == 0) {

          FUN_0029aa80(lVar6,auVar7._8_8_,lVar2,1);

        }

        else {

          _objc_msgSend(lVar6,"PushViewController:animated:",lVar2,1);

        }

        local_78 = PTR___NSConcreteStackBlock_003886f0;

        local_70 = 0xc2000000;

        local_68 = FUN_00242808;

        puStack_60 = &DAT_00388e60;

        _objc_retain(param_1);

        local_58 = param_1;

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_78);

        _objc_release(local_58);

      }

      _objc_release(lVar3);

      _objc_release(lVar6);

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

LAB_00235c4c:

  _objc_release(param_1);

  return;

}




