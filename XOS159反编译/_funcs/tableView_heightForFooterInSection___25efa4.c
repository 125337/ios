// tableView:heightForFooterInSection: @0x25efa4


/* Function Stack Size: 0x20 bytes */



double XZYHomeDockCustomStyleListController::tableView_heightForFooterInSection_

                 (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  undefined8 uVar1;

  long lVar2;

  cfstringStruct *pcVar3;

  undefined8 extraout_x1;

  double in_d2;

  double in_d3;

  double dVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined8 local_68;

  undefined8 uStack_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_0024d85c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00293860();

  if (lVar2 == 0) {

    pcVar3 = &cf_fe_IN7h_0pQSN;

  }

  else {

    FUN_00293860(uVar1);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__R_);

    pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  FUN_002925a0(param_3);

  if (in_d2 <= 0.0) {

    dVar4 = *(double *)PTR__UITableViewAutomaticDimension_003884c0;

  }

  else {

    FUN_00259960(0x402a000000000000,0);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    local_68 = *(undefined8 *)PTR__NSFontAttributeName_00388358;

    uStack_60 = auVar5._0_8_;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar5._8_8_,&uStack_60,&local_68,1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    dVar4 = 1.0;

    if (1.0 <= in_d2 + -40.0) {

      dVar4 = in_d2 + -40.0;

    }

    FUN_00292580(dVar4,0x7fefffffffffffff,pcVar3,auVar6._8_8_,3,auVar6._0_8_,0);

    _objc_release(auVar6._0_8_);

    dVar4 = 20.0;

    if (20.0 <= (double)(long)in_d3 + 12.0) {

      dVar4 = (double)(long)in_d3 + 12.0;

    }

    _objc_release(auVar5._0_8_);

  }

  _objc_release(pcVar3);

  _objc_release(uVar1);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return dVar4;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




