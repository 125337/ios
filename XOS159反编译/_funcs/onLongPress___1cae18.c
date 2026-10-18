// onLongPress: @0x1cae18


/* Function Stack Size: 0x18 bytes */



void XZYCLGDividerGestureTarget::onLongPress_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain(param_3);

  lVar1 = FUN_002a4240(param_3);

  if (lVar1 == 1) {

    FUN_002a6220(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableViewCell);

    uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

    if ((uVar4 & 1) != 0) {

      _objc_retain(uVar2);

      _objc_getAssociatedObject(uVar2,&DAT_003eaab0);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if ((lVar1 != 0) && (uVar4 = FUN_00297760(lVar1), (uVar4 & 1) != 0)) {

        FUN_001cafec(uVar2);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          if (DAT_003eaac8 == 6) {

            FUN_00295de0(lVar1);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            FUN_002925a0(uVar2);

            FUN_0029a420(param_1,extraout_x1,lVar5,uVar3,uVar2);

          }

          else {

            FUN_00295de0(lVar1);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            FUN_002925a0(uVar2);

            FUN_0029a240(param_1,extraout_x1_00,lVar5,uVar3,uVar2);

          }

          _objc_release(uVar3);

        }

        _objc_release(lVar5);

      }

      _objc_release(lVar1);

      _objc_release(uVar2);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_3);

  return;

}




