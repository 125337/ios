// FUN_00155348 @0x155348


void FUN_00155348(undefined8 param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  long local_b0;

  undefined8 uStack_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  long local_80;

  undefined8 uStack_78;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_beS7h_,0,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar7 = FUN_00138258();

  uVar3 = auVar7._8_8_;

  lVar6 = 0;

  do {

    FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be7e8,uVar3,lVar6);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    if (auVar7._0_8_ == lVar6) {

      FUN_002a44a0(auVar8._0_8_,auVar8._8_8_,&cf_space_s_);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar8._0_8_);

      auVar8._8_8_ = extraout_x1;

      auVar8._0_8_ = uVar3;

    }

    local_a0 = PTR___NSConcreteStackBlock_003886f0;

    local_98 = 0xc0000000;

    local_90 = FUN_00165f20;

    puStack_88 = &DAT_0038d668;

    local_80 = lVar6;

    uStack_78 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar8._8_8_,auVar8._0_8_,0,&local_a0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(auVar8._0_8_);

    lVar6 = lVar6 + 1;

    uVar3 = extraout_x1_00;

  } while (lVar6 != 10);

  FUN_00167d7c();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  for (lVar6 = 0; auVar8 = FUN_00293860(uVar3), lVar6 < auVar8._0_8_; lVar6 = lVar6 + 1) {

    FUN_00299500(uVar3,auVar8._8_8_,lVar6);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar8._0_8_,auVar8._8_8_,&cf_name);

    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf__g_TT;

    if (pcVar4 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar4;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar4);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__IN_);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    if (auVar7._0_8_ == lVar6 + 10) {

      FUN_002a44a0(auVar9._0_8_,auVar9._8_8_,&cf_space_s_);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar9._0_8_);

      auVar9._8_8_ = extraout_x1_02;

      auVar9._0_8_ = uVar5;

    }

    local_d0 = PTR___NSConcreteStackBlock_003886f0;

    local_c8 = 0xc0000000;

    local_c0 = FUN_00165fa4;

    puStack_b8 = &DAT_0038d668;

    local_b0 = lVar6;

    uStack_a8 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar9._8_8_,auVar9._0_8_,0,&local_d0);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(pcVar1);

    _objc_release(auVar8._0_8_);

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar8._8_8_,&cf_Sm,1,0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar2,1,0);

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




