// injectToSettingView:title:version:selector: @0xe20c0


/* Function Stack Size: 0x30 bytes */



void WeChatPluginHelperV2::injectToSettingView_title_version_selector_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,SEL param_6)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  FUN_002a6080(param_3,extraout_x1,&cf_m_tableViewMgr);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _NSClassFromString(&cf_WCTableViewSectionManager);

  FUN_00294260();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295b80(lVar1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((DAT_003e7d78 & 1) == 0) {

    _objc_getAssociatedObject(param_3,PTR_LOOP_003e66e0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar5 = FUN_002924e0();

    _objc_release(uVar4);

    if (((((uVar5 & 1) == 0) && (lVar1 != 0)) && (lVar2 != 0)) && (lVar3 != 0)) {

      auVar6 = _NSClassFromString(&cf_WCTableViewNormalCellManager);

      FUN_00299280(auVar6._0_8_,auVar6._8_8_,param_6,param_3,param_4,param_5,0);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00291080(lVar2,auVar6._8_8_,auVar6._0_8_);

      FUN_00297040(lVar1,extraout_x1_00,lVar2,0);

      _objc_setAssociatedObject(param_3,PTR_LOOP_003e66e0,PTR____kCFBooleanTrue_00388320,1);

      FUN_0029b140(lVar3);

      _objc_release(auVar6._0_8_);

    }

  }

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(lVar1);

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




