// FUN_000a1824 @0xa1824


undefined1  [16] FUN_000a1824(undefined1 param_1 [16],double param_2,long param_3)



{

  double dVar1;

  undefined1 auVar2 [16];

  double dVar3;

  undefined8 uVar4;

  

  uVar4 = param_1._8_8_;

  dVar3 = param_1._0_8_;

  _objc_retain();

  if ((param_3 != 0) && (0.0 < dVar3)) {

    dVar1 = (double)FUN_002a3d80(param_3);

    FUN_002a3d80(param_3);

    if ((0.0 < dVar1) && ((0.0 < param_2 && (dVar1 < param_2)))) {

      dVar3 = (dVar3 * dVar1) / param_2;

      uVar4 = 0;

    }

  }

  _objc_release(param_3);

  auVar2._8_8_ = uVar4;

  auVar2._0_8_ = dVar3;

  return auVar2;

}




