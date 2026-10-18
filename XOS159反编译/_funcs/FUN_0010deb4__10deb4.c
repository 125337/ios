// FUN_0010deb4 @0x10deb4


bool FUN_0010deb4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5,long param_6,undefined8 *param_7)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  bool bVar4;

  undefined8 uVar5;

  

  _objc_retain();

  _objc_retain(param_6);

  bVar4 = false;

  if ((param_5 == 0) || (param_6 == 0)) goto LAB_0010dfe0;

  if (DAT_003e81c8 != -1) {

    FUN_0028f2c4();

  }

  FUN_0010e898(param_5,DAT_003e81c0);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

LAB_0010dfd4:

    bVar4 = false;

  }

  else {

    FUN_002a4880(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    bVar4 = false;

    if (lVar2 != 0) {

      FUN_002a4880(lVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_00295600(lVar1);

      uVar5 = FUN_00293720(uVar3,extraout_x1,param_6);

      *param_7 = uVar5;

      param_7[1] = param_2;

      param_7[2] = param_3;

      param_7[3] = param_4;

      _objc_release(uVar3);

      if ((double)param_7[2] <= 0.0) goto LAB_0010dfd4;

      bVar4 = 0.0 < (double)param_7[3];

    }

  }

  _objc_release(lVar1);

LAB_0010dfe0:

  _objc_release(param_6);

  _objc_release(param_5);

  return bVar4;

}




