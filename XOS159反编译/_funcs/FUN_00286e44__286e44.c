// FUN_00286e44 @0x286e44


uint FUN_00286e44(long param_1,long param_2)



{

  undefined *puVar1;

  uint uVar2;

  uint uVar3;

  uint uVar4;

  uint uVar5;

  uint uVar6;

  uint uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  

  uVar2 = 0;

  if ((param_1 != 0) && (param_2 != 0)) {

    _objc_retain(param_2);

    _objc_retain(param_1);

    FUN_0029f960(param_1,extraout_x1,1);

    FUN_002987e0(&_OBJC_CLASS___UIScreen);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bda0();

    FUN_0029d7e0(param_1);

    _objc_release(uVar8);

    uVar2 = FUN_00287004(param_1,param_2,&cf_sourceLayer);

    _objc_release(param_2);

    uVar3 = FUN_00287004(param_1,PTR____kCFBooleanTrue_00388320,&cf_hidesSourceLayer);

    puVar1 = PTR____kCFBooleanFalse_00388318;

    uVar4 = FUN_00287004(param_1,PTR____kCFBooleanFalse_00388318,&cf_allowsBackdropGroups);

    uVar5 = FUN_00287004(param_1,puVar1,&cf_matchesPosition);

    uVar6 = FUN_00287004(param_1,puVar1,&cf_matchesTransform);

    uVar7 = FUN_00287004(param_1,puVar1,&cf_matchesOpacity);

    uVar2 = uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7;

    FUN_00287004(param_1,puVar1,&cf_crossDisplay);

    _objc_release(param_1);

  }

  return uVar2;

}




