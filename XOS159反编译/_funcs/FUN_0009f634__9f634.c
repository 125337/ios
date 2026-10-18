// FUN_0009f634 @0x9f634


void FUN_0009f634(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  uint uVar1;

  uint uVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6650);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar7._0_8_;

    auVar7 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_mesMsgMergeAvatarAboveBubble);

    if (((auVar7._0_8_ & 1) == 0) &&

       (uVar5 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_mesMsgMergeAvatarAboveAnyChat), (uVar5 & 1) == 0

       )) {

      uVar1 = FUN_000050c0(uVar4);

    }

    else {

      uVar1 = 1;

    }

    uVar6 = FUN_002979c0(param_3);

    FUN_000bd4c4(lVar3,uVar6);

    uVar2 = FUN_002979c0(param_3);

    if (((uVar1 | uVar2 ^ 0xffffffff) & 1) == 0) {

      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf___,

                   &cf__k_T_u04YPllN0_T_OTuHe0KNTQtedk,1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar6 = auVar7._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar7._8_8_,&cf_zT,1,0);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar6,auVar7._8_8_,auVar7._0_8_);

      _objc_release(auVar7._0_8_);

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_zsS_T,2,

                   &PTR___NSConcreteGlobalBlock_0038b390);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar6,auVar7._8_8_,auVar7._0_8_);

      _objc_release(auVar7._0_8_);

      FUN_0029a500(param_1,extraout_x1_01,uVar6,1,0);

      _objc_release(uVar6);

    }

    _objc_release(uVar4);

  }

  _objc_release(lVar3);

  _objc_release(param_3);

  return;

}




