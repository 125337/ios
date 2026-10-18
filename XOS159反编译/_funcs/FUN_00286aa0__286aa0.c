// FUN_00286aa0 @0x286aa0


void FUN_00286aa0(undefined8 param_1,long *param_2)



{

  undefined *puVar1;

  undefined *puVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar8;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar9;

  undefined1 auVar10 [16];

  

  _objc_retain();

  FUN_00286d88(&cf_CABackdropLayer);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    lVar9 = 0;

  }

  else {

    FUN_0028c200(&cf_gaussianBlur);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0028c200(&cf_colorSaturate);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) {

      lVar9 = 0;

    }

    else {

      FUN_00287004(lVar6,&cf_xzyDockOpticalSaturation,&cf_name);

      FUN_00287004(lVar6,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf810,&cf_inputAmount);

      FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      uVar8 = auVar10._8_8_;

      uVar7 = auVar10._0_8_;

      if (lVar5 != 0) {

        FUN_00287004(lVar5,&cf_xzyDockOpticalBlur,&cf_name);

        FUN_00287004(lVar5,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf820,&cf_inputRadius);

        FUN_00287004(lVar5,PTR____kCFBooleanTrue_00388320,&cf_inputNormalizeEdges);

        FUN_00287004(lVar5,PTR____kCFBooleanFalse_00388318,&cf_enabled);

        FUN_00291240(uVar7,extraout_x1,lVar5);

        uVar8 = extraout_x1_00;

      }

      FUN_00291240(uVar7,uVar8,lVar6);

      iVar3 = FUN_00287004(lVar4,uVar7,&cf_filters);

      if (iVar3 == 0) {

        lVar9 = 0;

      }

      else {

        FUN_0029fe60(lVar4,extraout_x1_01,&cf_XZYDockOpticalBackdropSource);

        FUN_0029f960(lVar4,extraout_x1_02,1);

        FUN_00286f8c(lVar4);

        puVar2 = PTR____kCFBooleanTrue_00388320;

        FUN_00287004(lVar4,PTR____kCFBooleanTrue_00388320,&cf_enabled);

        FUN_00287004(lVar4,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf810,&cf_scale);

        FUN_00287004(lVar4,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf820,&cf_marginWidth);

        puVar1 = PTR____kCFBooleanFalse_00388318;

        FUN_00287004(lVar4,PTR____kCFBooleanFalse_00388318,&cf_ignoresScreenClip);

        FUN_00287004(lVar4,puVar1,&cf_allowsInPlaceFiltering);

        FUN_00287004(lVar4,puVar1,&cf_captureOnly);

        FUN_00287004(lVar4,puVar1,&cf_allowsBackdropGroups);

        FUN_00287004(lVar4,puVar1,&cf_disablesOccludedBackdropBlurs);

        FUN_00287004(lVar4,puVar2,&cf_windowServerAware);

        FUN_00287004(lVar4,param_1,&cf_groupName);

        FUN_00287004(lVar4,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf820,&cf_zoom);

        _objc_retainAutorelease(lVar5);

        *param_2 = lVar5;

        _objc_retain(lVar4);

        lVar9 = lVar4;

      }

      _objc_release(uVar7);

    }

    _objc_release(lVar6);

    _objc_release(lVar5);

  }

  _objc_release(lVar4);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar9);

  return;

}




