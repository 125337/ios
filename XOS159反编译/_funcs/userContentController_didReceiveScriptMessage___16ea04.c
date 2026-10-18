// userContentController:didReceiveScriptMessage: @0x16ea04


/* Function Stack Size: 0x20 bytes */



void CadisHTMLCalendarHapticMessageHandler::userContentController_didReceiveScriptMessage_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  long lVar10;

  undefined8 uVar11;

  undefined1 auVar12 [16];

  

  _objc_retain(param_4);

  FUN_00299040(param_4);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00297820(auVar12._0_8_,auVar12._8_8_,&cf_cadisHaptic);

  _objc_release(auVar12._0_8_);

  if ((uVar2 & 1) == 0) goto LAB_0016ec9c;

  FUN_00292460(param_4);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  uVar2 = _objc_opt_isKindOfClass(lVar3,uVar4);

  if ((uVar2 & 1) == 0) {

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar2 = _objc_opt_isKindOfClass(lVar3,uVar4);

    if ((uVar2 & 1) == 0) {

      uVar8 = 0xbf800000;

      uVar4 = 0x3eb33333;

      uVar7 = 0xbf800000;

      uVar6 = 0xbf800000;

      lVar10 = 0;

    }

    else {

      _objc_retain(lVar3);

      uVar11 = 0x3f000000;

      uVar6 = 0xbf800000;

      uVar4 = 0x3eb33333;

      uVar7 = 0xbf800000;

      uVar8 = 0xbf800000;

      uVar9 = extraout_x1_01;

      lVar10 = lVar3;

      if (lVar3 != 0) goto LAB_0016ec64;

    }

LAB_0016ec78:

    FUN_001c0908(uVar4,uVar6,uVar7,uVar8);

  }

  else {

    _objc_retain(lVar3);

    FUN_00299540(lVar3,extraout_x1,&cf_type);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

    auVar12 = _objc_opt_isKindOfClass(lVar5,uVar4);

    uVar4 = auVar12._8_8_;

    if ((auVar12._0_8_ & 1) == 0) {

      lVar10 = 0;

    }

    else {

      _objc_retain(lVar5);

      uVar4 = extraout_x1_00;

      lVar10 = lVar5;

    }

    FUN_00299540(lVar3,uVar4,&cf_intensity);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_0016edd4(0x3eb33333);

    _objc_release(uVar6);

    FUN_00299540(lVar3,extraout_x1_02,&cf_bass);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_0016edd4(0xbf800000);

    _objc_release(uVar7);

    FUN_00299540(lVar3,extraout_x1_03,&cf_mid);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_0016edd4(0xbf800000);

    _objc_release(uVar8);

    FUN_00299540(lVar3,extraout_x1_04,&cf_high);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar8 = FUN_0016edd4(0xbf800000);

    _objc_release(uVar9);

    FUN_00299540(lVar3,extraout_x1_05,&cf_sharpness);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar11 = FUN_0016edd4(0x3f000000);

    _objc_release(uVar9);

    _objc_release(lVar5);

    _objc_release(lVar3);

    uVar9 = extraout_x1_06;

    if (lVar10 == 0) goto LAB_0016ec78;

LAB_0016ec64:

    iVar1 = FUN_00297820(lVar10,uVar9,&cf_pulse);

    if (iVar1 != 0) goto LAB_0016ec78;

    iVar1 = FUN_00297820(lVar10,extraout_x1_07,&cf_kick);

    if (iVar1 == 0) {

      iVar1 = FUN_00297820(lVar10,extraout_x1_08,&cf_start);

      if (iVar1 == 0) {

        iVar1 = FUN_00297820(lVar10,extraout_x1_09,&cf_stop);

        if (iVar1 == 0) {

          iVar1 = FUN_00297820(lVar10,extraout_x1_10,&cf_autoOn);

          if (iVar1 == 0) {

            iVar1 = FUN_00297820(lVar10,extraout_x1_11,&cf_autoOff);

            if (iVar1 != 0) {

              FUN_00169578();

            }

          }

          else {

            FUN_0016a1d0();

          }

        }

        else {

          thunk_FUN_001bfa90();

        }

      }

      else {

        FUN_001bfaec();

      }

    }

    else {

      FUN_001bfed4(uVar4,uVar11);

    }

  }

  _objc_release(lVar10);

  _objc_release(lVar3);

LAB_0016ec9c:

  _objc_release(param_4);

  return;

}




