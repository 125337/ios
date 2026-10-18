// FUN_001762e8 @0x1762e8


void FUN_001762e8(undefined8 param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar7 [16];

  

  _objc_retain();

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar7 = _objc_opt_isKindOfClass(param_2,uVar3);

  if ((auVar7._0_8_ & 1) == 0) {

    uVar3 = 0;

  }

  else {

    FUN_00299540(param_2,auVar7._8_8_,&cf_type);

    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_js;

    if (pcVar4 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar4;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar4);

    iVar2 = FUN_00297820(pcVar1,extraout_x1,&cf_html);

    if (iVar2 == 0) {

      FUN_00299540(param_2,extraout_x1_00,&cf_code);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00172968(param_1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_00299540(param_2,extraout_x1_00,&cf_code);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar6 = auVar7._0_8_;

      FUN_00299540(param_2,auVar7._8_8_,&cf_name);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00174f70(param_1,uVar6,1,uVar5);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar5);

    }

    _objc_release(uVar6);

    _objc_release(pcVar1);

  }

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




