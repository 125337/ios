// presentSideRailIconCodePromptFrom:groupId:groupName: @0x1cf8f8


/* Function Stack Size: 0x28 bytes */



void XZYCLGDividerGestureTarget::presentSideRailIconCodePromptFrom_groupId_groupName_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_f0;

  undefined8 local_e8;

  code *local_e0;

  undefined *puStack_d8;

  ID local_d0;

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  ID local_a0;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  cfstringStruct *local_78;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  if ((param_3 != 0) && (lVar3 = FUN_00297fa0(param_4), lVar3 != 0)) {

    FUN_001cf400(param_4);

    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &::cf___;

    if (pcVar4 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar4;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar4);

    auVar7 = FUN_00297fa0(param_5);

    if (auVar7._0_8_ == 0) {

      auVar7._8_8_ = auVar7._8_8_;

      auVar7._0_8_ = &cf_n_OhVhNx;

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_OhVhNx_);

      auVar7 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar7._8_8_,auVar7._0_8_,&cf_eQ_NVh_,1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    local_98 = PTR___NSConcreteStackBlock_003886f0;

    local_90 = 0xc2000000;

    local_88 = FUN_001cfc94;

    puStack_80 = &DAT_00388f20;

    _objc_retain(pcVar1);

    local_78 = pcVar1;

    FUN_00291400(uVar5,extraout_x1,&local_98);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    local_c8 = puVar2;

    local_c0 = 0xc2000000;

    local_b8 = FUN_001cfd14;

    puStack_b0 = &DAT_00388d20;

    _objc_retain(uVar5);

    local_a8 = uVar5;

    _objc_retain(param_4);

    local_a0 = param_4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_OX_,0,&local_c8);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    auVar8 = FUN_00297fa0(pcVar1);

    uVar6 = auVar8._8_8_;

    if (auVar8._0_8_ != 0) {

      local_f0 = puVar2;

      local_e8 = 0xc2000000;

      local_e0 = FUN_001cff44;

      puStack_d8 = &DAT_00388cf0;

      _objc_retain(param_4);

      local_d0 = param_4;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_ndOhVhNx,2,&local_f0);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar5,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

      _objc_release(local_d0);

      uVar6 = extraout_x1_03;

    }

    FUN_0029a500(param_3,uVar6,uVar5,1,0);

    _objc_release(local_a0);

    _objc_release(local_a8);

    _objc_release(local_78);

    _objc_release(uVar5);

    _objc_release(auVar7._0_8_);

    _objc_release(pcVar1);

  }

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




