// FUN_00118650 @0x118650


void FUN_00118650(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined *puVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar12 [16];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  long local_68;

  

  _objc_retain(param_3);

  _objc_getAssociatedObject(param_3,"editorVC");

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    _objc_getAssociatedObject(lVar3,"pathCodeKey");

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(lVar3,"pathCodeTableView");

    lVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(lVar3);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar12._0_8_,auVar12._8_8_,&DAT_0000270f);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar12._0_8_);

    if ((lVar4 != 0) && (lVar6 != 0)) {

      FUN_002a5020(lVar6);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar1 = &cf___;

      if (pcVar7 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar7;

      }

      _objc_retain(pcVar1);

      _objc_release(pcVar7);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      uVar8 = auVar12._0_8_;

      FUN_002944e0(uVar8,auVar12._8_8_,lVar4);

      puVar9 = (undefined *)_objc_retainAutoreleasedReturnValue();

      puVar2 = PTR____NSDictionary0__struct_00388310;

      if (puVar9 != (undefined *)0x0) {

        puVar2 = puVar9;

      }

      _objc_retain(puVar2);

      _objc_release(puVar9);

      lVar10 = FUN_00299020(puVar2);

      if (lVar10 == 0) {

        FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

        lVar10 = _objc_retainAutoreleasedReturnValue();

      }

      auVar12 = FUN_00297fa0(pcVar1);

      if (auVar12._0_8_ == 0) {

        FUN_0029b4a0(lVar10,auVar12._8_8_,&cf_pathCode);

        uVar11 = extraout_x1_00;

      }

      else {

        FUN_002a00a0(lVar10,auVar12._8_8_,pcVar1,&cf_pathCode);

        uVar11 = extraout_x1;

      }

      FUN_002a0060(uVar8,uVar11,lVar10,lVar4);

      FUN_002a4a40(uVar8);

      uVar11 = extraout_x1_01;

      if (lVar5 != 0) {

        FUN_0029b140(lVar5);

        uVar11 = extraout_x1_02;

      }

      FUN_002a4680(&_OBJC_CLASS___NSString,uVar11,&cf__Nx_OX_0R);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar12._8_8_,&cf__OX_,auVar12._0_8_,1);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar12._0_8_);

      local_88 = PTR___NSConcreteStackBlock_003886f0;

      local_80 = 0xc2000000;

      local_78 = FUN_0011a544;

      puStack_70 = &DAT_00388cf0;

      _objc_retain(lVar3);

      local_68 = lVar3;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_nx_,0,&local_88);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar11,auVar12._8_8_,auVar12._0_8_);

      _objc_release(auVar12._0_8_);

      FUN_0029a500(lVar3,extraout_x1_04,uVar11,1,0);

      _objc_release(local_68);

      _objc_release(uVar11);

      _objc_release(lVar10);

      _objc_release(puVar2);

      _objc_release(uVar8);

      _objc_release(pcVar1);

    }

    _objc_release(lVar6);

    _objc_release(lVar5);

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

  _objc_release(param_3);

  return;

}




