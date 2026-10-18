// downloadCenterSegmentChanged: @0x48d78


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::downloadCenterSegmentChanged_(ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined *puVar8;

  undefined *puVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined *puVar10;

  undefined1 auVar11 [16];

  

  _objc_retain(param_3);

  FUN_002990e0(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    lVar4 = 0;

  }

  else {

    FUN_00299260(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      _objc_retain(lVar4);

      _objc_release(lVar2);

      lVar2 = lVar4;

    }

  }

  FUN_002a5520(lVar2);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  if (lVar5 != 0) {

    auVar11 = FUN_0029c300(param_3);

    lVar6 = auVar11._0_8_;

    FUN_00299400(&_OBJC_CLASS___NSNumber,auVar11._8_8_,lVar6);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar5,"downloadCenterTab",uVar7,1);

    _objc_release(uVar7);

    _objc_getAssociatedObject(lVar5,"bubbleSearchBar");

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar11._0_8_;

    pcVar1 = &cf_d__aSGr;

    if (lVar6 != 1) {

      pcVar1 = &cf_d__ll;

    }

    FUN_002a06e0(uVar7,auVar11._8_8_,pcVar1);

    FUN_002a1d60(uVar7,extraout_x1,&::cf___);

    if (lVar6 == 1) {

      _objc_getAssociatedObject(lVar5,"cardListAll");

      puVar8 = (undefined *)_objc_retainAutoreleasedReturnValue();

      if (puVar8 == (undefined *)0x0) {

        _objc_getAssociatedObject(lVar5,"cardList");

        puVar9 = (undefined *)_objc_retainAutoreleasedReturnValue();

        puVar10 = PTR____NSArray0__struct_00388308;

        if (puVar9 != (undefined *)0x0) {

          puVar10 = puVar9;

        }

        _objc_retain(puVar10);

        _objc_release(puVar9);

      }

      else {

        _objc_retain(puVar8);

        puVar10 = puVar8;

      }

    }

    else {

      _objc_getAssociatedObject(lVar5,"bubbleListAll");

      puVar8 = (undefined *)_objc_retainAutoreleasedReturnValue();

      puVar10 = PTR____NSArray0__struct_00388308;

      if (puVar8 != (undefined *)0x0) {

        puVar10 = puVar8;

      }

      _objc_retain(puVar10);

    }

    _objc_release(puVar8);

    FUN_002a3120(param_1,extraout_x1_00,puVar10,lVar5);

    _objc_release(puVar10);

    _objc_release(uVar7);

  }

  _objc_release(lVar5);

  _objc_release(lVar4);

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(param_3);

  return;

}




