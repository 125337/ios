// showFvTokenSettings @0x768a4


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showFvTokenSettings(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  int iVar3;

  int iVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  cfstringStruct *pcVar9;

  cfstringStruct *pcVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

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

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined *local_1d0;

  undefined8 local_1c8;

  code *local_1c0;

  undefined *puStack_1b8;

  undefined8 local_1b0;

  ID IStack_1a8;

  undefined *local_1a0;

  undefined8 local_198;

  code *local_190;

  undefined *puStack_188;

  ID local_180;

  undefined *local_178;

  undefined8 local_170;

  code *local_168;

  undefined *puStack_160;

  ID local_158;

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  ID local_130;

  undefined *local_128;

  undefined8 local_120;

  code *local_118;

  undefined *puStack_110;

  ID local_108;

  undefined *local_100;

  undefined8 local_f8;

  code *local_f0;

  undefined *puStack_e8;

  ID local_e0;

  undefined1 local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  ID local_b0;

  undefined1 local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  ID local_80;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00076fe0();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  lVar7 = FUN_00297fa0();

  iVar3 = FUN_00077244();

  iVar4 = FUN_002924c0(uVar5,extraout_x1,&cf_ttsFvCheckinNoticeEnabled);

  FUN_002a45e0(uVar5,extraout_x1_00,&cf_ttsFvLastCheckinMessage);

  pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_fe__0RU_;

  if (pcVar8 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar8;

  }

  _objc_retain();

  _objc_release(pcVar8);

  FUN_002a45e0(uVar5,extraout_x1_01,&cf_ttsFvLastCreditsText);

  pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar8 = &cf__gg;

  if (pcVar9 != (cfstringStruct *)0x0) {

    pcVar8 = pcVar9;

  }

  _objc_retain(pcVar8);

  _objc_release(pcVar9);

  FUN_002a45e0(uVar5,extraout_x1_02,&cf_ttsFvLastCharactersText);

  pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar9 = &cf__gg;

  if (pcVar10 != (cfstringStruct *)0x0) {

    pcVar9 = pcVar10;

  }

  _objc_retain(pcVar9);

  _objc_release(pcVar10);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf_T);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar16._8_8_,&cf_FineVoiceToken,auVar16._0_8_,0);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  uVar11 = auVar17._0_8_;

  pcVar10 = &cf_Mn_;

  if (lVar7 != 0) {

    pcVar10 = &cf_O9e;

  }

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_000772a4;

  puStack_88 = &DAT_00388cf0;

  local_80 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar17._8_8_,pcVar10,0,&local_a0);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

  _objc_release(auVar17._0_8_);

  uVar12 = extraout_x1_04;

  if (lVar7 != 0) {

    local_d0 = puVar2;

    local_c8 = 0xc2000000;

    local_c0 = FUN_000772ac;

    puStack_b8 = &DAT_0038a1f0;

    pcVar10 = &cf_sQ;

    if (iVar3 == 0) {

      pcVar10 = &::cf___;

    }

    local_a8 = (undefined1)iVar3;

    local_b0 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,pcVar10,0,&local_d0);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    pcVar10 = &cf_sQ__0Rw;

    if (iVar4 == 0) {

      pcVar10 = &::cf___;

    }

    local_100 = puVar2;

    local_f8 = 0xc2000000;

    local_f0 = FUN_0007730c;

    puStack_e8 = &DAT_0038a1f0;

    local_d8 = (undefined1)iVar4;

    local_e0 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,pcVar10,0,&local_100);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    local_128 = puVar2;

    local_120 = 0xc2000000;

    local_118 = FUN_0007736c;

    puStack_110 = &DAT_00388cf0;

    local_108 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_pQ__0R,0,&local_128);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    local_150 = puVar2;

    local_148 = 0xc2000000;

    local_140 = FUN_00077374;

    puStack_138 = &DAT_00388cf0;

    local_130 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_gyR,0,&local_150);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    local_178 = puVar2;

    local_170 = 0xc2000000;

    local_168 = FUN_0007737c;

    puStack_160 = &DAT_00388cf0;

    local_158 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_08,&cf_gW___,0,&local_178);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    local_1a0 = puVar2;

    local_198 = 0xc2000000;

    local_190 = FUN_00077384;

    puStack_188 = &DAT_00388cf0;

    local_180 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_09,&cf_QQbcW___,0,&local_1a0);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    local_1d0 = puVar2;

    local_1c8 = 0xc2000000;

    local_1c0 = FUN_0007738c;

    puStack_1b8 = &DAT_00388d20;

    _objc_retain(uVar5);

    local_1b0 = uVar5;

    IStack_1a8 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_10,&cf_nd,2,&local_1d0);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    _objc_release(local_1b0);

    uVar12 = extraout_x1_11;

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar12,&cf_Sm,1,0);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar11,auVar17._8_8_,auVar17._0_8_);

  _objc_release(auVar17._0_8_);

  FUN_0029a0a0(uVar11);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar12 = auVar17._8_8_;

  lVar7 = auVar17._0_8_;

  if (lVar7 != 0) {

    FUN_002a6220(param_1);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(lVar7,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    FUN_002a6220(param_1);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar14 = _CGRectGetMidX();

    FUN_002a6220(param_1);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar15 = _CGRectGetMidY();

    FUN_002a1700(uVar14,uVar15,0x3ff0000000000000,0x3ff0000000000000,lVar7);

    _objc_release(uVar13);

    _objc_release(uVar12);

    FUN_002a0640(lVar7,extraout_x1_12,0);

    uVar12 = extraout_x1_13;

  }

  FUN_0029a500(param_1,uVar12,uVar11,1,0);

  _objc_release(lVar7);

  _objc_release(uVar11);

  _objc_release(auVar16._0_8_);

  _objc_release(pcVar9);

  _objc_release(pcVar8);

  _objc_release(pcVar1);

  _objc_release(uVar6);

  _objc_release(uVar5);

  return;

}




