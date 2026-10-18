// toggleBubbleDisplayMode: @0x473e0


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::toggleBubbleDisplayMode_(ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar11 [16];

  

  _objc_retain(param_3);

  FUN_002990e0(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    lVar5 = 0;

  }

  else {

    FUN_00299260(lVar4);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      _objc_retain(lVar5);

      _objc_release(lVar3);

      lVar3 = lVar5;

    }

  }

  FUN_002a5520(lVar3);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 != 0) {

    _objc_getAssociatedObject(lVar6,"bubbleDisplayMode");

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar11._8_8_;

    lVar7 = auVar11._0_8_;

    if (lVar7 == 0) {

      uVar2 = 0;

    }

    else {

      uVar2 = FUN_002924e0(lVar7);

      uVar8 = extraout_x1;

    }

    FUN_002993e0(&_OBJC_CLASS___NSNumber,uVar8,uVar2 ^ 1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar6,"bubbleDisplayMode",uVar8,1);

    _objc_release(uVar8);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar11._0_8_;

    FUN_0029efa0(uVar8,auVar11._8_8_,uVar2 ^ 1,&cf_xzyBubbleDownloadCenterDisplayMode);

    FUN_002a4a40(uVar8);

    pcVar1 = &cf_square_grid_2x2;

    if (uVar2 == 0) {

      pcVar1 = &cf_list_bullet;

    }

    FUN_002a4bc0(&_OBJC_CLASS___UIImage,extraout_x1_00,pcVar1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(param_3,auVar11._8_8_,auVar11._0_8_);

    _objc_release(auVar11._0_8_);

    _objc_getAssociatedObject(lVar6,"bubbleList");

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar10 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    auVar11 = _objc_opt_isKindOfClass(uVar9,uVar10);

    if ((auVar11._0_8_ & 1) != 0) {

      FUN_002a3120(param_1,auVar11._8_8_,uVar9,lVar6);

    }

    _objc_release(uVar9);

    _objc_release(uVar8);

    _objc_release(lVar7);

  }

  _objc_release(lVar6);

  _objc_release(lVar5);

  _objc_release(lVar4);

  _objc_release(lVar3);

  _objc_release(param_3);

  return;

}




