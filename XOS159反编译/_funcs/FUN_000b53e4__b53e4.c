// FUN_000b53e4 @0xb53e4


void FUN_000b53e4(long param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  

  FUN_002a6080(*(undefined8 *)(param_1 + 0x20),param_2,&cf_m_tableView);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar3 = _objc_opt_isKindOfClass(lVar1,uVar2);

    if ((uVar3 & 1) != 0) {

      FUN_0029b140(lVar1);

    }

  }

  _objc_release(lVar1);

  return;

}




