// FUN_0001ce48 @0x1ce48


undefined8 FUN_0001ce48(undefined8 param_1,ulong param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  cfstringStruct *pcVar3;

  

  _objc_retain();

  if (param_2 < 4) {

    pcVar3 = (cfstringStruct *)

             (&PTR_cf_mesMsgMergeWrapReferDividerStyleOtherLight_0038b8b0)[param_2];

  }

  else {

    pcVar3 = &cf_mesMsgMergeWrapReferDividerStyleSelfLight;

  }

  FUN_00299520(param_1,extraout_x1,pcVar3);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar2 = extraout_x1_00;

  if (lVar1 == 0) {

    FUN_00299520(param_1,extraout_x1_00,&cf_mesMsgMergeWrapReferDividerStyle);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar2 = 0;

    if (lVar1 == 0) goto LAB_0001cee0;

    pcVar3 = &cf_mesMsgMergeWrapReferDividerStyle;

    uVar2 = extraout_x1_01;

  }

  uVar2 = FUN_00297480(param_1,uVar2,pcVar3);

LAB_0001cee0:

  _objc_release(param_1);

  return uVar2;

}




