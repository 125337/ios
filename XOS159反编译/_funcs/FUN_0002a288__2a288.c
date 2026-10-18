// FUN_0002a288 @0x2a288


void FUN_0002a288(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  float fVar4;

  double dVar5;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  dVar5 = 30.0;

  if ((double)fVar4 <= 30.0) {

    dVar5 = (double)fVar4;

  }

  if (dVar5 <= 1.0) {

    dVar5 = 1.0;

  }

  FUN_0029e500((float)dVar5,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_xzyBubbleShadowRadius);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x30));

  return;

}




