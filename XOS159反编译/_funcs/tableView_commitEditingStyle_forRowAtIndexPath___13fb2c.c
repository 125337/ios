// tableView:commitEditingStyle:forRowAtIndexPath: @0x13fb2c


/* Function Stack Size: 0x28 bytes */



void CadisCardImageManagerViewController::tableView_commitEditingStyle_forRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)



{

  int iVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar8 [16];

  ID local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_5);

  if (((param_4 != 1) || (lVar3 = FUN_0029c020(param_5), lVar3 != 1)) ||

     (lVar3 = FUN_0029bae0(param_5), lVar3 < 1)) goto LAB_0013fd68;

  FUN_00292a00(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  auVar8 = FUN_0029bae0(param_5);

  FUN_00299500(uVar4,auVar8._8_8_,auVar8._0_8_ + -1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  FUN_0013e1a0();

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar8._0_8_,auVar8._8_8_,uVar5);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b3c0(auVar8._0_8_,auVar8._8_8_,uVar6,0);

  _objc_release(auVar8._0_8_);

  FUN_00136588();

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar8._0_8_;

  FUN_002a45e0(uVar7,auVar8._8_8_,&cf_CadisSelectedCardLight);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_00297820(uVar5,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  uVar4 = extraout_x1;

  if (iVar1 != 0) {

    FUN_0029b4a0(uVar7,extraout_x1,&cf_CadisSelectedCardLight);

    uVar4 = extraout_x1_00;

  }

  FUN_002a45e0(uVar7,uVar4,&cf_CadisSelectedCardDark);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_00297820(uVar5,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  if (iVar2 == 0) {

    if (iVar1 != 0) goto LAB_0013fcdc;

  }

  else {

    FUN_0029b4a0(uVar7,extraout_x1_01,&cf_CadisSelectedCardDark);

LAB_0013fcdc:

    FUN_0013fe6c();

    FUN_00136604();

  }

  FUN_00292a00(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  auVar8 = FUN_0029bae0(param_5);

  FUN_0029b480(uVar4,auVar8._8_8_,auVar8._0_8_ + -1);

  _objc_release(uVar4);

  local_70 = param_5;

  FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_02,&local_70,1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002943a0(param_3,auVar8._8_8_,auVar8._0_8_,100);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

LAB_0013fd68:

  _objc_release(param_5);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




