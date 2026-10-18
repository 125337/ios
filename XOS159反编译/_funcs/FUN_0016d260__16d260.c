// FUN_0016d260 @0x16d260


void FUN_0016d260(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  FUN_0016cb00();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

    (**(code **)(*(long *)(param_5 + 0x28) + 0x10))(*(long *)(param_5 + 0x28),0);

  }

  else {

    FUN_0029a0a0(*(undefined8 *)(param_5 + 0x20));

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar3 = extraout_x1;

    if (lVar2 != 0) {

      FUN_002a6220(lVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029a0a0(*(undefined8 *)(param_5 + 0x20));

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1740(auVar6._0_8_,auVar6._8_8_,uVar3);

      _objc_release(auVar6._0_8_);

      _objc_release(uVar3);

      FUN_002a6220(lVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      FUN_002a6220(lVar1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      FUN_0029a0a0(*(undefined8 *)(param_5 + 0x20));

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1700(param_3 * 0.5,param_4 * 0.5,0,0);

      _objc_release(uVar5);

      _objc_release(uVar4);

      _objc_release(uVar3);

      FUN_0029a0a0(*(undefined8 *)(param_5 + 0x20));

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0640(auVar6._0_8_,auVar6._8_8_,0);

      _objc_release(auVar6._0_8_);

      uVar3 = extraout_x1_00;

    }

    FUN_0029a500(lVar1,uVar3,*(undefined8 *)(param_5 + 0x20),1,0);

  }

  _objc_release(lVar1);

  return;

}




