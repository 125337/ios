// viewDidLoad @0x1af5f0


/* Function Stack Size: 0x10 bytes */



void AABCustomDashStyleEditorViewController::viewDidLoad(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  undefined8 extraout_x1;

  double dVar9;

  double in_d2;

  double in_d3;

  double dVar10;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  ID local_c8;

  class_t *pcStack_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  long local_98;

  

  local_98 = *(long *)PTR____stack_chk_guard_00388738;

  pcStack_c0 = &objc::class_t::AABCustomDashStyleEditorViewController;

  local_c8 = param_1;

  _objc_msgSendSuper2(&local_c8,"viewDidLoad");

  lVar3 = FUN_00298060(param_1);

  pcVar2 = &cf_O_;

  if (lVar3 != 1) {

    pcVar2 = &cf_Z_;

  }

  pcVar1 = &cf____;

  if (lVar3 != 2) {

    pcVar1 = pcVar2;

  }

  _objc_retain(pcVar1);

  auVar11 = FUN_00294a00(param_1);

  if (auVar11._0_8_ < 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar11._8_8_,&cf_e__);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar11._0_8_;

    FUN_002a1f60(param_1,auVar11._8_8_,uVar4);

  }

  else {

    FUN_002a4700(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar11._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar11._8_8_,&cf___);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f60(param_1,auVar11._8_8_,auVar11._0_8_);

    _objc_release(auVar11._0_8_);

  }

  _objc_release(uVar4);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar11._0_8_,auVar11._8_8_,uVar4);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar4);

  auVar11 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar4 = FUN_00296f40(auVar11._0_8_,auVar11._8_8_,&cf_OX_,2,param_1,"aabEditor_save");

  auVar11 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  auVar11 = FUN_00296f40(auVar11._0_8_,auVar11._8_8_,&cf__,0,param_1,"aabEditor_preview");

  FUN_002a09a0(param_1,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  local_a8 = uVar4;

  FUN_0029a700(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  local_a0 = auVar11._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar11._8_8_,&local_a8,2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0de0(auVar12._0_8_,auVar12._8_8_,uVar5);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar5);

  _objc_release(auVar11._0_8_);

  auVar11 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar5 = FUN_00296f40(auVar11._0_8_,auVar11._8_8_,&cf__j_g,0,param_1,"aabEditor_showTemplates");

  local_b8 = uVar5;

  auVar11 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  auVar11 = FUN_00296f40(auVar11._0_8_,auVar11._8_8_,&cf___R,0,param_1,"aabEditor_showHelp");

  local_b0 = auVar11._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar11._8_8_,&local_b8,2);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f3e0(auVar12._0_8_,auVar12._8_8_,uVar6);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar6);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_002a6220(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar5);

  FUN_002a6220(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar10 = in_d3;

  _objc_release(uVar5);

  FUN_002a6220(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  dVar9 = (double)FUN_0029bb60();

  _objc_release(uVar5);

  FUN_002990e0(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002990c0();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00295600();

  dVar9 = dVar9 + dVar10;

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_alloc(&_OBJC_CLASS___UIView);

  dVar10 = in_d3 - dVar9;

  auVar11 = FUN_00296b80(0,dVar9,in_d2,dVar10);

  FUN_002a0a00(param_1,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  FUN_0029c000(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a780(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_0029a780(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_002a6220(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a780(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar5,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_0029a780(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar5);

  _objc_alloc(&_OBJC_CLASS___UIView);

  auVar11 = FUN_00296b80(0x4030000000000000,dVar10 * 0.5 + -6.0,in_d2 + -32.0,0x4028000000000000);

  FUN_002a0ac0(param_1,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a860(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_0029a780(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a860(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar5,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar11 = FUN_00296b80(0x4030000000000000,dVar10 * 0.5 + 12.0,in_d2 + -32.0,0x4036000000000000);

  FUN_002a0a20(param_1,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a7a0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_002a4cc0(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a7a0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_0029a7a0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d80(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_0029a7a0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_0029a780(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a7a0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar5,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar11 = FUN_00296b80(0x4020000000000000,dVar9 + 6.0,in_d2 + -16.0,0x4046000000000000);

  FUN_0029e9e0(param_1,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  lVar3 = FUN_00298060(param_1);

  pcVar2 = &cf_A;

  if (lVar3 != 2) {

    pcVar2 = &cf_A;

  }

  FUN_002961e0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,pcVar2);

  _objc_release(auVar11._0_8_);

  FUN_002a4aa0(0x4022000000000000,&_OBJC_CLASS___UIFont);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002961e0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_002a4fc0(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002961e0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_002961e0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ffc0(auVar11._0_8_,auVar11._8_8_,2);

  _objc_release(auVar11._0_8_);

  FUN_002a6220(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002961e0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar5,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  _objc_alloc(&_OBJC_CLASS___UITextView);

  auVar11 = FUN_00296b80(0,dVar9 + 54.0,in_d2,in_d3 - (dVar9 + 54.0));

  FUN_0029d4c0(param_1,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  FUN_002a4a60(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  FUN_002955a0(0x402a000000000000,&_OBJC_CLASS___UIFont,extraout_x1,&cf_Menlo);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  lVar3 = lVar7;

  if (lVar7 == 0) {

    FUN_00298ec0(0x402a000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

                 &_OBJC_CLASS___UIFont);

    lVar3 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar11._0_8_,auVar11._8_8_,lVar3);

  _objc_release(auVar11._0_8_);

  if (lVar7 == 0) {

    _objc_release(lVar3);

  }

  _objc_release(lVar7);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cdc0(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cda0(auVar11._0_8_,auVar11._8_8_,0);

  _objc_release(auVar11._0_8_);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a16a0(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1660(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f1a0(auVar11._0_8_,auVar11._8_8_,0);

  _objc_release(auVar11._0_8_);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cbe0(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_00292ec0(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d680(0x4020000000000000,0,0x4069000000000000,0);

  _objc_release(uVar5);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029dca0(auVar11._0_8_,auVar11._8_8_,param_1);

  _objc_release(auVar11._0_8_);

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ce00(auVar11._0_8_,auVar11._8_8_,0x12);

  _objc_release(auVar11._0_8_);

  FUN_002a6220(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ec0(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar5,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  lVar3 = FUN_00294a00(param_1);

  if (lVar3 < 0) {

    FUN_00292ec0(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar11._0_8_;

    FUN_002a1d60(uVar5,auVar11._8_8_,&::cf___);

  }

  else {

    FUN_00298060(param_1);

    FUN_001ab458();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00294a00(param_1);

    lVar7 = FUN_00293860(uVar5);

    if (lVar3 < lVar7) {

      auVar11 = FUN_00294a00(param_1);

      FUN_00299500(uVar5,auVar11._8_8_,auVar11._0_8_);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(auVar11._0_8_,auVar11._8_8_,&cf_code);

      pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar2 = &::cf___;

      if (pcVar8 != (cfstringStruct *)0x0) {

        pcVar2 = pcVar8;

      }

      FUN_00292ec0(param_1);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar12._0_8_,auVar12._8_8_,pcVar2);

      _objc_release(auVar12._0_8_);

      _objc_release(pcVar8);

      _objc_release(auVar11._0_8_);

    }

  }

  _objc_release(uVar5);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar11._0_8_,auVar11._8_8_,param_1,"aabEditor_keyboardWillShow:",

               *(undefined8 *)PTR__UIKeyboardWillShowNotification_003884b0,0);

  _objc_release(auVar11._0_8_);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar11._0_8_,auVar11._8_8_,param_1,"aabEditor_keyboardWillHide:",

               *(undefined8 *)PTR__UIKeyboardWillHideNotification_003884a8,0);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar4);

  _objc_release(pcVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_98) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




