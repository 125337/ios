// setupScrollView @0x129f58


/* Function Stack Size: 0x10 bytes */



void XZYColorPickerViewController::setupScrollView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  uVar1 = _objc_alloc_init(&_OBJC_CLASS___UIScrollView);

  lVar3 = (long)_scrollView;

  uVar2 = *(undefined8 *)(param_1 + lVar3);

  *(undefined8 *)(param_1 + lVar3) = uVar1;

  _objc_release(uVar2);

  FUN_0029cbe0(*(undefined8 *)(param_1 + lVar3),extraout_x1,1);

  FUN_002a15c0(*(undefined8 *)(param_1 + lVar3),extraout_x1_00,1);

  FUN_002a6220(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_1 + lVar3));

  _objc_release(auVar4._0_8_);

  return;

}




