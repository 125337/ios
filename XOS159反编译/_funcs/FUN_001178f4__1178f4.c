// FUN_001178f4 @0x1178f4


void FUN_001178f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined *puVar1;

  cfstringStruct *pcVar2;

  undefined *puVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  undefined8 uVar26;

  undefined8 uVar27;

  undefined8 uVar28;

  undefined8 uVar29;

  long lVar30;

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

  undefined1 auVar31 [16];

  undefined1 auVar32 [16];

  undefined1 auVar33 [16];

  undefined1 auVar34 [16];

  undefined1 auVar35 [16];

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined8 local_e8;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 uStack_88;

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar31 = _objc_retainAutoreleasedReturnValue();

  FUN_002944e0(auVar31._0_8_,auVar31._8_8_,param_3);

  puVar3 = (undefined *)_objc_retainAutoreleasedReturnValue();

  puVar1 = PTR____NSDictionary0__struct_00388310;

  if (puVar3 != (undefined *)0x0) {

    puVar1 = puVar3;

  }

  _objc_retain(puVar1);

  _objc_release(puVar3);

  FUN_00299540(puVar1,extraout_x1,&cf_pathCode);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar2 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar2 = pcVar4;

  }

  _objc_retain();

  _objc_release(pcVar4);

  auVar32 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar5 = auVar32._0_8_;

  FUN_002a1f60(uVar5,auVar32._8_8_,&cf__Nx_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar5);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar32._0_8_,auVar32._8_8_,uVar6);

  _objc_release(auVar32._0_8_);

  _objc_release(uVar6);

  auVar32 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

  uVar6 = auVar32._0_8_;

  FUN_0029ffc0(uVar6,auVar32._8_8_,0);

  FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar6,auVar32._8_8_,auVar32._0_8_);

  _objc_release(auVar32._0_8_);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar6,auVar32._8_8_,auVar32._0_8_);

  _objc_release(auVar32._0_8_);

  FUN_002a1d60(uVar6,extraout_x1_00,&cf__TNf_);

  FUN_002a21e0(uVar6,extraout_x1_01,0);

  FUN_002a6220(uVar5);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar32._0_8_,auVar32._8_8_,uVar6);

  _objc_release(auVar32._0_8_);

  auVar32 = _objc_alloc_init(&_OBJC_CLASS___UITextView);

  uVar7 = auVar32._0_8_;

  FUN_002955a0(0x402c000000000000,&_OBJC_CLASS___UIFont,auVar32._8_8_,&cf_Menlo);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  lVar30 = auVar32._0_8_;

  if (lVar30 == 0) {

    FUN_00298ec0(0x402c000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

                 &_OBJC_CLASS___UIFont);

    auVar32 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029e520(uVar7,auVar32._8_8_,auVar32._0_8_);

  if (lVar30 == 0) {

    _objc_release(auVar32._0_8_);

  }

  _objc_release(lVar30);

  FUN_002a1d60(uVar7,extraout_x1_02,pcVar2);

  FUN_0029c000(&_OBJC_CLASS___UIColor);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar7,auVar32._8_8_,auVar32._0_8_);

  _objc_release(auVar32._0_8_);

  FUN_00297e40(uVar7);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(0x4024000000000000);

  _objc_release(uVar8);

  FUN_002a1dc0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,uVar7);

  FUN_0029cdc0(uVar7,extraout_x1_03,1);

  FUN_0029cda0(uVar7,extraout_x1_04,0);

  FUN_002a21e0(uVar7,extraout_x1_05,0);

  FUN_002a1c80(uVar7,extraout_x1_06,&DAT_0000270f);

  FUN_002a6220(uVar5);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar32._0_8_,auVar32._8_8_,uVar7);

  _objc_release(auVar32._0_8_);

  FUN_00292540(uVar7);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar5);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bb80();

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540();

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc030000000000000,uVar8,auVar32._8_8_,auVar32._0_8_);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar32._0_8_);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(uVar8);

  FUN_002a54e0(uVar6);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar5);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bb80();

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a54e0();

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4030000000000000,uVar8);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  local_b8 = uVar13;

  FUN_00297f40(uVar6);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar5);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00297f40();

  uVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4030000000000000,uVar14);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  local_b0 = uVar17;

  FUN_002a5660(uVar6);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar5);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5660();

  uVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc030000000000000,uVar18);

  uVar21 = _objc_retainAutoreleasedReturnValue();

  local_a8 = uVar21;

  FUN_002a54e0(uVar7);

  uVar22 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540(uVar6);

  uVar23 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4030000000000000,uVar22);

  uVar24 = _objc_retainAutoreleasedReturnValue();

  local_a0 = uVar24;

  FUN_00297f40(uVar7);

  uVar25 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar5);

  uVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00297f40();

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4030000000000000,uVar25,auVar32._8_8_,auVar32._0_8_);

  uVar27 = _objc_retainAutoreleasedReturnValue();

  local_98 = uVar27;

  FUN_002a5660(uVar7);

  uVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar5);

  uVar29 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5660();

  auVar33 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc030000000000000,uVar28,auVar33._8_8_,auVar33._0_8_);

  auVar34 = _objc_retainAutoreleasedReturnValue();

  local_90 = auVar34._0_8_;

  uStack_88 = uVar11;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar34._8_8_,&local_b8,7);

  auVar35 = _objc_retainAutoreleasedReturnValue();

  FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar35._8_8_,auVar35._0_8_);

  _objc_release(auVar35._0_8_);

  _objc_release(auVar34._0_8_);

  _objc_release(auVar33._0_8_);

  _objc_release(uVar29);

  _objc_release(uVar28);

  _objc_release(uVar27);

  _objc_release(auVar32._0_8_);

  _objc_release(uVar26);

  _objc_release(uVar25);

  _objc_release(uVar24);

  _objc_release(uVar23);

  _objc_release(uVar22);

  _objc_release(uVar21);

  _objc_release(uVar20);

  _objc_release(uVar19);

  _objc_release(uVar18);

  _objc_release(uVar17);

  _objc_release(uVar16);

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar12);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_setAssociatedObject(uVar5,"bottomConstraint",uVar11,1);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  puVar3 = PTR___NSConcreteStackBlock_003886f0;

  uVar9 = *(undefined8 *)PTR__UIKeyboardWillShowNotification_003884b0;

  local_e0 = PTR___NSConcreteStackBlock_003886f0;

  local_d8 = 0xc2000000;

  local_d0 = FUN_0011a184;

  puStack_c8 = &DAT_0038c6f0;

  _objc_retain(uVar5);

  local_c0 = uVar5;

  FUN_002912a0(uVar8,extraout_x1_07,uVar9,0,0,&local_e0);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(uVar8);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  uVar9 = *(undefined8 *)PTR__UIKeyboardWillHideNotification_003884a8;

  local_108 = puVar3;

  local_100 = 0xc2000000;

  local_f8 = FUN_0011a3b8;

  puStack_f0 = &DAT_0038c6f0;

  _objc_retain(uVar5);

  local_e8 = uVar5;

  FUN_002912a0(uVar8,extraout_x1_08,uVar9,0,0,&local_108);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(uVar8);

  _objc_setAssociatedObject(uVar5,"pathCodeKey",param_3,3);

  _objc_setAssociatedObject(uVar5,"pathCodeTableView",param_4,0);

  auVar32 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar8 = FUN_00296f40(auVar32._0_8_,auVar32._8_8_,&cf_OX_,2,param_1,"savePathCode:");

  _objc_setAssociatedObject(uVar8,"editorVC",uVar5,0);

  FUN_00299140(uVar5);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar32._0_8_,auVar32._8_8_,uVar8);

  _objc_release(auVar32._0_8_);

  auVar32 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar9 = FUN_00296f40(auVar32._0_8_,auVar32._8_8_,&cf_nzz,0,param_1,"clearPathCode:");

  _objc_setAssociatedObject(uVar9,"editorVC",uVar5,0);

  FUN_00299140(uVar5);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f3c0(auVar32._0_8_,auVar32._8_8_,uVar9);

  _objc_release(auVar32._0_8_);

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar30 = _objc_retainAutoreleasedReturnValue();

  if (lVar30 != 0) {

    FUN_00299260(lVar30);

    auVar32 = _objc_retainAutoreleasedReturnValue();

    if (auVar32._0_8_ != 0) goto LAB_00118214;

  }

  FUN_002990e0(param_1);

  auVar32 = _objc_retainAutoreleasedReturnValue();

LAB_00118214:

  FUN_0029aa80(auVar32._0_8_,auVar32._8_8_,uVar5,1);

  _objc_release(lVar30);

  _objc_release(auVar32._0_8_);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(local_e8);

  _objc_release(local_c0);

  _objc_release(uVar11);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(pcVar2);

  _objc_release(puVar1);

  _objc_release(auVar31._0_8_);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




