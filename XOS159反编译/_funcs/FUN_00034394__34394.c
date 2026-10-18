// FUN_00034394 @0x34394


void FUN_00034394(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined1 auVar5 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3ef);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((uVar4 & 1) != 0) {

      FUN_0029b140(lVar3);

    }

  }

  _objc_release(lVar3);

  return;

}




