// dockEditor_save @0x25a8d4


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockCustomStyleEditorViewController::dockEditor_save(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  cfstringStruct *pcVar8;

  undefined1 auVar9 [16];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined8 local_58;

  cfstringStruct *local_50;

  ID IStack_48;

  

  FUN_00292ec0();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  auVar9 = FUN_00297fa0(uVar2);

  if (auVar9._0_8_ == 0) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,&cf_Nx_Nzz,&cf_eQ7h_Nx,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    pcVar8 = auVar9._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar9._8_8_,&cf_nx_,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(pcVar8,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_01,pcVar8,1,0);

    goto LAB_0025ad88;

  }

  FUN_0024e210(uVar2);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1ae0(param_1,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_002947e0(param_1);

  auVar9 = FUN_0029a840(param_1);

  if ((auVar9._0_8_ & 1) == 0) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,&cf_HQ,&cf_OX____W_j_NLpQ00TQOX_,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    pcVar8 = auVar9._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar9._8_8_,&cf_nx_,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(pcVar8,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_02,pcVar8,1,0);

    goto LAB_0025ad88;

  }

  auVar9 = FUN_00297de0(param_1);

  if ((auVar9._0_8_ & 1) == 0) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,&cf_NxeHe,&cf__IN7h_NxeQhgNxTe,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    pcVar8 = auVar9._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar9._8_8_,&cf_nx_,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(pcVar8,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_03,pcVar8,1,0);

    goto LAB_0025ad88;

  }

  FUN_002a4720(param_1);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar8 = &cf_js;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar8 = pcVar3;

  }

  _objc_retain(pcVar8);

  _objc_release(pcVar3);

  auVar9 = FUN_00294a00(param_1);

  if (auVar9._0_8_ < 0) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,&cf_7h_Ty,&cf_eQ_IN7h_vTy,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar9._0_8_;

    FUN_00291400(uVar4,auVar9._8_8_,&PTR___NSConcreteGlobalBlock_0038fd68);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_Sm,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    local_80 = PTR___NSConcreteStackBlock_003886f0;

    local_78 = 0xc2000000;

    local_70 = FUN_0025aeac;

    puStack_68 = &DAT_00388cc0;

    _objc_retain(uVar4);

    local_60 = uVar4;

    _objc_retain(uVar2);

    local_58 = uVar2;

    _objc_retain(pcVar8);

    local_50 = pcVar8;

    IStack_48 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_OX_,0,&local_80);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_06,uVar4,1,0);

    _objc_release(local_50);

    _objc_release(local_58);

    uVar1 = local_60;

LAB_0025ad7c:

    _objc_release(uVar1);

  }

  else {

    FUN_0024d85c();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_00299020();

    _objc_release(uVar1);

    lVar5 = FUN_00294a00(param_1);

    lVar6 = FUN_00293860(uVar4);

    if (lVar5 < lVar6) {

      auVar9 = FUN_00294a00(param_1);

      FUN_00299500(uVar4,auVar9._8_8_,auVar9._0_8_);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      uVar1 = FUN_00299020();

      _objc_release(uVar7);

      FUN_002a00a0(uVar1,extraout_x1,uVar2,&cf_code);

      FUN_002a00a0(uVar1,extraout_x1_00,pcVar8,&cf_type);

      auVar9 = FUN_00294a00(param_1);

      FUN_002a0040(uVar4,auVar9._8_8_,uVar1,auVar9._0_8_);

      FUN_0024d944(uVar4);

      FUN_00299700(param_1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar5 != 0) {

        FUN_00299700(param_1);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        (**(code **)(lVar5 + 0x10))();

        _objc_release(lVar5);

      }

      FUN_002990e0(param_1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029a080(auVar9._0_8_,auVar9._8_8_,1);

      _objc_unsafeClaimAutoreleasedReturnValue();

      _objc_release(auVar9._0_8_);

      goto LAB_0025ad7c;

    }

  }

  _objc_release(uVar4);

LAB_0025ad88:

  _objc_release(pcVar8);

  _objc_release(uVar2);

  return;

}




