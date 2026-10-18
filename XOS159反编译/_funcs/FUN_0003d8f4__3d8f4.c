// FUN_0003d8f4 @0x3d8f4


void FUN_0003d8f4(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_c_y,&cf_n_,1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar8._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar8._8_8_,&cf_Sm,1,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_003896c0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  uVar7 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar7);

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),"bubbleNavController");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    lVar3 = 0;

LAB_0003da30:

    FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar8._8_8_;

    if (auVar8._0_8_ == 0) goto LAB_0003dac0;

    FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar6);

    _objc_release(auVar8._0_8_);

    uVar6 = extraout_x1_00;

    if (lVar4 == 0) goto LAB_0003dac0;

    FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar7);

    uVar7 = uVar5;

  }

  else {

    FUN_00299260(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) goto LAB_0003da30;

    FUN_002a5520(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) goto LAB_0003da30;

    FUN_002a5520(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar6 = uVar7;

    uVar7 = uVar5;

  }

  _objc_release(uVar6);

  uVar6 = extraout_x1_01;

LAB_0003dac0:

  FUN_0029a500(uVar7,uVar6,uVar1,1,0);

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(uVar7);

  _objc_release(uVar1);

  return;

}




