// FUN_0023b1c8 @0x23b1c8


void FUN_0023b1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 double param_5)



{

  undefined8 uVar1;

  double dVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  double dVar6;

  

  dVar2 = (double)_CGRectGetWidth();

  dVar3 = (double)_CGRectGetHeight(param_1,param_2,param_3,param_4);

  dVar6 = param_5 + -38.0 + -6.0;

  FUN_002922c0(&_OBJC_CLASS___UIBezierPath);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  dVar4 = dVar6;

  if (22.0 <= dVar6) {

    FUN_00298fc0(0x4036000000000000,0x402e000000000000,uVar1);

  }

  else {

    FUN_00298fc0(0,0x402e000000000000,uVar1);

    if (dVar6 <= 0.0) {

      dVar4 = 0.0;

    }

  }

  FUN_002911c0(dVar4,0x402e000000000000,uVar1);

  FUN_00291100(param_5,0x4047800000000000,param_5 + -30.400000000000002,0x402e000000000000,

               param_5 + -30.400000000000002,0x4047800000000000,uVar1);

  dVar5 = param_5 + 38.0 + 6.0;

  FUN_00291100(dVar5,0x402e000000000000,param_5 + 30.400000000000002,0x4047800000000000,

               param_5 + 30.400000000000002,0x402e000000000000,uVar1);

  dVar4 = dVar3 + -3.0;

  if (dVar3 + -3.0 <= 65.0) {

    dVar4 = 65.0;

  }

  dVar3 = dVar2 + -22.0;

  if (dVar5 <= dVar3) {

    FUN_002911c0(dVar3,0x402e000000000000,uVar1);

    FUN_002912e0(dVar2,0x4042800000000000,dVar2,0x402e000000000000,uVar1);

    FUN_002911c0(dVar2,dVar4 + -22.0,uVar1);

  }

  else {

    FUN_002911c0(dVar2,0x402e000000000000,uVar1);

    FUN_002911c0(dVar2,dVar4 + -22.0,uVar1);

  }

  FUN_002912e0(dVar3,dVar4,dVar2,dVar4,uVar1);

  FUN_002911c0(0x4036000000000000,dVar4,uVar1);

  FUN_002912e0(0,dVar4 + -22.0,0,dVar4,uVar1);

  if (22.0 <= dVar6) {

    FUN_002911c0(0,0x4042800000000000,uVar1);

    FUN_002912e0(0x4036000000000000,0x402e000000000000,0,0x402e000000000000,uVar1);

  }

  else {

    FUN_002911c0(0,0x402e000000000000,uVar1);

  }

  FUN_00292e60(uVar1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




