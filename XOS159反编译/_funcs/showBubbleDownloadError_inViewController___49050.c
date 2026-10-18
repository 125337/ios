// showBubbleDownloadError:inViewController: @0x49050


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::showBubbleDownloadError_inViewController_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  double in_d2;

  double in_d3;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_getAssociatedObject(param_4,"loadingView");

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_4,"statusLabel");

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a42e0(uVar1);

  FUN_0029e8a0(uVar1,extraout_x1,1);

  FUN_002a1d60(uVar2,extraout_x1_00,param_3);

  FUN_002a4cc0(&_OBJC_CLASS___UIColor);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar2,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a3de0(uVar2);

  FUN_002a6220(param_4);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  FUN_002a6220(param_4);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  FUN_0029d320(in_d2 * 0.5,in_d3 * 0.5,uVar2);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




