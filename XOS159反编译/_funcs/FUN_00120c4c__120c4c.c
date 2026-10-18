// FUN_00120c4c @0x120c4c


undefined1  [16] FUN_00120c4c(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  double dVar4;

  double dVar6;

  undefined8 uVar7;

  undefined1 auVar5 [16];

  

  auVar5 = (*DAT_003e8378)();

  uVar7 = auVar5._8_8_;

  dVar4 = auVar5._0_8_;

  lVar2 = _objc_getClass("TextMessageViewModel");

  if ((lVar2 == 0) ||

     (uVar3 = _objc_opt_isKindOfClass(param_1,lVar2), dVar6 = dVar4, (uVar3 & 1) == 0)) {

    iVar1 = FUN_00123948(param_1);

    uVar7 = 0;

    dVar6 = dVar4 + 13.0;

    if (iVar1 == 0) {

      uVar7 = 0;

      dVar6 = dVar4;

    }

  }

  auVar5._8_8_ = uVar7;

  auVar5._0_8_ = dVar6;

  return auVar5;

}




