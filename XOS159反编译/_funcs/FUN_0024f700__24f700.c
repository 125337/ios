// FUN_0024f700 @0x24f700


void FUN_0024f700(undefined8 param_1,double param_2,double param_3,undefined8 param_4,

                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar5;

  double dVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  _objc_retain(param_8);

  auVar7 = _objc_alloc_init(&_OBJC_CLASS___WKWebViewConfiguration);

  uVar1 = auVar7._0_8_;

  FUN_0029cae0(uVar1,auVar7._8_8_,1);

  FUN_002a24a0(uVar1,extraout_x1,PTR____kCFBooleanFalse_00388318,&cf_drawsBackground);

  auVar7 = _objc_alloc_init(&_OBJC_CLASS___WKUserContentController);

  uVar3 = auVar7._8_8_;

  uVar2 = auVar7._0_8_;

  if (param_8 == 0) {

    lVar5 = 0;

  }

  else {

    auVar7 = _objc_alloc_init(&objc::class_t::XZYDockHTMLBridge);

    lVar5 = auVar7._0_8_;

    FUN_002a1c00(lVar5,auVar7._8_8_,param_8);

    FUN_00291320(uVar2,extraout_x1_00,lVar5,&cf_dockBridge);

    uVar3 = extraout_x1_01;

  }

  FUN_002a23a0(uVar1,uVar3,uVar2);

  auVar7 = _objc_alloc(&_OBJC_CLASS___WKWebView);

  dVar6 = (double)NEON_fminnm(param_3,0x405e000000000000);

  if (param_3 <= 0.0) {

    dVar6 = 0.0;

  }

  uVar3 = FUN_00296bc0(0,-dVar6,param_1,param_2 + dVar6,auVar7._0_8_,auVar7._8_8_,uVar1);

  FUN_0029bee0();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0f80(auVar7._0_8_,auVar7._8_8_,0);

  _objc_release(auVar7._0_8_);

  FUN_0029bee0(uVar3);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d120(auVar7._0_8_,auVar7._8_8_,0);

  _objc_release(auVar7._0_8_);

  FUN_002a23c0(uVar3,extraout_x1_02,1);

  FUN_002a0420(uVar3,extraout_x1_03,0);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar3,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bee0(uVar3);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar7._0_8_,auVar7._8_8_,uVar4);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar4);

  FUN_0029d4a0(uVar3,extraout_x1_04,0);

  FUN_0029bee0(uVar3);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d4a0(auVar7._0_8_,auVar7._8_8_,0);

  _objc_release(auVar7._0_8_);

  if (lVar5 != 0) {

    FUN_002a2680(lVar5,extraout_x1_05,uVar3);

    _objc_setAssociatedObject(uVar3,&PTR_cf_xzyDockHTMLBridgeAssocKey_003e7370,lVar5,1);

  }

  FUN_00253250(param_1,param_2,param_4,param_5,param_6,param_7,param_8);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00298180(uVar3,auVar7._8_8_,auVar7._0_8_,0);

  _objc_unsafeClaimAutoreleasedReturnValue();

  FUN_002542a0(uVar3);

  _objc_release(auVar7._0_8_);

  _objc_release(lVar5);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_8);

  _objc_release(param_4);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




