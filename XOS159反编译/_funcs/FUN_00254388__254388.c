// FUN_00254388 @0x254388


void FUN_00254388(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  

  _objc_retain();

  if (param_1 == 0) {

    pcVar3 = &cf___;

  }

  else {

    FUN_002a4560(param_1,extraout_x1,&cf__,&cf___);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_1);

    FUN_002a4560(uVar1,extraout_x1_00,&cf__,&cf___);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar1);

    FUN_002a4560(uVar2,extraout_x1_01,&cf_newline_s_,&cf__n);

    pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

  }

  _objc_autoreleaseReturnValue(pcVar3);

  return;

}




