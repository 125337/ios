// tableView:commitEditingStyle:forRowAtIndexPath: @0x1b45e4


/* Function Stack Size: 0x28 bytes */



void AABCustomDashStyleListViewController::tableView_commitEditingStyle_forRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  _objc_retain(param_3);

  if (param_4 == 1) {

    _objc_retain(param_5);

    lVar2 = FUN_00298060(param_1);

    FUN_001ab458();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_00299020();

    _objc_release(uVar3);

    lVar5 = FUN_0029bae0(param_5);

    _objc_release(param_5);

    auVar6 = FUN_00293860(uVar4);

    if (lVar5 < auVar6._0_8_) {

      FUN_0029b480(uVar4,auVar6._8_8_,lVar5);

      if (lVar2 == 2) {

        FUN_001ab3ac();

      }

      else {

        FUN_001ab038(uVar4);

      }

      iVar1 = FUN_001b4418(lVar5,lVar2);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4a40();

      _objc_release(uVar3);

      if (iVar1 != 0) {

        FUN_0018dc7c();

      }

      FUN_002995c0(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != 0) {

        FUN_002995c0(param_1);

        lVar2 = _objc_retainAutoreleasedReturnValue();

        (**(code **)(lVar2 + 0x10))();

        _objc_release(lVar2);

      }

      _objc_initWeak(auStack_48,param_3);

      local_70 = PTR___NSConcreteStackBlock_003886f0;

      local_68 = 0xc2000000;

      local_60 = FUN_001b47a4;

      puStack_58 = &DAT_0038e4a0;

      _objc_copyWeak(auStack_50,auStack_48);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_70);

      _objc_destroyWeak(auStack_50);

      _objc_destroyWeak(auStack_48);

    }

    _objc_release(uVar4);

  }

  _objc_release(param_3);

  return;

}




