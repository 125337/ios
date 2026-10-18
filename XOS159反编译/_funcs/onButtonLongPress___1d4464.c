// onButtonLongPress: @0x1d4464


/* Function Stack Size: 0x18 bytes */



void XZYCLGSideRailView::onButtonLongPress_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  

  _objc_retain(param_3);

  lVar1 = FUN_002a4240(param_3);

  if (lVar1 == 1) {

    FUN_002a6220(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_opt_class(&objc::class_t::XZYCLGSideRailButton);

    uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

    if ((uVar4 & 1) != 0) {

      FUN_00295de0(uVar2);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      lVar1 = FUN_00297fa0();

      _objc_release(uVar3);

      if (lVar1 != 0) {

        FUN_002962e0(param_1);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar5 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

        uVar4 = _objc_opt_isKindOfClass(uVar3,uVar5);

        if ((uVar4 & 1) == 0) {

          FUN_001cafec(param_1);

          lVar1 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_002962e0(param_1);

          lVar1 = _objc_retainAutoreleasedReturnValue();

        }

        _objc_release(uVar3);

        if (lVar1 != 0) {

          FUN_002a2e40(&objc::class_t::XZYCLGDividerGestureTarget);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          FUN_00295de0(uVar2);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_002925a0(uVar2);

          FUN_0029a420(uVar3,extraout_x1,lVar1,uVar5,uVar2);

          _objc_release(uVar5);

          _objc_release(uVar3);

        }

        _objc_release(lVar1);

      }

    }

    _objc_release(uVar2);

  }

  _objc_release(param_3);

  return;

}




