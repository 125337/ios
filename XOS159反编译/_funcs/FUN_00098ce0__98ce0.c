// FUN_00098ce0 @0x98ce0


void FUN_00098ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined *puVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  (*DAT_003e7848)(param_1,param_2,param_3);

  DAT_003e7a2e = 1;

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

  uVar3 = _objc_opt_isKindOfClass(param_3,uVar2);

  if ((uVar3 & 1) != 0) {

    _objc_retain(param_3);

    _objc_setAssociatedObject(param_3,PTR_LOOP_003e63d8,0,1);

    auVar4 = FUN_000a2fe8(param_1,param_3);

    puVar1 = PTR_LOOP_003e63d0;

    FUN_00299480(&_OBJC_CLASS___NSNumber,auVar4._8_8_,auVar4._0_8_ + 1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_3,puVar1,uVar2,1);

    _objc_release(uVar2);

    puVar1 = PTR_LOOP_003e63c8;

    FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,auVar4._0_8_ + 1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar2,1);

    _objc_release(uVar2);

    FUN_000af840(param_3);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e63e0,0,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e63e8,0,1);

    _objc_release(param_3);

  }

  FUN_0010f6a8();

  _objc_release(param_3);

  return;

}




