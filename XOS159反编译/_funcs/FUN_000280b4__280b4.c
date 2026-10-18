// FUN_000280b4 @0x280b4


void FUN_000280b4(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  _objc_release(uVar3);

  auVar7 = FUN_002974a0(uVar5);

  lVar6 = auVar7._0_8_;

  lVar1 = lVar6;

  if (0x31 < lVar6) {

    lVar1 = 0x32;

  }

  lVar2 = 9;

  if (0 < lVar6) {

    lVar2 = lVar1;

  }

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x28),auVar7._8_8_,lVar2,*(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x38));

  _objc_release(uVar5);

  return;

}




