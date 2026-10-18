// FUN_00136e24 @0x136e24


void FUN_00136e24(void)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined8 local_40;

  double local_38;

  double local_30;

  double dStack_28;

  

  FUN_00136db8();

  auVar2 = _objc_retainAutoreleasedReturnValue();

  local_30 = 0.0;

  dStack_28 = 0.0;

  local_40 = 0;

  local_38 = 0.0;

  FUN_00295ac0(auVar2._0_8_,auVar2._8_8_,&dStack_28,&local_30,&local_38,&local_40);

  if (0.5 < local_30 * 0.587 + dStack_28 * 0.299 + local_38 * 0.114) {

    FUN_00292400(&_OBJC_CLASS___UIColor);

    uVar1 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a64a0();

    uVar1 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(auVar2._0_8_);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




