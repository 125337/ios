// FUN_000b11cc @0xb11cc


undefined8 FUN_000b11cc(long param_1)



{

  undefined *puVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar3 = 0;

    goto LAB_000b13b4;

  }

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6320);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    uVar4 = _objc_opt_respondsToSelector(param_1,"viewModel");

    if ((uVar4 & 1) == 0) {

      uVar3 = 0;

    }

    else {

      FUN_002a6280(param_1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

LAB_000b13a0:

        uVar3 = 0;

      }

      else {

        if (DAT_003e76c0 == 0) {

          DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

        }

        lVar6 = DAT_003e76c0;

        _objc_retain(DAT_003e76c0);

        _objc_autorelease(lVar6);

        auVar8 = _objc_opt_isKindOfClass(lVar5,lVar6);

        if ((auVar8._0_8_ & 1) != 0) {

          FUN_002a6080(lVar5,auVar8._8_8_,&cf_parentModel);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          if (lVar6 != 0) {

            _objc_retain(lVar6);

            _objc_release(lVar5);

            lVar5 = lVar6;

          }

          _objc_release(lVar6);

        }

        uVar4 = _objc_opt_respondsToSelector(lVar5,"isSender");

        if ((uVar4 & 1) == 0) goto LAB_000b13a0;

        auVar8 = FUN_00297a80(lVar5);

        puVar1 = PTR_LOOP_003e6320;

        uVar3 = auVar8._0_8_;

        FUN_00299380(&_OBJC_CLASS___NSNumber,auVar8._8_8_,uVar3);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar7,1);

        _objc_release(uVar7);

      }

      _objc_release(lVar5);

    }

  }

  else {

    uVar3 = FUN_002924e0(lVar2);

  }

  _objc_release(lVar2);

LAB_000b13b4:

  _objc_release(param_1);

  return uVar3;

}




