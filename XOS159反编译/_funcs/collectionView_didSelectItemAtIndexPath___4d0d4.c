// collectionView:didSelectItemAtIndexPath: @0x4d0d4


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::collectionView_didSelectItemAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  ID IVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  ID IVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  auVar12 = FUN_002a4e60(param_3);

  if (auVar12._0_8_ == 0x7d1) {

    FUN_00292a80(param_3,auVar12._8_8_,param_4);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(uVar3,"bubbleData");

    IVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(uVar3,"downloadVC");

    auVar12 = _objc_retainAutoreleasedReturnValue();

    IVar11 = auVar12._0_8_;

    if (IVar4 != 0) {

      FUN_00299540(IVar4,auVar12._8_8_,&cf_bubble_name);

      pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar1 = &::cf___;

      if (pcVar5 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar5;

      }

      _objc_retain(pcVar1);

      _objc_release(pcVar5);

      _NSSearchPathForDirectoriesInDomains(9,1,1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00295440();

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(auVar12._0_8_,auVar12._8_8_,&cf_CoverRes_Bubbles);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(auVar13._0_8_,auVar13._8_8_,pcVar1);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(auVar14._0_8_,auVar14._8_8_,&cf_theme_xos);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      lVar8 = FUN_00297fa0(pcVar1);

      if (lVar8 != 0) {

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        iVar2 = FUN_00295160(auVar15._0_8_,auVar15._8_8_,uVar7);

        _objc_release(auVar15._0_8_);

        if (iVar2 != 0) {

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar9 = auVar15._0_8_;

          FUN_002a0060(uVar9,auVar15._8_8_,pcVar1,&cf_mesMsgMergeSelectedBubble);

          FUN_002a4a40(uVar9);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__bll_);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar15._8_8_,&cf_n_bR,auVar15._0_8_,1);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar15._0_8_);

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar10,auVar15._8_8_,auVar15._0_8_);

          _objc_release(auVar15._0_8_);

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_zsS_T,2,

                       &PTR___NSConcreteGlobalBlock_00389920);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar10,auVar15._8_8_,auVar15._0_8_);

          _objc_release(auVar15._0_8_);

          if (IVar11 != 0) {

            param_1 = IVar11;

          }

          FUN_0029a500(param_1,extraout_x1_02,uVar10,1,0);

          _objc_release(uVar10);

          _objc_release(uVar9);

        }

      }

      _objc_release(uVar7);

      _objc_release(auVar14._0_8_);

      _objc_release(auVar13._0_8_);

      _objc_release(auVar12._0_8_);

      _objc_release(uVar6);

      _objc_release(pcVar1);

      _objc_release(IVar11);

      IVar11 = IVar4;

    }

    _objc_release(IVar11);

    _objc_release(uVar3);

  }

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




