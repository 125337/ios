// FUN_00120cbc @0x120cbc


undefined1  [16] FUN_00120cbc(undefined8 param_1)



{

  int iVar1;

  undefined1 auVar3 [16];

  double dVar2;

  

  DAT_003e8478 = DAT_003e8478 + 1;

  auVar3 = (*DAT_003e8380)();

  dVar2 = auVar3._0_8_;

  if (0 < DAT_003e8478) {

    DAT_003e8478 = DAT_003e8478 + -1;

  }

  if (DAT_003e8478 == 0) {

    iVar1 = FUN_00123948(param_1);

    auVar3._8_8_ = 0;

    auVar3._0_8_ = dVar2 + 13.0;

    if (iVar1 == 0) {

      auVar3._8_8_ = 0;

      auVar3._0_8_ = dVar2;

    }

  }

  return auVar3;

}




