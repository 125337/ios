// tableView:commitEditingStyle:forRowAtIndexPath: @0x180984


/* Function Stack Size: 0x28 bytes */



void CadisCustomStyleListViewController::tableView_commitEditingStyle_forRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_5);

  if (param_4 != 1) goto LAB_00180ac8;

  FUN_00167d7c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  _objc_release(uVar1);

  lVar3 = FUN_0029bae0(param_5);

  auVar5 = FUN_00293860(uVar2);

  if (lVar3 < auVar5._0_8_) {

    FUN_0029b480(uVar2,auVar5._8_8_,lVar3);

    FUN_0017247c(uVar2);

    lVar4 = FUN_00138258();

    if (lVar4 == lVar3 + 10) {

      FUN_00136588();

      auVar5 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar5._0_8_;

      FUN_0029efa0(uVar1,auVar5._8_8_,0,&cf_CadisCalendarStyle);

LAB_00180a6c:

      _objc_release(uVar1);

    }

    else if (lVar3 + 10 < lVar4) {

      FUN_00136588();

      auVar5 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar5._0_8_;

      FUN_0029efa0(uVar1,auVar5._8_8_,lVar4 + -1,&cf_CadisCalendarStyle);

      goto LAB_00180a6c;

    }

    FUN_00136604();

    FUN_002995c0(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 != 0) {

      FUN_002995c0(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar3 + 0x10))();

      _objc_release(lVar3);

    }

    FUN_0029b140(param_3);

  }

  _objc_release(uVar2);

LAB_00180ac8:

  _objc_release(param_5);

  _objc_release(param_3);

  return;

}




