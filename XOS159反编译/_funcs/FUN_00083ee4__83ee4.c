// FUN_00083ee4 @0x83ee4


bool FUN_00083ee4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5,undefined8 *param_6)



{

  long lVar1;

  bool bVar2;

  undefined8 uVar3;

  double dVar4;

  

  _objc_retain();

  if (param_5 == 0) {

    bVar2 = false;

  }

  else {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6340);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 == 0) {

      bVar2 = false;

    }

    else {

      uVar3 = FUN_00290aa0(lVar1);

      dVar4 = (double)NEON_fminnm(param_3,param_4);

      bVar2 = 0.0 < dVar4;

      if ((param_6 != (undefined8 *)0x0) && (0.0 < dVar4)) {

        *param_6 = uVar3;

        param_6[1] = param_2;

        bVar2 = true;

        param_6[2] = param_3;

        param_6[3] = param_4;

      }

    }

    _objc_release(lVar1);

  }

  _objc_release(param_5);

  return bVar2;

}




