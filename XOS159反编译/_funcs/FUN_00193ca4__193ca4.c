// FUN_00193ca4 @0x193ca4


void FUN_00193ca4(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined1 auVar5 [16];

  

  (*DAT_003e9600)();

  FUN_0018da3c();

  if (DAT_003e95c8 != '\x01') {

    return;

  }

  _objc_retain(param_1);

  if (param_1 != 0) {

    auVar5 = _objc_opt_respondsToSelector(param_1,"getTableView");

    uVar3 = auVar5._8_8_;

    if ((auVar5._0_8_ & 1) == 0) {

LAB_00193d18:

      FUN_002a6080(param_1,uVar3,&cf_m_tableView);

      lVar2 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_00299c80(param_1,uVar3,"getTableView");

      auVar5 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar5._8_8_;

      lVar2 = auVar5._0_8_;

      if (lVar2 == 0) goto LAB_00193d18;

    }

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

    lVar1 = lVar2;

    if ((uVar4 & 1) == 0) {

      lVar1 = 0;

    }

    _objc_retain(lVar1);

    _objc_release(lVar2);

    _objc_release(param_1);

    if (lVar1 != 0) {

      FUN_0019f1fc(lVar2);

      goto LAB_00193d90;

    }

  }

  lVar2 = 0;

LAB_00193d90:

  _objc_release(lVar2);

  return;

}




