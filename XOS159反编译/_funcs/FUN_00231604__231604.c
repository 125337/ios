// FUN_00231604 @0x231604


void FUN_00231604(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined8 local_40;

  undefined8 local_38;

  

  _objc_retain();

  _objc_retain(param_2);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_00237548;

  puStack_48 = &DAT_0038df90;

  local_40 = param_2;

  local_38 = param_1;

  _objc_retain(param_1);

  _objc_retain(param_2);

  FUN_00293000(&_OBJC_CLASS___UIColor,extraout_x1,&local_60);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(local_38);

  _objc_release(local_40);

  _objc_release(param_1);

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




