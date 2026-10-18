// FUN_00084490 @0x84490


undefined8

FUN_00084490(undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,long param_5,

            undefined8 *param_6)



{

  uint uVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  

  _objc_retain();

  if (param_5 == 0) {

    uVar4 = 0;

    goto LAB_0008450c;

  }

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6400);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

LAB_000844f8:

    uVar4 = 0;

  }

  else {

    uVar5 = FUN_00290aa0(lVar2);

    uVar3 = _CGRectIsNull();

    if ((uVar3 & 1) != 0) goto LAB_000844f8;

    uVar1 = _CGRectIsInfinite(uVar5,param_2,param_3,param_4);

    uVar4 = 0;

    if (param_3 <= 0.0) {

      uVar1 = 1;

    }

    if (((uVar1 & 1) == 0) && (0.0 < param_4)) {

      if (param_6 == (undefined8 *)0x0) {

        uVar4 = 1;

      }

      else {

        *param_6 = uVar5;

        param_6[1] = param_2;

        uVar4 = 1;

        param_6[2] = param_3;

        param_6[3] = param_4;

      }

    }

  }

  _objc_release(lVar2);

LAB_0008450c:

  _objc_release(param_5);

  return uVar4;

}




