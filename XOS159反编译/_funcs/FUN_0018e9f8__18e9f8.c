// FUN_0018e9f8 @0x18e9f8


ulong FUN_0018e9f8(undefined8 param_1,ulong param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  cfstringStruct *pcVar4;

  

  _objc_retain();

  if (param_2 < 4) {

    pcVar4 = (cfstringStruct *)(&PTR_cf_aabDashLineStyleOtherLight_0038e2d0)[param_2];

  }

  else {

    pcVar4 = &cf_aabDashLineStyleSelfLight;

  }

  FUN_00299520(param_1,extraout_x1,pcVar4);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_00;

  if (lVar1 == 0) {

    FUN_00299520(param_1,extraout_x1_00,&cf_aabDashLineStyle);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar2 = 0;

    if (lVar1 == 0) goto LAB_0018ead8;

    pcVar4 = &cf_aabDashLineStyle;

    uVar3 = extraout_x1_01;

  }

  uVar2 = FUN_00297480(param_1,uVar3,pcVar4);

  if ((long)uVar2 < 10) {

    if (uVar2 < 10) goto LAB_0018ead8;

  }

  else {

    FUN_001aaf74();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar1 = FUN_00293860();

    _objc_release(uVar3);

    if ((long)(uVar2 - 10) < lVar1) goto LAB_0018ead8;

  }

  uVar2 = 0;

LAB_0018ead8:

  _objc_release(param_1);

  return uVar2;

}




