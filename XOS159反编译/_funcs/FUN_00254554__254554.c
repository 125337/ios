// FUN_00254554 @0x254554


void FUN_00254554(long param_1)



{

  undefined8 uVar1;

  cfstringStruct *pcVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar3 [16];

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  

  _objc_retain();

  if (param_1 == 0) {

    pcVar2 = &cf__ffffff;

  }

  else {

    local_38 = 0;

    local_48 = 0;

    local_40 = 0;

    local_50 = 0;

    FUN_00293e40(&_OBJC_CLASS___UITraitCollection);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b8e0(param_1,auVar3._8_8_,auVar3._0_8_);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar3._0_8_);

    FUN_00295ac0(uVar1,extraout_x1,&local_38,&local_40,&local_48,&local_50);

    _objc_release(uVar1);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf___02x_02x_02x);

    pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar2);

  return;

}




