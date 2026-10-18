// FUN_00187bc8 @0x187bc8


undefined8 FUN_00187bc8(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  

  FUN_00187694();

  if ((DAT_003e8d31 == '\x01') && ((DAT_003e8d32 & 1) != 0)) {

    FUN_002a6080(param_1,extraout_x1,&cf_selectedAssetInfos);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if ((lVar1 == 0) || (lVar2 = FUN_00293860(lVar1), lVar2 == 0)) {

      uVar3 = (*DAT_003e8cf0)(param_1,param_2);

      _objc_release(lVar1);

    }

    else {

      _objc_release(lVar1);

      uVar3 = 0;

    }

    return uVar3;

  }

                    /* WARNING: Could not recover jumptable at 0x00187c60. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar3 = (*DAT_003e8cf0)(param_1,param_2);

  return uVar3;

}




