// FUN_0019f170 @0x19f170


void FUN_0019f170(void)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  

  FUN_002a4880();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  while (lVar1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar3 = _objc_opt_isKindOfClass(lVar1,uVar2);

    if ((uVar3 & 1) != 0) break;

    FUN_002a4880(lVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar1);

    lVar1 = lVar4;

  }

  _objc_autoreleaseReturnValue(lVar1);

  return;

}




