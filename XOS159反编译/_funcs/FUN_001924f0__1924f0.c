// FUN_001924f0 @0x1924f0


undefined1  [16] FUN_001924f0(undefined8 param_1)



{

  double dVar1;

  undefined1 auVar2 [16];

  double dVar3;

  undefined8 uVar4;

  

  DAT_003e96c0 = DAT_003e96c0 + 1;

  auVar2 = (*DAT_003e95e0)();

  uVar4 = auVar2._8_8_;

  dVar3 = auVar2._0_8_;

  if (0 < DAT_003e96c0) {

    DAT_003e96c0 = DAT_003e96c0 + -1;

  }

  FUN_0018da3c();

  if (DAT_003e95c8 == '\x01') {

    dVar1 = (double)FUN_001aa6e8(param_1);

    dVar3 = dVar3 + dVar1;

    uVar4 = 0;

  }

  auVar2._8_8_ = uVar4;

  auVar2._0_8_ = dVar3;

  return auVar2;

}




