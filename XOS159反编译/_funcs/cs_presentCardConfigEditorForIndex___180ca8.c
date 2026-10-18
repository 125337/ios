// cs_presentCardConfigEditorForIndex: @0x180ca8


/* Function Stack Size: 0x18 bytes */



void CadisCustomStyleListViewController::cs_presentCardConfigEditorForIndex_

               (ID param_1,SEL param_2,long_long param_3)



{

  undefined *puVar1;

  byte bVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  ulong uVar11;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  cfstringStruct *pcVar15;

  float fVar16;

  double dVar17;

  double dVar18;

  undefined1 auVar19 [16];

  long local_168;

  long local_160;

  undefined8 local_150;

  undefined *local_140;

  undefined8 local_138;

  code *local_130;

  undefined *puStack_128;

  undefined8 local_120;

  undefined8 local_118;

  undefined8 local_110;

  undefined8 local_108;

  undefined8 local_100;

  undefined1 auStack_f8 [8];

  long_long local_f0;

  undefined1 auStack_e8 [8];

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  double local_c0;

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  double local_98;

  byte local_89 [9];

  

  FUN_00167d7c();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  if ((long)param_3 < 0) goto LAB_00181180;

  auVar19 = FUN_00293860(uVar4);

  if (auVar19._0_8_ <= (long)param_3) goto LAB_00181180;

  FUN_00299500(uVar4,auVar19._8_8_,param_3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0017e440();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  local_89[0] = 0;

  auVar19 = FUN_00297fa0(uVar6);

  if ((auVar19._0_8_ == 0) ||

     (bVar2 = FUN_00295180(uVar7,auVar19._8_8_,uVar6,local_89), (bVar2 & local_89[0]) != 1)) {

    uVar8 = 0;

    pcVar15 = &cf_aSGrvU__RdNO9eS_MR7h__gq0;

  }

  else {

    FUN_002a4460(uVar6,extraout_x1,&cf_config_json);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    pcVar15 = &cf_O9eTOvcQVaSGrv;

  }

  auVar19 = FUN_00297fa0(uVar8);

  uVar9 = auVar19._8_8_;

  if ((auVar19._0_8_ == 0) ||

     (iVar3 = FUN_00295160(uVar7,uVar9,uVar8), uVar9 = extraout_x1_00, iVar3 == 0)) {

LAB_00180e74:

    local_150 = 0;

LAB_00180e78:

    FUN_00299540(uVar5,uVar9,&cf_bgHeight);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    uVar9 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar11 = _objc_opt_isKindOfClass(lVar13,uVar9);

    if ((uVar11 & 1) == 0) {

      uVar9 = _objc_opt_class(&_OBJC_CLASS___NSString);

      auVar19 = _objc_opt_isKindOfClass(lVar13,uVar9);

      uVar9 = auVar19._8_8_;

      dVar18 = 0.0;

      if ((auVar19._0_8_ & 1) != 0) goto LAB_00180ed0;

    }

    else {

LAB_00180ed0:

      fVar16 = (float)FUN_00295480(lVar13);

      dVar18 = (double)fVar16;

      uVar9 = extraout_x1_01;

    }

    FUN_00299540(uVar5,uVar9,&cf_contentScale);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar10 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar11 = _objc_opt_isKindOfClass(uVar9,uVar10);

    if ((uVar11 & 1) == 0) {

      uVar10 = _objc_opt_class(&_OBJC_CLASS___NSString);

      uVar11 = _objc_opt_isKindOfClass(uVar9,uVar10);

      if ((uVar11 & 1) != 0) goto LAB_00180f2c;

      dVar17 = 100.0;

    }

    else {

LAB_00180f2c:

      fVar16 = (float)FUN_00295480(uVar9);

      dVar17 = (double)fVar16;

      if (fVar16 <= 0.0) {

        dVar17 = 100.0;

      }

    }

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    uVar10 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_00294020(&_OBJC_CLASS___NSData,extraout_x1_00,uVar8);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar19._8_8_;

    lVar13 = auVar19._0_8_;

    if (lVar13 == 0) goto LAB_00180e74;

    auVar19 = _objc_alloc(&_OBJC_CLASS___NSString);

    auVar19 = FUN_00296a60(auVar19._0_8_,auVar19._8_8_,lVar13,4);

    local_150 = auVar19._0_8_;

    FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar19._8_8_,lVar13,0,0);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar10 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    uVar11 = _objc_opt_isKindOfClass(uVar9,uVar10);

    if ((uVar11 & 1) == 0) {

      _objc_release(uVar9);

      _objc_release(lVar13);

      uVar9 = extraout_x1_07;

      goto LAB_00180e78;

    }

    auVar19 = FUN_00299020(uVar9);

    uVar10 = auVar19._0_8_;

    FUN_00299540(uVar10,auVar19._8_8_,&cf_of_);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    lVar12 = auVar19._0_8_;

    if (lVar12 == 0) {

      FUN_00299540(uVar10,auVar19._8_8_,&cf_bgHeight);

      local_160 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar12);

      local_160 = lVar12;

    }

    _objc_release(lVar12);

    uVar14 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar11 = _objc_opt_isKindOfClass(local_160,uVar14);

    if ((uVar11 & 1) == 0) {

      uVar14 = _objc_opt_class(&_OBJC_CLASS___NSString);

      auVar19 = _objc_opt_isKindOfClass(local_160,uVar14);

      uVar14 = auVar19._8_8_;

      dVar18 = 0.0;

      if ((auVar19._0_8_ & 1) != 0) goto LAB_00181228;

    }

    else {

LAB_00181228:

      fVar16 = (float)FUN_00295480(local_160);

      dVar18 = (double)fVar16;

      uVar14 = extraout_x1_08;

    }

    FUN_00299540(uVar10,uVar14,&cf_Q___>e);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    lVar12 = auVar19._0_8_;

    if (lVar12 == 0) {

      FUN_00299540(uVar10,auVar19._8_8_,&cf_contentScale);

      local_168 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar12);

      local_168 = lVar12;

    }

    _objc_release(lVar12);

    uVar14 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar11 = _objc_opt_isKindOfClass(local_168,uVar14);

    if ((uVar11 & 1) == 0) {

      uVar14 = _objc_opt_class(&_OBJC_CLASS___NSString);

      uVar11 = _objc_opt_isKindOfClass(local_168,uVar14);

      if ((uVar11 & 1) != 0) goto LAB_001812c4;

      dVar17 = 100.0;

    }

    else {

LAB_001812c4:

      fVar16 = (float)FUN_00295480(local_168);

      dVar17 = (double)fVar16;

      if (fVar16 <= 0.0) {

        dVar17 = 100.0;

      }

    }

    _objc_release(local_168);

    _objc_release(local_160);

  }

  _objc_release(uVar9);

  _objc_release(lVar13);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_02,&cf__Mn_,pcVar15,1);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar9 = auVar19._0_8_;

  local_b8 = PTR___NSConcreteStackBlock_003886f0;

  local_b0 = 0xc0000000;

  local_a8 = FUN_0018148c;

  puStack_a0 = &DAT_00389000;

  local_98 = dVar18;

  FUN_00291400(uVar9,auVar19._8_8_,&local_b8);

  local_e0 = puVar1;

  local_d8 = 0xc0000000;

  local_d0 = FUN_00181544;

  puStack_c8 = &DAT_00389000;

  local_c0 = dVar17;

  FUN_00291400(uVar9,extraout_x1_03,&local_e0);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_Sm,1,0);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar9,auVar19._8_8_,auVar19._0_8_);

  _objc_release(auVar19._0_8_);

  _objc_initWeak(auStack_e8,param_1);

  local_140 = puVar1;

  local_138 = 0xc2000000;

  local_130 = FUN_001815fc;

  puStack_128 = &DAT_0038db98;

  _objc_copyWeak(auStack_f8,auStack_e8);

  _objc_retain(uVar9);

  local_120 = uVar9;

  _objc_retain(uVar8);

  local_118 = uVar8;

  _objc_retain(local_150);

  local_110 = local_150;

  _objc_retain(uVar10);

  local_108 = uVar10;

  _objc_retain(uVar6);

  local_100 = uVar6;

  local_f0 = param_3;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_OX_,0,&local_140);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar9,auVar19._8_8_,auVar19._0_8_);

  _objc_release(auVar19._0_8_);

  FUN_0029a500(param_1,extraout_x1_06,uVar9,1,0);

  _objc_release(local_100);

  _objc_release(local_108);

  _objc_release(local_110);

  _objc_release(local_118);

  _objc_release(local_120);

  _objc_destroyWeak(auStack_f8);

  _objc_destroyWeak(auStack_e8);

  _objc_release(uVar9);

  _objc_release(local_150);

  _objc_release(uVar10);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

LAB_00181180:

  _objc_release(uVar4);

  return;

}




