// FUN_0023d02c @0x23d02c


void FUN_0023d02c(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined1 auVar4 [16];

  

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7258);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar4._0_8_,auVar4._8_8_,&DAT_00002455);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

  uVar2 = uVar1;

  if ((uVar3 & 1) == 0) {

    uVar2 = 0;

  }

  _objc_retain(uVar2);

  _objc_release(uVar1);

  _objc_release(auVar4._0_8_);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




