// FUN_001bf634 @0x1bf634


undefined8 FUN_001bf634(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_00290e00();

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  auVar3 = FUN_00295f60(uVar1,auVar3._8_8_,&cf_CoverMask_);

  if ((auVar3._0_8_ & 1) == 0) {

    uVar2 = FUN_00295f60(uVar1,auVar3._8_8_,&cf_HeadCover_);

  }

  else {

    uVar2 = 1;

  }

  _objc_release(uVar1);

  return uVar2;

}




