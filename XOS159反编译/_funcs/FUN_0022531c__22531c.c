// FUN_0022531c @0x22531c


bool FUN_0022531c(undefined8 param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  bool bVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  FUN_0022a884(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (DAT_003eb070 != -1) {

    FUN_0028fb6c();

  }

  lVar2 = DAT_003eb068;

  _objc_retain(DAT_003eb068);

  _objc_autorelease(lVar2);

  bVar6 = false;

  if ((lVar1 == 0) || (lVar2 == 0)) goto LAB_00225490;

  auVar7 = _objc_opt_isKindOfClass(lVar1,lVar2);

  if ((auVar7._0_8_ & 1) == 0) {

    bVar6 = false;

    goto LAB_00225490;

  }

  FUN_002a6080(lVar1,auVar7._8_8_,&cf_parentModel);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    uVar3 = 0;

LAB_0022547c:

    bVar6 = false;

  }

  else {

    auVar7 = _objc_opt_respondsToSelector(lVar2,"subViewModels");

    if ((auVar7._0_8_ & 1) == 0) {

      uVar3 = 0;

    }

    else {

      FUN_002a6080(lVar2,auVar7._8_8_,&cf_subViewModels);

      uVar3 = _objc_retainAutoreleasedReturnValue();

    }

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

    if ((uVar5 & 1) == 0) goto LAB_0022547c;

    uVar5 = FUN_00293860(uVar3);

    bVar6 = 1 < uVar5;

  }

  _objc_release(uVar3);

  _objc_release(lVar2);

LAB_00225490:

  _objc_release(lVar1);

  _objc_release(param_1);

  return bVar6;

}




