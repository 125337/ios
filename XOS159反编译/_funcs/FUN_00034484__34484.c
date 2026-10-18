// FUN_00034484 @0x34484


void FUN_00034484(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3e9);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((uVar4 & 1) != 0) {

      FUN_0029b140(lVar3);

    }

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_mRbR,&cf_hQ__ni_VGr_mRbR,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar5._8_8_,&cf_bwSN,0,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  _objc_release(lVar3);

  return;

}




