// FUN_00212f28 @0x212f28


void FUN_00212f28(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  long local_40;

  long local_38;

  

  auVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  lVar1 = auVar3._0_8_;

  if (((lVar1 != 0) && ((DAT_003eaa30 & 1) != 0)) && ((DAT_003ead50 & 1) == 0)) {

    FUN_002a6080(lVar1,auVar3._8_8_,&cf_m_tableView);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      _objc_setAssociatedObject(lVar1,&DAT_003ead5c,0,1);

      local_60 = PTR___NSConcreteStackBlock_003886f0;

      local_58 = 0xc2000000;

      local_50 = FUN_00213084;

      puStack_48 = &DAT_00388d50;

      _objc_retain(lVar2);

      local_40 = lVar2;

      _objc_retain(lVar1);

      local_38 = lVar1;

      FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1,&local_60);

      FUN_0020b734(lVar1,1);

      _objc_release(local_38);

      _objc_release(local_40);

      _objc_release(lVar2);

    }

  }

  _objc_release(lVar1);

  return;

}




