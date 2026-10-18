// searchBar:textDidChange: @0x56b08


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::searchBar_textDidChange_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  ID IVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  ID IVar11;

  undefined1 auVar12 [16];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  ID local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  lVar1 = FUN_002a4e60(param_3);

  if (lVar1 == 0xbba) {

    _objc_retain(param_3);

    IVar11 = param_3;

    if (param_3 == 0) {

      IVar11 = 0;

      lVar1 = 0;

    }

    else {

      do {

        FUN_00299220(IVar11);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        uVar3 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

        uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

        _objc_release(uVar2);

        if ((uVar4 & 1) != 0) {

          FUN_00299220(IVar11);

          lVar1 = _objc_retainAutoreleasedReturnValue();

          if (lVar1 != 0) {

            _objc_getAssociatedObject(lVar1,"downloadCenterTab");

            uVar2 = _objc_retainAutoreleasedReturnValue();

            lVar8 = FUN_002974a0();

            if (lVar8 == 1) {

              _objc_getAssociatedObject(lVar1,"cardListAll");

              lVar9 = _objc_retainAutoreleasedReturnValue();

              lVar8 = lVar9;

              if (lVar9 == 0) {

                _objc_getAssociatedObject(lVar1,"cardList");

                lVar8 = _objc_retainAutoreleasedReturnValue();

              }

              else {

LAB_00056e04:

                _objc_retain(lVar8);

                lVar9 = lVar8;

              }

            }

            else {

              _objc_getAssociatedObject(lVar1,"bubbleListAll");

              lVar9 = _objc_retainAutoreleasedReturnValue();

              lVar8 = lVar9;

              if (lVar9 != 0) goto LAB_00056e04;

              _objc_getAssociatedObject(lVar1,"bubbleList");

              lVar8 = _objc_retainAutoreleasedReturnValue();

            }

            _objc_release(lVar9);

            uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

            uVar4 = _objc_opt_isKindOfClass(lVar8,uVar3);

            if ((uVar4 & 1) != 0) {

              _objc_retain(lVar8);

              auVar12 = FUN_00297fa0(param_4);

              uVar3 = auVar12._8_8_;

              lVar9 = lVar8;

              if (auVar12._0_8_ != 0) {

                local_88 = PTR___NSConcreteStackBlock_003886f0;

                local_80 = 0xc2000000;

                local_78 = FUN_00057064;

                puStack_70 = &DAT_00389890;

                _objc_retain(param_4);

                local_68 = param_4;

                FUN_0029a160(&_OBJC_CLASS___NSPredicate,extraout_x1,&local_88);

                auVar12 = _objc_retainAutoreleasedReturnValue();

                FUN_002952a0(lVar8,auVar12._8_8_,auVar12._0_8_);

                lVar9 = _objc_retainAutoreleasedReturnValue();

                _objc_release(lVar8);

                _objc_release(auVar12._0_8_);

                _objc_release(local_68);

                uVar3 = extraout_x1_00;

              }

              FUN_002a3120(param_1,uVar3,lVar9,lVar1);

              _objc_release(lVar9);

            }

            _objc_release(lVar8);

            _objc_release(uVar2);

          }

          goto LAB_00056f20;

        }

        FUN_002a4880(IVar11);

        IVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release(IVar11);

        IVar11 = IVar5;

      } while (IVar5 != 0);

      lVar1 = 0;

    }

LAB_00056f20:

    _objc_release(IVar11);

  }

  else {

    lVar1 = FUN_002a4e60(param_3);

    if (lVar1 != 0xbb9) goto LAB_00056f30;

    FUN_00295720(param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    auVar12 = FUN_00297fa0(param_4);

    lVar8 = lVar1;

    if (auVar12._0_8_ != 0) {

      FUN_0029a180(&_OBJC_CLASS___NSPredicate,auVar12._8_8_,&cf_SELFCONTAINS_cd___);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002952a0(lVar1,auVar12._8_8_,auVar12._0_8_);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar1);

      _objc_release(auVar12._0_8_);

    }

    _objc_setAssociatedObject(param_1,"bubbleFolders",lVar8,1);

    FUN_002990e0(param_1);

    lVar9 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_1,"bubbleNavController");

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) {

      lVar7 = 0;

    }

    else {

      FUN_00299260(lVar6);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 != 0) {

        _objc_retain(lVar7);

        _objc_release(lVar9);

        lVar9 = lVar7;

      }

    }

    FUN_002a5520(lVar9);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220();

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar12._0_8_,auVar12._8_8_,0x3eb);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar12._0_8_);

    _objc_release(uVar2);

    if (lVar10 != 0) {

      FUN_0029b140(lVar10);

    }

    _objc_release(lVar10);

    _objc_release(lVar7);

    _objc_release(lVar6);

    _objc_release(lVar9);

    _objc_release(lVar8);

  }

  _objc_release(lVar1);

LAB_00056f30:

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




