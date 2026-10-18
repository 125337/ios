// FUN_00197924 @0x197924


void FUN_00197924(long param_1,cfstringStruct *param_2,cfstringStruct *param_3)



{

  cfstringStruct *pcVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar12._0_8_;

  pcVar1 = &cf___;

  if (param_2 != (cfstringStruct *)0x0) {

    pcVar1 = param_2;

  }

  FUN_002a0060(uVar3,auVar12._8_8_,pcVar1,&cf_aabDateTimeColorLight);

  pcVar1 = &cf___;

  if (param_3 != (cfstringStruct *)0x0) {

    pcVar1 = param_3;

  }

  FUN_002a0060(uVar3,extraout_x1,pcVar1,&cf_aabDateTimeColorDark);

  FUN_002a4a40(uVar3);

  FUN_0018dc7c();

  uVar4 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar12._8_8_,0,2);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar12._0_8_,auVar13._8_8_,auVar13._0_8_);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar4);

  if (lVar5 == 0) goto LAB_00197d18;

  FUN_00295d00(&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_alloc(&_OBJC_CLASS___UIView);

  uVar6 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

  _objc_alloc(&_OBJC_CLASS___UIView);

  uVar7 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

  FUN_00297e40();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(0x4028000000000000);

  _objc_release(uVar8);

  auVar12 = FUN_00297fa0(param_2);

  if (auVar12._0_8_ == 0) {

    auVar13._8_8_ = 0;

    auVar13._0_8_ = auVar12._8_8_;

    auVar13 = auVar13 << 0x40;

LAB_00197b04:

    auVar14._8_8_ = auVar13._8_8_;

    auVar14._0_8_ = uVar4;

    lVar11 = auVar13._0_8_;

    bVar2 = false;

  }

  else {

    FUN_0018ec28(param_2);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    lVar11 = auVar13._0_8_;

    if (lVar11 == 0) goto LAB_00197b04;

    FUN_0018ec28(param_2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    bVar2 = true;

  }

  FUN_0029cf60(uVar7,auVar14._8_8_,auVar14._0_8_);

  if (bVar2) {

    _objc_release(auVar14._0_8_);

  }

  if (auVar12._0_8_ != 0) {

    _objc_release(lVar11);

  }

  FUN_00297e40(uVar7);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d0e0(0x3ff0000000000000);

  _objc_release(uVar8);

  FUN_002a4b00(&_OBJC_CLASS___UIColor);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_retainAutorelease();

  uVar9 = FUN_00290a20();

  FUN_00297e40(uVar7);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d0a0(auVar12._0_8_,auVar12._8_8_,uVar9);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar8);

  FUN_00291380(uVar6,extraout_x1_00,uVar7);

  _objc_alloc(&_OBJC_CLASS___UIView);

  uVar8 = FUN_00296b80(0x4040000000000000,0x4008000000000000,0x4038000000000000,0x4038000000000000);

  FUN_00297e40();

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(0x4028000000000000);

  _objc_release(uVar9);

  auVar12 = FUN_00297fa0(param_3);

  if (auVar12._0_8_ == 0) {

    auVar15._8_8_ = 0;

    auVar15._0_8_ = auVar12._8_8_;

    auVar15 = auVar15 << 0x40;

LAB_00197c3c:

    auVar16._8_8_ = auVar15._8_8_;

    auVar16._0_8_ = uVar4;

    lVar11 = auVar15._0_8_;

    bVar2 = false;

  }

  else {

    FUN_0018ec28(param_3);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    lVar11 = auVar15._0_8_;

    if (lVar11 == 0) goto LAB_00197c3c;

    FUN_0018ec28(param_3);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    bVar2 = true;

  }

  FUN_0029cf60(uVar8,auVar16._8_8_,auVar16._0_8_);

  if (bVar2) {

    _objc_release(auVar16._0_8_);

  }

  if (auVar12._0_8_ != 0) {

    _objc_release(lVar11);

  }

  FUN_00297e40(uVar8);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d0e0(0x3ff0000000000000);

  _objc_release(uVar9);

  FUN_002a4b00(&_OBJC_CLASS___UIColor);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_retainAutorelease();

  uVar10 = FUN_00290a20();

  FUN_00297e40(uVar8);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d0a0(auVar12._0_8_,auVar12._8_8_,uVar10);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar9);

  FUN_00291380(uVar6,extraout_x1_01,uVar8);

  FUN_0029c820(lVar5,extraout_x1_02,uVar6);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar4);

LAB_00197d18:

  _objc_release(lVar5);

  _objc_release(uVar3);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




