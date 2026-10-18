// FUN_00192438 @0x192438


undefined1  [16] FUN_00192438(undefined8 param_1)



{

  byte bVar1;

  int iVar2;

  double dVar3;

  undefined1 auVar4 [16];

  double dVar5;

  undefined8 uVar6;

  

  auVar4 = (*DAT_003e95d8)();

  uVar6 = auVar4._8_8_;

  dVar5 = auVar4._0_8_;

  FUN_0018da3c();

  if (DAT_003e95c8 == '\x01') {

    if (DAT_003e95d0 == 0) {

      bVar1 = 0;

    }

    else {

      bVar1 = _objc_opt_isKindOfClass(param_1);

    }

    iVar2 = FUN_0019efe8(param_1);

    if ((iVar2 == 0) || ((bVar1 & DAT_003e96c0 == 0) == 1)) {

      dVar3 = (double)FUN_001aa6e8(param_1);

      dVar5 = dVar5 + dVar3;

      uVar6 = 0;

    }

  }

  auVar4._8_8_ = uVar6;

  auVar4._0_8_ = dVar5;

  return auVar4;

}




