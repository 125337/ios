// toggleMsgMerge: @0x391e4


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::toggleMsgMerge_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar7._0_8_;

  uVar3 = FUN_002924c0(uVar2,auVar7._8_8_,&cf_coversEnabled);

  if (((uVar3 & 1) == 0) && (iVar1 = FUN_002979c0(param_3), iVar1 != 0)) {

    FUN_002a0120(param_3,extraout_x1,0);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf_c_y,&cf_HQ,1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    lVar6 = auVar7._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar7._8_8_,&cf_nx_,0,0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(lVar6,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_0029a500(param_1,extraout_x1_01,lVar6,1,0);

  }

  else {

    auVar7 = FUN_002979c0(param_3);

    FUN_0029d080(uVar2,auVar7._8_8_,auVar7._0_8_,&cf_mesMsgMergeEnabled);

    DAT_003e7a2c = 0;

    FUN_002a4a40(uVar2);

    FUN_002990e0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220();

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar7._0_8_,auVar7._8_8_,0x3ea);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    _objc_release(uVar5);

    _objc_release(uVar4);

    if (lVar6 != 0) {

      uVar4 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar3 = _objc_opt_isKindOfClass(lVar6,uVar4);

      if ((uVar3 & 1) != 0) {

        FUN_0029b140(lVar6);

      }

    }

  }

  _objc_release(lVar6);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




