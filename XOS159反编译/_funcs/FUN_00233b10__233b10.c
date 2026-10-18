// FUN_00233b10 @0x233b10


void FUN_00233b10(long param_1,long param_2)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  long local_48;

  

  _objc_retain();

  if ((param_1 == 0) || (param_2 < 0)) goto LAB_00233d18;

  _objc_retain(param_1);

  _objc_retain(param_1);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00242830(param_1,param_1,uVar1);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_00242b58;

  puStack_50 = &DAT_0038fa98;

  _objc_retain(param_1);

  local_48 = param_1;

  FUN_002a3ee0(uVar1,extraout_x1,&local_68);

  _objc_release(local_48);

  _objc_release(param_1);

  lVar2 = FUN_00293860(uVar1);

  if (param_2 < lVar2) {

    FUN_002318f4(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar5._8_8_;

    lVar2 = auVar5._0_8_;

    if (lVar2 == 0) {

LAB_00233c00:

      FUN_00299500(uVar1,uVar4,param_2);

      auVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c5a0(auVar5._0_8_,auVar5._8_8_,0x40);

      _objc_release(auVar5._0_8_);

      if (lVar2 != 0) {

        lVar3 = FUN_0029c2c0(lVar2);

        _objc_release(lVar2);

        _objc_release(uVar1);

        _objc_release(param_1);

        if (lVar3 == param_2) goto LAB_00233d18;

        goto LAB_00233cc0;

      }

    }

    else {

      auVar5 = FUN_0029c2c0(lVar2);

      uVar4 = auVar5._8_8_;

      if (auVar5._0_8_ != param_2) goto LAB_00233c00;

    }

    _objc_release(lVar2);

    _objc_release(uVar1);

    lVar2 = param_1;

  }

  else {

    _objc_release(uVar1);

    _objc_release(param_1);

LAB_00233cc0:

    FUN_002318f4(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      FUN_002a6260(lVar2);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      lVar3 = FUN_00293860();

      _objc_release(uVar1);

      if (param_2 < lVar3) {

        FUN_002a1180(lVar2,extraout_x1_00,param_2);

      }

    }

  }

  _objc_release(lVar2);

LAB_00233d18:

  _objc_release(param_1);

  return;

}




