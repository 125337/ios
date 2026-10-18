// FUN_0021bc88 @0x21bc88


/* WARNING: Removing unreachable block (ram,0x0021be38) */



void FUN_0021bc88(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  long local_40;

  long local_38;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (((lVar1 != 0) &&

      (_objc_setAssociatedObject(lVar1,&DAT_003eaefc,PTR____kCFBooleanFalse_00388318,1),

      DAT_003eaa30 == '\x01')) && ((DAT_003ead50 & 1) == 0)) {

    _objc_getAssociatedObject(lVar1,&DAT_003eaefa);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar2);

    if ((uVar3 & 1) == 0) {

      FUN_002a6080(lVar1,extraout_x1,&cf_m_tableView);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) {

        _objc_setAssociatedObject(lVar1,&DAT_003eaefb,PTR____kCFBooleanTrue_00388320,1);

        _objc_setAssociatedObject(lVar1,&DAT_003eaefd,0,1);

        _objc_setAssociatedObject(lVar1,&DAT_003ead5c,0,1);

        local_60 = PTR___NSConcreteStackBlock_003886f0;

        local_58 = 0xc2000000;

        local_50 = FUN_0021bed4;

        puStack_48 = &DAT_00388d50;

        _objc_retain(lVar4);

        local_40 = lVar4;

        _objc_retain(lVar1);

        local_38 = lVar1;

        FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_00,&local_60);

        _objc_release(local_38);

        _objc_release(local_40);

        _objc_setAssociatedObject(lVar1,&DAT_003eaefb,PTR____kCFBooleanFalse_00388318,1);

        FUN_0020b734(lVar1,1);

      }

      _objc_release(lVar4);

    }

  }

  _objc_release(lVar1);

  return;

}




