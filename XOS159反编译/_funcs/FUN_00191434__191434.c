// FUN_00191434 @0x191434


bool FUN_00191434(long param_1)



{

  bool bVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = FUN_0019ec90(param_1);

  if ((uVar2 & 1) == 0) {

    bVar1 = false;

  }

  else if ((DAT_003e95d0 == 0) ||

          (auVar6 = _objc_opt_isKindOfClass(param_1), (auVar6._0_8_ & 1) == 0)) {

    bVar1 = true;

  }

  else {

    FUN_002a6080(param_1,auVar6._8_8_,&cf_parentModel);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if ((lVar3 == 0) ||

       (auVar6 = _objc_opt_respondsToSelector(lVar3,"subViewModels"), (auVar6._0_8_ & 1) == 0)) {

      bVar1 = true;

    }

    else {

      FUN_002a6080(lVar3,auVar6._8_8_,&cf_subViewModels);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar5 = FUN_00293860();

      if (lVar5 == 0) {

        bVar1 = true;

      }

      else {

        FUN_00295440(uVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        bVar1 = lVar5 == param_1;

        _objc_release();

      }

      _objc_release(uVar4);

    }

    _objc_release(lVar3);

  }

  _objc_release(param_1);

  return bVar1;

}




