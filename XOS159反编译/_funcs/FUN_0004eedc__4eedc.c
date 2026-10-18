// FUN_0004eedc @0x4eedc


void FUN_0004eedc(long param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  byte bVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  long lVar10;

  ulong uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  ulong uVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  

  if (*(long *)(param_1 + 0x20) == 0) {

    FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,param_2,*(undefined8 *)(param_1 + 0x30),0,0);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar13._0_8_;

    FUN_00299540(uVar4,auVar13._8_8_,&cf_success);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    iVar3 = FUN_002924e0();

    _objc_release(uVar5);

    FUN_00299540(uVar4,extraout_x1_01,&cf_message);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf__gw;

    if (pcVar6 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar6;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar6);

    if (iVar3 == 0) {

      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_02,&cf_Rd1Y_,pcVar1,1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar13._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar13._8_8_,&cf_nx_,0,0);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar5,auVar13._8_8_,auVar13._0_8_);

      _objc_release(auVar13._0_8_);

      FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_05,uVar5,1,0);

    }

    else {

      _NSSearchPathForDirectoriesInDomains(9,1,1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00295440();

      uVar7 = _objc_retainAutoreleasedReturnValue();

      pcVar6 = &cf_CoverRes_Cards;

      if (*(char *)(param_1 + 0x58) == '\0') {

        pcVar6 = &cf_CoverRes_Bubbles;

      }

      _objc_retain(pcVar6);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf______);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(uVar7,auVar13._8_8_,auVar13._0_8_);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar13._0_8_);

      FUN_00294240(&_OBJC_CLASS___NSFileManager);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      iVar3 = FUN_00295160(auVar13._0_8_,auVar13._8_8_,uVar8);

      _objc_release(auVar13._0_8_);

      if (iVar3 != 0) {

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        bVar2 = FUN_0029b3c0(auVar13._0_8_,auVar13._8_8_,uVar8,0);

        _objc_release(auVar13._0_8_);

        if (((*(byte *)(param_1 + 0x58) & bVar2 & 1) != 0) && (iVar3 = FUN_0017e04c(), iVar3 != 0))

        {

          FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_0029a120(auVar13._0_8_,auVar13._8_8_,&cf_CadisHeaderNeedsRebuild,0);

          _objc_release(auVar13._0_8_);

        }

      }

      _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x40),"bubbleList");

      uVar9 = _objc_retainAutoreleasedReturnValue();

      lVar10 = FUN_00299020();

      _objc_release(uVar9);

      if (lVar10 != 0) {

        for (uVar12 = 0; auVar13 = FUN_00293860(lVar10), uVar12 < auVar13._0_8_; uVar12 = uVar12 + 1

            ) {

          FUN_00299500(lVar10,auVar13._8_8_,uVar12);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar13._0_8_,auVar13._8_8_,&cf_bubble_uuid);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          uVar11 = FUN_00297820(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(param_1 + 0x48));

          _objc_release(auVar14._0_8_);

          _objc_release(auVar13._0_8_);

          if ((uVar11 & 1) != 0) {

            FUN_0029b480(lVar10,extraout_x1_04,uVar12);

            _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x40),"bubbleList",lVar10,1);

            _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x50),"bubbleList",lVar10,1);

            break;

          }

        }

      }

      FUN_0029b140(*(undefined8 *)(param_1 + 0x40));

      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_06,&cf_RdbR,pcVar1,1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar13._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar13._8_8_,&cf_nx_,0,0);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

      _objc_release(auVar13._0_8_);

      FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_07,uVar9,1,0);

      _objc_release(uVar9);

      _objc_release(lVar10);

      _objc_release(uVar8);

      _objc_release(pcVar6);

      _objc_release(uVar7);

    }

    _objc_release(uVar5);

    _objc_release(pcVar1);

  }

  else {

    FUN_00298400();

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar13._8_8_,&cf_Rd1Y_,auVar13._0_8_,1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar13._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_nx_,0,0);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_00,uVar4,1,0);

  }

  _objc_release(uVar4);

  return;

}




