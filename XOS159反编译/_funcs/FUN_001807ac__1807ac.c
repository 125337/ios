// FUN_001807ac @0x1807ac


void FUN_001807ac(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  FUN_00167d7c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  _objc_release(uVar1);

  lVar4 = *(long *)(param_1 + 0x28);

  auVar5 = FUN_00293860(uVar2);

  if (auVar5._0_8_ <= lVar4) goto LAB_001808d4;

  FUN_0029b480(uVar2,auVar5._8_8_,*(undefined8 *)(param_1 + 0x28));

  FUN_0017247c(uVar2);

  lVar3 = FUN_00138258();

  lVar4 = *(long *)(param_1 + 0x28) + 10;

  if (lVar3 == lVar4) {

    FUN_00136588();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_0029efa0(uVar1,auVar5._8_8_,0,&cf_CadisCalendarStyle);

LAB_00180868:

    _objc_release(uVar1);

  }

  else if (lVar4 < lVar3) {

    FUN_00136588();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_0029efa0(uVar1,auVar5._8_8_,lVar3 + -1,&cf_CadisCalendarStyle);

    goto LAB_00180868;

  }

  FUN_00136604();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar4 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar4 + 0x10))();

    _objc_release(lVar4);

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

LAB_001808d4:

  _objc_release(uVar2);

  return;

}




