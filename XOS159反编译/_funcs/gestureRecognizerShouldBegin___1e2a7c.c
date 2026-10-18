// gestureRecognizerShouldBegin: @0x1e2a7c


/* Function Stack Size: 0x18 bytes */



bool XZYCLGHorizontalListSwipeHandler::gestureRecognizerShouldBegin_

               (ID param_1,SEL param_2,ID param_3)



{

  byte bVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar8;

  bool bVar9;

  double dVar10;

  double in_d1;

  double in_d2;

  undefined1 auVar11 [16];

  

  _objc_retain(param_3);

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIPanGestureRecognizer);

  bVar1 = _objc_opt_isKindOfClass(param_3,uVar2);

  if (((bVar1 & DAT_003eaa30 & 1) == 0) || (1 < DAT_003eaac8 - 5U)) {

    bVar9 = 0;

    goto LAB_001e2bf8;

  }

  FUN_002a6220(param_3);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

  uVar4 = _objc_opt_isKindOfClass(lVar3,uVar2);

  if ((uVar4 & 1) == 0) {

    bVar9 = 0;

  }

  else {

    FUN_002962e0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(uVar2,&DAT_003ead83);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    uVar2 = _objc_opt_class(&objc::class_t::XZYCLGHorizontalBarView);

    uVar4 = _objc_opt_isKindOfClass(uVar5,uVar2);

    if ((uVar4 & 1) == 0) {

LAB_001e2bd4:

      bVar9 = 0;

    }

    else {

      FUN_00299900(uVar5);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_00293860();

      _objc_release(uVar2);

      if (((uVar4 < 2) || (dVar10 = (double)FUN_00298440(param_3,extraout_x1,lVar3), dVar10 < 60.0))

         || (FUN_002925a0(lVar3), in_d2 + -60.0 < dVar10)) goto LAB_001e2bd4;

      FUN_00296220(dVar10,lVar3,extraout_x1_00,0);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      lVar8 = auVar11._0_8_;

      while ((lVar8 != 0 && (lVar8 != lVar3))) {

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UITextField);

        uVar4 = _objc_opt_isKindOfClass(lVar8,uVar2);

        if ((uVar4 & 1) != 0) {

LAB_001e2da0:

          bVar9 = 0;

          goto LAB_001e2da4;

        }

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UITextView);

        uVar4 = _objc_opt_isKindOfClass(lVar8,uVar2);

        if ((uVar4 & 1) != 0) goto LAB_001e2da0;

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UIScrollView);

        uVar4 = _objc_opt_isKindOfClass(lVar8,uVar2);

        if ((uVar4 & 1) != 0) {

          _objc_retain(lVar8);

          _objc_retain(lVar3);

          _objc_retain(lVar8);

          lVar7 = lVar8;

          while( true ) {

            uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableViewCell);

            uVar4 = _objc_opt_isKindOfClass(lVar7,uVar2);

            if ((uVar4 & 1) != 0) break;

            FUN_002a4880(lVar7);

            lVar6 = _objc_retainAutoreleasedReturnValue();

            _objc_release(lVar7);

            if ((lVar6 == 0) || (lVar7 = lVar6, lVar6 == lVar3)) {

              _objc_release(lVar6);

              _objc_release(lVar3);

              _objc_release(lVar8);

              goto LAB_001e2da0;

            }

          }

          _objc_release(lVar7);

          _objc_release(lVar3);

          _objc_release(lVar8);

        }

        FUN_002a4880(lVar8);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar8);

        auVar11._8_8_ = extraout_x1_01;

        auVar11._0_8_ = lVar7;

        lVar8 = lVar7;

      }

      lVar8 = auVar11._0_8_;

      dVar10 = (double)FUN_002a5740(param_3,auVar11._8_8_,lVar3);

      bVar9 = (bool)(ABS(in_d1) * 1.2 < ABS(dVar10));

LAB_001e2da4:

      _objc_release(lVar8);

    }

    _objc_release(uVar5);

  }

  _objc_release(lVar3);

LAB_001e2bf8:

  _objc_release(param_3);

  return bVar9;

}




