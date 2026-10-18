// viewWillAppear: @0x17e7e0


/* Function Stack Size: 0x14 bytes */



void CadisCustomStyleListViewController::viewWillAppear_(ID param_1,SEL param_2,bool param_3)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  ID local_30;

  class_t *pcStack_28;

  

  pcStack_28 = &objc::class_t::CadisCustomStyleListViewController;

  local_30 = param_1;

  _objc_msgSendSuper2(&local_30,"viewWillAppear:",param_3);

  iVar1 = FUN_0017e04c();

  if (iVar1 != 0) {

    FUN_002995c0(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      FUN_002995c0(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar2 + 0x10))();

      _objc_release(lVar2);

    }

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a120(auVar4._0_8_,auVar4._8_8_,&cf_CadisHeaderNeedsRebuild,0);

    _objc_release(auVar4._0_8_);

    FUN_002a4dc0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar3);

  }

  return;

}




