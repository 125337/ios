// FUN_000a0604 @0xa0604


void FUN_000a0604(undefined8 param_1)



{

  cfstringStruct *pcVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  long lVar7;

  cfstringStruct *pcVar8;

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

  undefined8 uVar30;

  undefined8 uVar31;

  undefined8 uVar32;

  undefined8 uVar33;

  undefined8 uVar34;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar35 [16];

  undefined1 auVar36 [16];

  undefined1 auVar37 [16];

  undefined1 auVar38 [16];

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6648);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    auVar35 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

    uVar3 = auVar35._0_8_;

    FUN_002a1f60(uVar3,auVar35._8_8_,&cf_USrA);

    FUN_002a4ba0(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(auVar35._0_8_,auVar35._8_8_,uVar4);

    _objc_release(auVar35._0_8_);

    _objc_release(uVar4);

    auVar35 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

    uVar4 = auVar35._0_8_;

    FUN_002a21e0(uVar4,auVar35._8_8_,0);

    FUN_002a1d60(uVar4,extraout_x1,&cf__Ndk_Jn_USrvA);

    FUN_002a4aa0(0x402a000000000000,&_OBJC_CLASS___UIFont);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar4,auVar35._8_8_,auVar35._0_8_);

    _objc_release(auVar35._0_8_);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar4,auVar35._8_8_,auVar35._0_8_);

    _objc_release(auVar35._0_8_);

    FUN_0029ffc0(uVar4,extraout_x1_00,0);

    FUN_002a6220(uVar3);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar35._0_8_,auVar35._8_8_,uVar4);

    _objc_release(auVar35._0_8_);

    auVar35 = _objc_alloc_init(&_OBJC_CLASS___UITextView);

    uVar5 = auVar35._0_8_;

    FUN_002a21e0(uVar5,auVar35._8_8_,0);

    FUN_002a4aa0(0x4030000000000000,&_OBJC_CLASS___UIFont);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar5,auVar35._8_8_,auVar35._0_8_);

    _objc_release(auVar35._0_8_);

    FUN_000bd0fc(lVar2);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    if ((pcVar6 == (cfstringStruct *)0x0) || (lVar7 = FUN_00297fa0(pcVar6), lVar7 == 0)) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar35 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45e0(auVar35._0_8_,auVar35._8_8_,&cf_aiChatSystemPrompt);

      pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar1 = &cf__O_f;

      if (pcVar8 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar8;

      }

      _objc_retain(pcVar1);

      _objc_release(pcVar6);

      _objc_release(pcVar8);

      _objc_release(auVar35._0_8_);

      pcVar6 = pcVar1;

    }

    FUN_002a1d60(uVar5);

    FUN_0029c000(&_OBJC_CLASS___UIColor);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar5,auVar35._8_8_,auVar35._0_8_);

    _objc_release(auVar35._0_8_);

    FUN_00297e40(uVar5);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4024000000000000);

    _objc_release(uVar9);

    FUN_002a1dc0(0x4028000000000000,0x4024000000000000,0x4028000000000000,0x4024000000000000,uVar5);

    FUN_002a1c80(uVar5,extraout_x1_01,0x3e9);

    FUN_002a6220(uVar3);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar35._0_8_,auVar35._8_8_,uVar5);

    _objc_release(auVar35._0_8_);

    FUN_002a54e0(uVar4);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bb80();

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a54e0();

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_00293480(0x4030000000000000,uVar9);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    local_a8 = uVar13;

    FUN_00297f40(uVar4);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00297f40();

    uVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00293480(0x4030000000000000,uVar14);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    local_a0 = uVar17;

    FUN_002a5660(uVar4);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5660();

    uVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_00293480(0xc030000000000000,uVar18);

    uVar21 = _objc_retainAutoreleasedReturnValue();

    local_98 = uVar21;

    FUN_002a54e0(uVar5);

    uVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_00292540(uVar4);

    uVar23 = _objc_retainAutoreleasedReturnValue();

    FUN_00293480(0x4028000000000000,uVar22);

    uVar24 = _objc_retainAutoreleasedReturnValue();

    local_90 = uVar24;

    FUN_00297f40(uVar5);

    uVar25 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    uVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_00297f40();

    uVar27 = _objc_retainAutoreleasedReturnValue();

    FUN_00293480(0x4030000000000000,uVar25);

    uVar28 = _objc_retainAutoreleasedReturnValue();

    local_88 = uVar28;

    FUN_002a5660(uVar5);

    uVar29 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    uVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5660();

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_00293480(0xc030000000000000,uVar29,auVar35._8_8_,auVar35._0_8_);

    uVar31 = _objc_retainAutoreleasedReturnValue();

    local_80 = uVar31;

    FUN_00292540(uVar5);

    uVar32 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    uVar33 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bb80();

    uVar34 = _objc_retainAutoreleasedReturnValue();

    FUN_00292540();

    auVar36 = _objc_retainAutoreleasedReturnValue();

    FUN_00293480(0xc030000000000000,uVar32,auVar36._8_8_,auVar36._0_8_);

    auVar37 = _objc_retainAutoreleasedReturnValue();

    local_78 = auVar37._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar37._8_8_,&local_a8,7);

    auVar38 = _objc_retainAutoreleasedReturnValue();

    FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar38._8_8_,auVar38._0_8_);

    _objc_release(auVar38._0_8_);

    _objc_release(auVar37._0_8_);

    _objc_release(auVar36._0_8_);

    _objc_release(uVar34);

    _objc_release(uVar33);

    _objc_release(uVar32);

    _objc_release(uVar31);

    _objc_release(auVar35._0_8_);

    _objc_release(uVar30);

    _objc_release(uVar29);

    _objc_release(uVar28);

    _objc_release(uVar27);

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

    _objc_release(uVar11);

    _objc_release(uVar10);

    _objc_release(uVar9);

    auVar35 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

    uVar9 = FUN_00296f40(auVar35._0_8_,auVar35._8_8_,&cf_OX_,2,param_1,"saveCustomPrompt:");

    FUN_00299140(uVar3);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0dc0(auVar35._0_8_,auVar35._8_8_,uVar9);

    _objc_release(auVar35._0_8_);

    _objc_setAssociatedObject(uVar3,"textView",uVar5,1);

    _objc_setAssociatedObject(uVar3,"chatId",lVar2,1);

    _objc_setAssociatedObject(param_1,"promptVC",uVar3,1);

    FUN_002990e0(param_1);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    lVar7 = auVar35._0_8_;

    if (lVar7 != 0) {

      FUN_0029aa80(lVar7,auVar35._8_8_,uVar3,1);

    }

    _objc_release(lVar7);

    _objc_release(uVar9);

    _objc_release(pcVar6);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




