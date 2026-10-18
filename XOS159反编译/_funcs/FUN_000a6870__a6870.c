// FUN_000a6870 @0xa6870


void FUN_000a6870(undefined1 param_1 [16],double param_2,double param_3,double param_4,

                 undefined8 param_5)



{

  ulong uVar1;

  double dVar2;

  undefined8 uVar3;

  double dVar4;

  

  _objc_retain();

  uVar1 = FUN_00297780(param_5);

  if ((((uVar1 & 1) == 0) && (uVar1 = FUN_00297b40(param_5), (uVar1 & 1) == 0)) &&

     (uVar1 = FUN_002976e0(param_5), (uVar1 & 1) == 0)) {

    FUN_00297ee0(param_5);

    dVar2 = (double)FUN_002935a0(param_5);

    FUN_00293600(param_5);

    FUN_002925a0(param_5);

    FUN_002935a0(param_5);

    param_3 = (param_2 - param_4) + param_3;

    dVar4 = -dVar2;

    if (-dVar2 <= param_3) {

      dVar4 = param_3;

    }

    FUN_002935e0(param_5);

    if (0.5 < ABS(param_3 - dVar4)) {

      uVar3 = FUN_002935e0(param_5);

      FUN_0029d6e0(uVar3,dVar4,param_5);

    }

  }

  _objc_release(param_5);

  return;

}




