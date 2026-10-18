// tableView:didSelectRowAtIndexPath: @0x1e6658


/* Function Stack Size: 0x20 bytes */



void XZYChatListGroupingSettingsViewController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined1 auVar8 [16];

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  undefined8 local_70;

  ID IStack_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  lVar1 = FUN_0029c020(param_4);

  if ((lVar1 == 2) && (lVar1 = FUN_0029bae0(param_4), lVar1 == 1)) {

    FUN_002a39a0(param_1);

    goto LAB_001e6b60;

  }

  lVar1 = FUN_0029c020(param_4);

  if ((lVar1 == 2) && ((lVar1 = FUN_0029bae0(param_4), lVar1 == 2 && (1 < DAT_003eaac8 - 5U)))) {

    FUN_002a3a20(param_1);

    goto LAB_001e6b60;

  }

  lVar1 = FUN_0029c020(param_4);

  if ((lVar1 == 2) &&

     (((DAT_003eaa30 == 1 && (DAT_003eaac8 - 1U < 4)) && (lVar1 = FUN_0029bae0(param_4), lVar1 == 3)

      ))) {

    FUN_002a3a00(param_1);

    goto LAB_001e6b60;

  }

  lVar1 = FUN_0029c020(param_4);

  if (lVar1 == 2) {

    lVar1 = FUN_0029bae0(param_4);

    if (DAT_003eaac8 - 5U < 2) {

      lVar4 = 2;

    }

    else {

      lVar4 = 3;

      if ((DAT_003eaac8 - 1U < 6 & DAT_003eaa30) != 0) {

        lVar4 = 4;

      }

    }

    if (lVar1 == lVar4) {

      FUN_002a3ac0(param_1);

      goto LAB_001e6b60;

    }

  }

  lVar1 = FUN_0029c020(param_4);

  if (lVar1 == 2) {

    lVar1 = FUN_0029bae0(param_4);

    if (DAT_003eaac8 - 5U < 2) {

      lVar4 = 3;

    }

    else {

      lVar4 = 4;

      if ((DAT_003eaac8 - 1U < 6 & DAT_003eaa30) != 0) {

        lVar4 = 5;

      }

    }

    if (lVar1 == lVar4) {

      FUN_002a3aa0(param_1);

      goto LAB_001e6b60;

    }

  }

  lVar1 = FUN_0029c020(param_4);

  if ((lVar1 == 2) && (DAT_003eaac8 - 5U < 2)) {

    auVar8 = FUN_0029bae0(param_4);

    if (auVar8._0_8_ != 5) goto LAB_001e695c;

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar8._8_8_,&cf_d__heW_,&cf_d__VU_,1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar8._0_8_;

    FUN_00291400(uVar6,auVar8._8_8_,&PTR___NSConcreteGlobalBlock_0038eec8);

    local_90 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = 0xc2000000;

    local_80 = FUN_001e6d00;

    puStack_78 = &DAT_00388d20;

    _objc_retain(uVar6);

    local_70 = uVar6;

    IStack_68 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_OX_,0,&local_90);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar6,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar6,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    FUN_0029a500(param_1,extraout_x1_02,uVar6,1,0);

    uVar2 = local_70;

  }

  else {

LAB_001e695c:

    lVar1 = FUN_0029c020(param_4);

    if (lVar1 == 4) {

      lVar1 = 3;

      if (DAT_003e70f0 != 0) {

        lVar1 = 4;

      }

      if (DAT_003eaabe == 1) {

        lVar4 = FUN_0029bae0(param_4);

        if (lVar4 == lVar1) {

          FUN_002a34a0(param_1);

          goto LAB_001e6b60;

        }

        lVar1 = 3;

        if (DAT_003e70f0 != 0) {

          lVar1 = 4;

        }

        lVar4 = (ulong)DAT_003eaabe + 1;

      }

      else {

        lVar4 = 1;

      }

      uVar5 = DAT_003eaac8 - 1;

      uVar7 = (ulong)DAT_003eaabf;

      if (((DAT_003eaa30 == 1) && (uVar5 < 4)) && (DAT_003eaabf != 0)) {

        lVar3 = FUN_0029bae0(param_4);

        if (lVar3 == lVar1 + lVar4) {

          FUN_002a39e0(param_1);

          goto LAB_001e6b60;

        }

        uVar7 = (ulong)DAT_003eaabf;

        lVar4 = (ulong)DAT_003eaabe + 1;

        uVar5 = DAT_003eaac8 - 1;

      }

      lVar1 = 4;

      if ((DAT_003e70f0 & 1) != 0) {

        lVar1 = 5;

      }

      if (((((DAT_003eaa30 & 1) != 0) && (uVar5 < 4)) && ((DAT_003eaac0 & 1) != 0)) &&

         (lVar3 = FUN_0029bae0(param_4), lVar3 == lVar1 + lVar4 + uVar7)) {

        FUN_002a39c0(param_1);

      }

      goto LAB_001e6b60;

    }

    lVar1 = FUN_0029c020(param_4);

    if (lVar1 != 3) goto LAB_001e6b60;

    lVar1 = FUN_00293860(DAT_003eaa10);

    lVar4 = FUN_0029bae0(param_4);

    uVar2 = DAT_003eaa10;

    if (lVar1 <= lVar4) {

      FUN_002a2f60(param_1);

      goto LAB_001e6b60;

    }

    auVar8 = FUN_0029bae0(param_4);

    FUN_00299500(uVar2,auVar8._8_8_,auVar8._0_8_);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar8._0_8_;

    FUN_00299540(uVar6,auVar8._8_8_,&cf_id);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar8._0_8_;

    lVar1 = FUN_002991c0(param_1,auVar8._8_8_,uVar2);

    if (lVar1 != 0) {

      FUN_002990e0(param_1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029aa80(auVar8._0_8_,auVar8._8_8_,lVar1,1);

      _objc_release(auVar8._0_8_);

    }

    _objc_release(lVar1);

  }

  _objc_release(uVar2);

  _objc_release(uVar6);

LAB_001e6b60:

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




