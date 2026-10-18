// showCustomPrefixSettingForVoice:voiceName: @0x6bee0


/* Function Stack Size: 0x20 bytes */



void _0x00bdda58::showCustomPrefixSettingForVoice_voiceName_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_110;

  undefined8 local_108;

  code *local_100;

  undefined *puStack_f8;

  ID local_f0;

  ID IStack_e8;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined8 local_c0;

  ID local_b8;

  ID local_b0;

  ID IStack_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  cfstringStruct *local_78;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  if ((param_3 != 0) && (auVar7 = FUN_00297fa0(param_3), auVar7._0_8_ != 0)) {

    FUN_00295940(&objc::class_t::_0x00bdda58,auVar7._8_8_,param_3);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(auVar7._0_8_,auVar7._8_8_,&cf_ttsTriggerPrefix);

    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_zz;

    if (pcVar4 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar4;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar4);

    _objc_release(auVar7._0_8_);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_n_0_);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_MR);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar8._8_8_,auVar7._0_8_,auVar8._0_8_,1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar8._0_8_);

    _objc_release(auVar7._0_8_);

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    local_a0 = PTR___NSConcreteStackBlock_003886f0;

    local_98 = 0xc2000000;

    local_90 = FUN_0006c310;

    puStack_88 = &DAT_00389080;

    _objc_retain(uVar3);

    local_80 = uVar3;

    _objc_retain(pcVar1);

    local_78 = pcVar1;

    FUN_00291400(uVar5,extraout_x1_00,&local_a0);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    local_e0 = puVar2;

    local_d8 = 0xc2000000;

    local_d0 = FUN_0006c3d4;

    puStack_c8 = &DAT_00388cc0;

    _objc_retain(uVar5);

    local_c0 = uVar5;

    _objc_retain(param_3);

    local_b8 = param_3;

    _objc_retain(param_4);

    local_b0 = param_4;

    IStack_a8 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_e0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    auVar7 = FUN_00297fa0(uVar3);

    uVar6 = auVar7._8_8_;

    if (auVar7._0_8_ != 0) {

      local_110 = puVar2;

      local_108 = 0xc2000000;

      local_100 = FUN_0006c73c;

      puStack_f8 = &DAT_00388d20;

      _objc_retain(param_3);

      local_f0 = param_3;

      IStack_e8 = param_1;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_yd_INMR,2,&local_110);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar5,auVar7._8_8_,auVar7._0_8_);

      _objc_release(auVar7._0_8_);

      _objc_release(local_f0);

      uVar6 = extraout_x1_04;

    }

    FUN_0029a500(param_1,uVar6,uVar5,1,0);

    _objc_release(local_b0);

    _objc_release(local_b8);

    _objc_release(local_c0);

    _objc_release(local_78);

    _objc_release(local_80);

    _objc_release(uVar5);

    _objc_release(pcVar1);

    _objc_release(uVar3);

  }

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




