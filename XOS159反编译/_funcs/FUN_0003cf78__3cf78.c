// FUN_0003cf78 @0x3cf78


void FUN_0003cf78(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined8 local_38;

  

  if (*(long *)(param_1 + 0x20) == 0) {

    auVar2 = FUN_00292c60(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38));

    if ((auVar2._0_8_ & 1) != 0) {

      FUN_0029d080(*(undefined8 *)(param_1 + 0x40),auVar2._8_8_,1,&cf_mesMsgMergeCreatorPermission);

      FUN_002a4a40(*(undefined8 *)(param_1 + 0x40));

      FUN_0029af00(*(undefined8 *)(param_1 + 0x30));

      local_58 = PTR___NSConcreteStackBlock_003886f0;

      local_50 = 0xc2000000;

      local_48 = FUN_0003d178;

      puStack_40 = &DAT_00388e60;

      local_38 = *(undefined8 *)(param_1 + 0x30);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

      return;

    }

    FUN_002a0120(*(undefined8 *)(param_1 + 0x28),auVar2._8_8_,0);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_01,&cf__gcCg,&cf_R_OCgP,1);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar2._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_nx_,0,0);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

    _objc_release(auVar2._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x30),extraout_x1_02,uVar1,1,0);

  }

  else {

    FUN_002a0120(*(undefined8 *)(param_1 + 0x28),param_2,0);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_cCghg1Y_,&cf_elc0RcCggRhVhgQ__c,1)

    ;

    auVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar2._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_nx_,0,0);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

    _objc_release(auVar2._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x30),extraout_x1_00,uVar1,1,0);

  }

  _objc_release(uVar1);

  return;

}




