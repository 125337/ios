// FUN_0018eb20 @0x18eb20


ulong FUN_0018eb20(undefined8 param_1,ulong param_2)



{

  bool bVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  cfstringStruct *pcVar5;

  

  _objc_retain();

  if (param_2 < 4) {

    pcVar5 = (cfstringStruct *)(&PTR_cf_aabGuideLineStyleOtherLight_0038e2f0)[param_2];

  }

  else {

    pcVar5 = &cf_aabGuideLineStyleSelfLight;

  }

  FUN_00299520(param_1,extraout_x1,pcVar5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == 0) {

    uVar3 = 9;

  }

  else {

    uVar3 = FUN_00297480(param_1,extraout_x1_00,pcVar5);

    bVar1 = uVar3 < 10 || uVar3 - 100 < 0xc;

    if (0xffffffffffffffa5 < uVar3 - 100) {

      FUN_001ab458(2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar2 = FUN_00293860();

      bVar1 = (long)(uVar3 - 10) < lVar2;

      _objc_release(uVar4);

    }

    if (!bVar1) {

      uVar3 = 9;

    }

  }

  _objc_release(param_1);

  return uVar3;

}




