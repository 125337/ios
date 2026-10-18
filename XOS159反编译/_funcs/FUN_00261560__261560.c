// FUN_00261560 @0x261560


void FUN_00261560(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  long lVar4;

  undefined1 auVar5 [16];

  

  FUN_0024d85c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  _objc_release(uVar1);

  lVar4 = *(long *)(param_1 + 0x30);

  auVar5 = FUN_00293860(uVar2);

  if (lVar4 < auVar5._0_8_) {

    FUN_0029b480(uVar2,auVar5._8_8_,*(undefined8 *)(param_1 + 0x30));

    FUN_0024d944(uVar2);

    auVar5 = FUN_00297480(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_xzyHomeBottomBarStyleMode)

    ;

    lVar3 = auVar5._0_8_;

    lVar4 = *(long *)(param_1 + 0x30) + 100;

    if (lVar3 == lVar4) {

      FUN_0029efa0(*(undefined8 *)(param_1 + 0x20),auVar5._8_8_,1,&cf_xzyHomeBottomBarStyleMode);

      FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

      FUN_00240480();

    }

    else if (lVar4 < lVar3) {

      FUN_0029efa0(*(undefined8 *)(param_1 + 0x20),auVar5._8_8_,lVar3 + -1,

                   &cf_xzyHomeBottomBarStyleMode);

      FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

    }

    FUN_002995c0(*(undefined8 *)(param_1 + 0x28));

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      FUN_002995c0(*(undefined8 *)(param_1 + 0x28));

      lVar4 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar4 + 0x10))();

      _objc_release(lVar4);

    }

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar1);

  }

  _objc_release(uVar2);

  return;

}




