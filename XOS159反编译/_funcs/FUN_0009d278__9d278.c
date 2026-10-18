// FUN_0009d278 @0x9d278


void FUN_0009d278(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  dispatch_time_t dVar6;

  float fVar7;

  undefined1 auVar8 [16];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined1 auStack_60 [8];

  undefined1 auStack_58 [8];

  

  _objc_retain(param_3);

  iVar1 = FUN_000a89d8();

  if (iVar1 != 0) {

    DAT_003e7ba0 = 1;

    _objc_storeWeak(&DAT_003e7490,param_1);

    FUN_002a6280(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar4 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar4);

    auVar8 = _objc_opt_isKindOfClass(lVar2,lVar4);

    lVar4 = lVar2;

    if ((auVar8._0_8_ & 1) != 0) {

      FUN_002a6080(lVar2,auVar8._8_8_,&cf_parentModel);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _objc_retain(lVar3);

        _objc_release(lVar2);

        lVar4 = lVar3;

      }

      _objc_release(lVar3);

    }

    _objc_storeWeak(&DAT_003e7498,lVar4);

    _objc_release(lVar4);

    _objc_release(lVar2);

    FUN_002a6280(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      _objc_getAssociatedObject(lVar2,PTR_LOOP_003e64a8);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if ((lVar4 != 0) && (fVar7 = (float)FUN_00295480(lVar4), 0.0 < fVar7)) {

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6640,lVar4,1);

      }

      if (DAT_003e76c0 == 0) {

        DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

      }

      lVar3 = DAT_003e76c0;

      _objc_retain(DAT_003e76c0);

      _objc_autorelease(lVar3);

      auVar8 = _objc_opt_isKindOfClass(lVar2,lVar3);

      if ((auVar8._0_8_ & 1) != 0) {

        FUN_002a6080(lVar2,auVar8._8_8_,&cf_parentModel);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 != 0) {

          _objc_getAssociatedObject(lVar3,PTR_LOOP_003e64a8);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          if ((lVar5 != 0) && (fVar7 = (float)FUN_00295480(lVar5), 0.0 < fVar7)) {

            _objc_setAssociatedObject(lVar3,PTR_LOOP_003e6640,lVar5,1);

          }

          _objc_setAssociatedObject(lVar3,PTR_LOOP_003e65a0,PTR____kCFBooleanTrue_00388320,1);

          _objc_release(lVar5);

        }

        _objc_release(lVar3);

      }

      _objc_setAssociatedObject

                (lVar2,PTR_LOOP_003e64e8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

      _objc_setAssociatedObject

                (lVar2,PTR_LOOP_003e64a8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

      _objc_release(lVar4);

    }

    _objc_initWeak(auStack_58,param_1);

    dVar6 = _dispatch_time(0,100000000);

    local_80 = PTR___NSConcreteStackBlock_003886f0;

    local_78 = 0xc2000000;

    local_70 = FUN_000bc8f8;

    puStack_68 = &DAT_0038a150;

    _objc_copyWeak(auStack_60,auStack_58);

    _dispatch_after(dVar6,PTR___dispatch_main_q_00388740,&local_80);

    _objc_destroyWeak(auStack_60);

    _objc_destroyWeak(auStack_58);

    _objc_release(lVar2);

  }

  (*DAT_003e78f0)(param_1,param_2,param_3);

  _objc_release(param_3);

  return;

}




