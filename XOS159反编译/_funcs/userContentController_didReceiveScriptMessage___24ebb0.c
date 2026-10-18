// userContentController:didReceiveScriptMessage: @0x24ebb0


/* Function Stack Size: 0x20 bytes */



void XZYDockHTMLBridge::userContentController_didReceiveScriptMessage_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar8 [16];

  

  _objc_retain(param_4);

  FUN_00299040(param_4);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00297820(auVar8._0_8_,auVar8._8_8_,&cf_dockBridge);

  _objc_release(auVar8._0_8_);

  if ((uVar2 & 1) == 0) goto LAB_0024ee30;

  FUN_00292460(param_4);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar8 = _objc_opt_isKindOfClass(uVar3,uVar4);

  if ((auVar8._0_8_ & 1) != 0) {

    FUN_00299540(uVar3,auVar8._8_8_,&cf_type);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar8._0_8_;

    iVar1 = FUN_00297820(uVar4,auVar8._8_8_,&cf_tapTab);

    if (iVar1 == 0) {

      iVar1 = FUN_00297820(uVar4,extraout_x1,&cf_togglePopup);

      if (iVar1 == 0) {

        iVar1 = FUN_00297820(uVar4,extraout_x1_01,&cf_search);

        if (iVar1 != 0) {

          FUN_002a4d20(param_1);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar7 != 0) {

            FUN_002a4d20(param_1);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_0023fafc();

            _objc_release(uVar5);

          }

          FUN_002a6440(param_1);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar7 != 0) {

            FUN_002a6440(param_1);

            auVar8 = _objc_retainAutoreleasedReturnValue();

            uVar5 = auVar8._0_8_;

            FUN_00294e20(uVar5,auVar8._8_8_,

                         &

                         cf_window_dockSelectTab__window_dockSelectTab__1__window_dockApplyCurrentBadgeTheme__window_dockApplyCurrentBadgeTheme___

                         ,0);

            goto LAB_0024ee18;

          }

        }

      }

      else {

        FUN_002a4d20(param_1);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar7 != 0) {

          FUN_002a4d20(param_1);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_00234210();

          goto LAB_0024ee18;

        }

      }

    }

    else {

      FUN_00299540(uVar3,extraout_x1,&cf_index);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002974a0();

      _objc_release(uVar5);

      FUN_002a4d20(param_1);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar7 != 0) {

        FUN_002a4d20(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00233b10(uVar5,uVar6);

        _objc_release(uVar5);

      }

      FUN_002a6440(param_1);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar7 != 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,

                     &

                     cf_window_dockSelectTab__window_dockSelectTab__ld__window_dockApplyCurrentBadgeTheme__window_dockApplyCurrentBadgeTheme___

                    );

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a6440(param_1);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00294e20(auVar8._0_8_,auVar8._8_8_,uVar5,0);

        _objc_release(auVar8._0_8_);

LAB_0024ee18:

        _objc_release(uVar5);

      }

    }

    _objc_release(uVar4);

  }

  _objc_release(uVar3);

LAB_0024ee30:

  _objc_release(param_4);

  return;

}




