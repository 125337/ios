// FUN_00036074 @0x36074


void FUN_00036074(long param_1)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar5;

  float fVar6;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  FUN_002a5020(uVar4);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar5 = FUN_00295480();

  _objc_release(uVar3);

  fVar6 = (float)uVar5;

  bVar1 = false;

  bVar2 = true;

  if (10.0 <= fVar6) {

    bVar1 = false;

    bVar2 = true;

    if (!NAN(fVar6)) {

      bVar1 = fVar6 == 500.0;

      bVar2 = 500.0 <= fVar6;

    }

  }

  if (!bVar2 || bVar1) {

    FUN_0029e500(uVar5,*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30));

    FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

    FUN_0029a4c0((double)fVar6,*(undefined8 *)(param_1 + 0x38),extraout_x1_01,

                 *(undefined8 *)(param_1 + 0x40));

  }

  else {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_eQ,&cf_eQ1,1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar7._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar7._8_8_,&cf_nx_,0,0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar3,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x38),extraout_x1_00,uVar3,1,0);

    _objc_release(uVar3);

  }

  _objc_release(uVar4);

  return;

}




