// FUN_000328c4 @0x328c4


void FUN_000328c4(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  long local_58;

  

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_CoverRes_Bubbles___);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_00295160(auVar8._0_8_,auVar8._8_8_,uVar3);

  _objc_release(auVar8._0_8_);

  if (iVar1 != 0) {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    local_58 = 0;

    FUN_0029b3c0(auVar8._0_8_,auVar8._8_8_,uVar3,&local_58);

    lVar6 = local_58;

    _objc_retain(local_58);

    _objc_release(auVar8._0_8_);

    if (lVar6 == 0) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      lVar6 = auVar8._0_8_;

      FUN_002a45e0(lVar6,auVar8._8_8_,&cf_mesMsgMergeSelectedBubble);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar8._0_8_;

      iVar1 = FUN_00297820(uVar4,auVar8._8_8_,*(undefined8 *)(param_1 + 0x20));

      if (iVar1 != 0) {

        FUN_002a0060(lVar6,extraout_x1_01,&cf___,&cf_mesMsgMergeSelectedBubble);

        FUN_002a4a40(lVar6);

      }

      FUN_0029af00(*(undefined8 *)(param_1 + 0x28));

      FUN_0029b140(*(undefined8 *)(param_1 + 0x30));

      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_02,&cf_RdbR,&cf__g0Wll_Rd,1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar8._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar8._8_8_,&cf_nx_,0,0);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar5,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

      FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_03,uVar5,1,0);

      _objc_release(uVar5);

    }

    else {

      FUN_00298400(lVar6);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar8._8_8_,&cf_Rd1Y_,auVar8._0_8_,1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar8._0_8_);

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_nx_,0,0);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar4,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

      FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_00,uVar4,1,0);

    }

    _objc_release(uVar4);

    _objc_release(lVar6);

  }

  _objc_release(uVar3);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar2);

  return;

}




