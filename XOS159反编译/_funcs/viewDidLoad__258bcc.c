// viewDidLoad @0x258bcc


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockCustomStyleEditorViewController::viewDidLoad(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 extraout_x1;

  undefined8 unaff_x19;

  double dVar8;

  double in_d2;

  double in_d3;

  double dVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  ID local_a8;

  class_t *pcStack_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  pcStack_a0 = &objc::class_t::XZYHomeDockCustomStyleEditorViewController;

  local_a8 = param_1;

  _objc_msgSendSuper2(&local_a8,"viewDidLoad");

  auVar10 = FUN_00294a00(param_1);

  if (auVar10._0_8_ < 0) {

    auVar11._8_8_ = auVar10._8_8_;

    auVar11._0_8_ = &cf_e__IN_h7h_;

  }

  else {

    FUN_002a4700(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    unaff_x19 = auVar11._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar11._8_8_,&cf___);

    auVar11 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002a1f60(param_1,auVar11._8_8_,auVar11._0_8_);

  if (-1 < auVar10._0_8_) {

    _objc_release(auVar11._0_8_);

    _objc_release(unaff_x19);

  }

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar10._0_8_,auVar10._8_8_,uVar2);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar2);

  auVar10 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar2 = FUN_00296f40(auVar10._0_8_,auVar10._8_8_,&cf_OX_,2,param_1,"dockEditor_save");

  auVar10 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  auVar10 = FUN_00296f40(auVar10._0_8_,auVar10._8_8_,&cf__,0,param_1,"dockEditor_preview");

  FUN_002a09a0(param_1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  local_88 = uVar2;

  FUN_0029a700(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  local_80 = auVar10._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_88,2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0de0(auVar11._0_8_,auVar11._8_8_,uVar3);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar3);

  _objc_release(auVar10._0_8_);

  auVar10 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar3 = FUN_00296f40(auVar10._0_8_,auVar10._8_8_,&cf__j_g,0,param_1,"dockEditor_showTemplates");

  local_98 = uVar3;

  auVar10 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  auVar10 = FUN_00296f40(auVar10._0_8_,auVar10._8_8_,&cf___R,0,param_1,"dockEditor_showHelp");

  local_90 = auVar10._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_98,2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f3e0(auVar11._0_8_,auVar11._8_8_,uVar4);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar4);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar3);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar9 = in_d3;

  _objc_release(uVar3);

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00297c00();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  dVar8 = (double)FUN_0029bb60();

  _objc_release(uVar4);

  _objc_release(uVar3);

  FUN_002990e0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002990c0();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00295600();

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_alloc(&_OBJC_CLASS___UIView);

  dVar8 = dVar8 + dVar9;

  auVar10 = FUN_00296b80(0,dVar8,in_d2,in_d3 - dVar8);

  FUN_002a0a00(param_1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_0029c000(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a780(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar10._0_8_,auVar10._8_8_,uVar3);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  FUN_0029a780(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar10._0_8_,auVar10._8_8_,1);

  _objc_release(auVar10._0_8_);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a780(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar3,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar10 = FUN_00296b80(0x4020000000000000,dVar8 + 6.0,in_d2 + -16.0,0x4046000000000000);

  FUN_0029cca0(param_1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_00259960(0x4022000000000000,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291920(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar10._0_8_,auVar10._8_8_,uVar3);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  FUN_002a4fc0(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291920(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar10._0_8_,auVar10._8_8_,uVar3);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  FUN_00291920(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ffc0(auVar10._0_8_,auVar10._8_8_,2);

  _objc_release(auVar10._0_8_);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291920(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar3,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  FUN_002947e0(param_1);

  _objc_alloc(&_OBJC_CLASS___UITextView);

  auVar10 = FUN_00296b80(0,dVar8 + 54.0,in_d2,in_d3 - (dVar8 + 54.0));

  FUN_0029d4c0(param_1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_002a4a60(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar10._0_8_,auVar10._8_8_,uVar3);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar10._0_8_,auVar10._8_8_,uVar3);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  FUN_002955a0(0x402a000000000000,&_OBJC_CLASS___UIFont,extraout_x1,&cf_Menlo);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  lVar6 = lVar5;

  if (lVar5 == 0) {

    FUN_00298ec0(0x402a000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

                 &_OBJC_CLASS___UIFont);

    lVar6 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar10._0_8_,auVar10._8_8_,lVar6);

  _objc_release(auVar10._0_8_);

  if (lVar5 == 0) {

    _objc_release(lVar6);

  }

  _objc_release(lVar5);

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cdc0(auVar10._0_8_,auVar10._8_8_,1);

  _objc_release(auVar10._0_8_);

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cda0(auVar10._0_8_,auVar10._8_8_,0);

  _objc_release(auVar10._0_8_);

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a16a0(auVar10._0_8_,auVar10._8_8_,1);

  _objc_release(auVar10._0_8_);

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1660(auVar10._0_8_,auVar10._8_8_,1);

  _objc_release(auVar10._0_8_);

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cbe0(auVar10._0_8_,auVar10._8_8_,1);

  _objc_release(auVar10._0_8_);

  FUN_00292ec0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d680(0x4020000000000000,0,0x4069000000000000,0);

  _objc_release(uVar3);

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029dca0(auVar10._0_8_,auVar10._8_8_,param_1);

  _objc_release(auVar10._0_8_);

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ce00(auVar10._0_8_,auVar10._8_8_,0x12);

  _objc_release(auVar10._0_8_);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ec0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar3,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  lVar6 = FUN_00294a00(param_1);

  if (lVar6 < 0) {

    FUN_00292ec0(param_1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar10._0_8_;

    FUN_002a1d60(uVar3,auVar10._8_8_,&::cf___);

  }

  else {

    FUN_0024d85c();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar6 = FUN_00294a00(param_1);

    lVar5 = FUN_00293860(uVar3);

    if (lVar6 < lVar5) {

      auVar10 = FUN_00294a00(param_1);

      FUN_00299500(uVar3,auVar10._8_8_,auVar10._0_8_);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(auVar10._0_8_,auVar10._8_8_,&cf_code);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      FUN_00292ec0(param_1);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      pcVar1 = &::cf___;

      if (pcVar7 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar7;

      }

      FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,pcVar1);

      _objc_release(auVar11._0_8_);

      _objc_release(pcVar7);

      _objc_release(auVar10._0_8_);

    }

  }

  _objc_release(uVar3);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar10._0_8_,auVar10._8_8_,param_1,"dockEditor_keyboardWillShow:",

               *(undefined8 *)PTR__UIKeyboardWillShowNotification_003884b0,0);

  _objc_release(auVar10._0_8_);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar10._0_8_,auVar10._8_8_,param_1,"dockEditor_keyboardWillHide:",

               *(undefined8 *)PTR__UIKeyboardWillHideNotification_003884a8,0);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




