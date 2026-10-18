// deleteImage:currentCover:selfWxId: @0x94fc


/* Function Stack Size: 0x28 bytes */



void PersonalOBF_CoversSettingViewController::deleteImage_currentCover_selfWxId_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  long lVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  long local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_5);

  FUN_00295a40(param_1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar8._0_8_,auVar8._8_8_,param_3);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  local_68 = 0;

  FUN_0029b3c0(auVar9._0_8_,auVar9._8_8_,uVar3,&local_68);

  lVar1 = local_68;

  _objc_retain(local_68);

  _objc_release(auVar9._0_8_);

  if (lVar1 == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar9._0_8_;

    FUN_00299be0(param_1,auVar9._8_8_,param_5);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar9._0_8_;

    FUN_00299b80(param_1,auVar9._8_8_,param_5);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar9._0_8_;

    FUN_002a45e0(uVar4,auVar9._8_8_,uVar5);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00297820(param_3,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    uVar7 = extraout_x1;

    if (iVar2 != 0) {

      FUN_0029b4a0(uVar4,extraout_x1,uVar5);

      uVar7 = extraout_x1_00;

    }

    FUN_002a45e0(uVar4,uVar7,uVar6);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00297820(param_3,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    if (iVar2 != 0) {

      FUN_0029b4a0(uVar4,extraout_x1_01,uVar6);

    }

    FUN_002a4a40(uVar4);

    FUN_00007f9c();

    FUN_00295760(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    auVar9 = FUN_00299020();

    FUN_002a0660(param_1,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar7);

    FUN_002a4dc0(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar4);

  }

  _objc_release(lVar1);

  _objc_release(uVar3);

  _objc_release(auVar8._0_8_);

  _objc_release(param_5);

  _objc_release(param_3);

  return;

}




