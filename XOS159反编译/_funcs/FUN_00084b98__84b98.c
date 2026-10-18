// FUN_00084b98 @0x84b98


void FUN_00084b98(long param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  

  _objc_retain();

  _objc_retain(param_1);

  lVar4 = param_1;

  if (param_1 == 0) {

    lVar3 = 0;

  }

  else {

    do {

      uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar2 = _objc_opt_isKindOfClass(lVar4,uVar1);

      lVar3 = lVar4;

      if ((uVar2 & 1) != 0) break;

      FUN_002a4880(lVar4);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar4);

      lVar4 = lVar3;

    } while (lVar3 != 0);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

}




