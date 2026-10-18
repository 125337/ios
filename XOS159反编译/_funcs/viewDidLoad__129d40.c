// viewDidLoad @0x129d40


/* Function Stack Size: 0x10 bytes */



void XZYColorPickerViewController::viewDidLoad(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  ID local_40;

  class_t *pcStack_38;

  

  pcStack_38 = &objc::class_t::XZYColorPickerViewController;

  local_40 = param_1;

  _objc_msgSendSuper2(&local_40,"viewDidLoad");

  FUN_00299de0(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  pcVar2 = auVar4._0_8_;

  pcVar1 = &cf_rb;

  if (pcVar2 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar2;

  }

  FUN_002a1f60(param_1,auVar4._8_8_,pcVar1);

  _objc_release(pcVar2);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar4._0_8_,auVar4._8_8_,uVar3);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar3);

  auVar4 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar3 = FUN_00296f40(auVar4._0_8_,auVar4._8_8_,&cf_Sm,0,param_1,"cancelTapped");

  FUN_00299140(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f3c0(auVar4._0_8_,auVar4._8_8_,uVar3);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar3);

  auVar4 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar3 = FUN_00296f40(auVar4._0_8_,auVar4._8_8_,&cf_nx,2,param_1,"confirmTapped");

  FUN_00299140(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar4._0_8_,auVar4._8_8_,uVar3);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar3);

  FUN_00297fe0(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  pcVar2 = auVar4._0_8_;

  pcVar1 = &::cf___;

  if (pcVar2 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar2;

  }

  FUN_0029df40(param_1,auVar4._8_8_,pcVar1);

  _objc_release(pcVar2);

  FUN_00293ee0(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  pcVar2 = auVar4._0_8_;

  pcVar1 = &::cf___;

  if (pcVar2 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar2;

  }

  FUN_0029df20(param_1,auVar4._8_8_,pcVar1);

  _objc_release(pcVar2);

  FUN_0029d8e0(0x3ff0000000000000,param_1);

  FUN_002a2d40(param_1);

  FUN_002a2c80(param_1);

  FUN_002a2c20(param_1);

  FUN_002a2bc0(param_1);

  FUN_002a2ce0(param_1);

  FUN_002a2cc0(param_1);

  FUN_00297e60(param_1);

  FUN_002980e0(param_1);

  return;

}




