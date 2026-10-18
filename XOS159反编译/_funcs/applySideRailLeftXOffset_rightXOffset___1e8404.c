// applySideRailLeftXOffset:rightXOffset: @0x1e8404


/* Function Stack Size: 0x20 bytes */



void XZYChatListGroupingSettingsViewController::applySideRailLeftXOffset_rightXOffset_

               (ID param_1,SEL param_2,double param_3,double param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  double dVar4;

  double dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined8 local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  dVar4 = -120.0;

  if (-120.0 <= param_3) {

    dVar4 = param_3;

  }

  dVar5 = 120.0;

  if (dVar4 <= 120.0) {

    dVar5 = dVar4;

  }

  dVar4 = -120.0;

  if (-120.0 <= param_4) {

    dVar4 = param_4;

  }

  dVar6 = 120.0;

  if (dVar4 <= 120.0) {

    dVar6 = dVar4;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar7._0_8_;

  if (0.01 <= ABS(dVar5)) {

    FUN_0029de20(dVar5,uVar2,auVar7._8_8_,&cf_xzyChatListGroupingSideRailLeftXOffset);

    uVar3 = extraout_x1_00;

  }

  else {

    dVar5 = 0.0;

    FUN_0029b4a0(uVar2,auVar7._8_8_,&cf_xzyChatListGroupingSideRailLeftXOffset);

    uVar3 = extraout_x1;

  }

  if (0.01 <= ABS(dVar6)) {

    FUN_0029de20(dVar6,uVar2,uVar3,&cf_xzyChatListGroupingSideRailRightXOffset);

  }

  else {

    dVar6 = 0.0;

    FUN_0029b4a0(uVar2,uVar3,&cf_xzyChatListGroupingSideRailRightXOffset);

  }

  FUN_001e77e8(&cf_xzyChatListGroupingSideRailLeftXOffset);

  FUN_001e77e8(&cf_xzyChatListGroupingSideRailRightXOffset);

  DAT_003eaad8 = dVar5;

  DAT_003eaae0 = dVar6;

  if ((DAT_003eaa30 == '\x01') && (DAT_003eaac8 - 1U < 6)) {

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,extraout_x1_01,3,2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4dc0(param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    local_60 = uVar3;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar7._8_8_,&local_60,1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b1a0(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_,5);

    _objc_release(auVar8._0_8_);

    _objc_release(auVar7._0_8_);

    _objc_release(uVar3);

  }

  iVar1 = FUN_00297960(&_OBJC_CLASS___NSThread);

  if (iVar1 == 0) {

    _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038f308);

  }

  else {

    FUN_002147b4();

  }

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




