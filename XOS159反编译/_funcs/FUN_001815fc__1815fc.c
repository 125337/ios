// FUN_001815fc @0x1815fc


/* WARNING: Type propagation algorithm not settling */



void FUN_001815fc(long param_1)



{

  bool bVar1;

  uint uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar8;

  undefined8 uVar9;

  float fVar10;

  float fVar11;

  double dVar12;

  double dVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  long local_88 [2];

  undefined2 local_72;

  

  lVar3 = _objc_loadWeakRetained(param_1 + 0x48);

  if (lVar3 == 0) goto LAB_00181bd4;

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar14._0_8_,auVar14._8_8_,0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  fVar10 = (float)FUN_00295480();

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(auVar14._0_8_);

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar14._0_8_,auVar14._8_8_,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  fVar11 = (float)FUN_00295480();

  dVar13 = (double)fVar11;

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(auVar14._0_8_);

  if (fVar11 <= 0.0) {

    dVar13 = 100.0;

  }

  dVar12 = 50.0;

  if (50.0 <= dVar13) {

    dVar12 = dVar13;

  }

  dVar13 = 150.0;

  if (dVar12 <= 150.0) {

    dVar13 = dVar12;

  }

  auVar14 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x28));

  if (auVar14._0_8_ == 0) {

    lVar8 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x40));

    uVar2 = 0;

    bVar1 = lVar8 != 0;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&cf___0f);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&cf___0f);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    auVar15 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x30));

    uVar4 = auVar15._8_8_;

    if (auVar15._0_8_ == 0) {

LAB_00181860:

      FUN_0029b4a0(*(undefined8 *)(param_1 + 0x38),uVar4,&cf_bgHeight);

      FUN_0029b4a0(*(undefined8 *)(param_1 + 0x38),extraout_x1_01,&cf_contentScale);

      FUN_002993a0((double)fVar10,&_OBJC_CLASS___NSNumber);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(*(undefined8 *)(param_1 + 0x38),auVar15._8_8_,auVar15._0_8_,&cf_of_);

      _objc_release(auVar15._0_8_);

      FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(*(undefined8 *)(param_1 + 0x38),auVar15._8_8_,auVar15._0_8_,&cf_Q___>e);

      _objc_release(auVar15._0_8_);

      local_88[0] = 0;

      FUN_00294080(&_OBJC_CLASS___NSJSONSerialization,extraout_x1_02,*(undefined8 *)(param_1 + 0x38)

                   ,1,local_88);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      lVar8 = local_88[0];

      _objc_retain(local_88[0]);

      uVar2 = 0;

      if ((lVar7 != 0) && (lVar8 == 0)) {

        uVar2 = FUN_002a6580(lVar7,extraout_x1_03,*(undefined8 *)(param_1 + 0x28),1);

      }

      _objc_release(lVar7);

      _objc_release(lVar8);

    }

    else {

      local_72 = 0;

      uVar9 = *(undefined8 *)(param_1 + 0x30);

      _objc_retain(uVar9);

      FUN_00181cdc(uVar9,&cf_of_,auVar14._0_8_,(long)&local_72 + 1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar9);

      FUN_00181cdc(uVar4,&cf_Q___>e,uVar5,&local_72);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar4);

      if ((local_72._1_1_ != '\x01') || ((local_72 & 1) == 0)) {

LAB_00181858:

        _objc_release(uVar9);

        uVar4 = extraout_x1_00;

        goto LAB_00181860;

      }

      auVar15 = FUN_00297fa0(uVar9);

      if (auVar15._0_8_ == 0) goto LAB_00181858;

      local_88[1] = 0;

      uVar6 = FUN_002a65a0(uVar9,auVar15._8_8_,*(undefined8 *)(param_1 + 0x28),1,4,local_88 + 1);

      _objc_release(uVar9);

      uVar4 = extraout_x1;

      if ((uVar6 & 1) == 0) goto LAB_00181860;

      uVar2 = 1;

    }

    _objc_release(uVar5);

    _objc_release(auVar14._0_8_);

    bVar1 = false;

  }

  FUN_00167d7c();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = FUN_00299020();

  _objc_release(uVar4);

  lVar8 = *(long *)(param_1 + 0x50);

  auVar14 = FUN_00293860(uVar5);

  if (lVar8 < auVar14._0_8_) {

    FUN_00299500(uVar5,auVar14._8_8_,*(undefined8 *)(param_1 + 0x50));

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar9 = FUN_00299020();

    _objc_release(uVar4);

    FUN_002993a0((double)fVar10,&_OBJC_CLASS___NSNumber);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar9,auVar14._8_8_,auVar14._0_8_,&cf_bgHeight);

    _objc_release(auVar14._0_8_);

    FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar9,auVar14._8_8_,auVar14._0_8_,&cf_contentScale);

    _objc_release(auVar14._0_8_);

    FUN_002a0040(uVar5,extraout_x1_04,uVar9,*(undefined8 *)(param_1 + 0x50));

    FUN_0017247c(uVar5);

    _objc_release(uVar9);

  }

  FUN_00136604();

  FUN_001728f8();

  FUN_002995c0(lVar3);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar8 != 0) {

    FUN_002995c0(lVar3);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar8 + 0x10))();

    _objc_release(lVar8);

  }

  FUN_002a4dc0(lVar3);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  if (bVar1) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_05,&cf__OX_0R7h_,

                 &cf_aSGrvU__RdMn_NU__WS_MR7h__NNOQVaSGrS0Yg_OeN_v___uaSGrOaSGr__vMn_v0,1);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar14._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar14._8_8_,&cf__Y,0,0);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    FUN_0029a500(lVar3,extraout_x1_06,uVar4,1,0);

LAB_00181bc4:

    _objc_release(uVar4);

  }

  else {

    auVar14 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x28));

    if (auVar14._0_8_ != 0 && (uVar2 & 1) == 0) {

      FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar14._8_8_,&cf_Mn__fX_,&cf_elQeQaSGr,1);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar14._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar14._8_8_,&cf__Y,0,0);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar4,auVar14._8_8_,auVar14._0_8_);

      _objc_release(auVar14._0_8_);

      FUN_0029a500(lVar3,extraout_x1_07,uVar4,1,0);

      goto LAB_00181bc4;

    }

  }

  _objc_release(uVar5);

LAB_00181bd4:

  _objc_release(lVar3);

  return;

}




