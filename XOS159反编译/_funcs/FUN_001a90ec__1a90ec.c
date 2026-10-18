// FUN_001a90ec @0x1a90ec


bool FUN_001a90ec(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  ulong uVar1;

  bool bVar2;

  double dVar3;

  

  _objc_retain();

  uVar1 = FUN_002978a0(param_5);

  if (((uVar1 & 1) != 0) || (dVar3 = (double)FUN_002916a0(param_5), dVar3 < 0.01)) {

    bVar2 = false;

  }

  else {

    FUN_002925a0(param_5);

    if ((param_3 <= 1.0) || (param_4 <= 1.0)) {

      FUN_00295600(param_5);

    }

    bVar2 = false;

    if (1.0 < param_4) {

      bVar2 = 1.0 < param_3;

    }

  }

  _objc_release(param_5);

  return bVar2;

}




