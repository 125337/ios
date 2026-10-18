// FUN_0002826c @0x2826c


void FUN_0002826c(long param_1)



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

  dVar5 = 16.0;

  if ((double)fVar4 <= 16.0) {

    dVar5 = (double)fVar4;

  }

  if (dVar5 <= 6.0) {

    dVar5 = 6.0;

  }

  FUN_0029e500((float)dVar5,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_xzyTimeLabelFontSize);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x30));

  return;

}




