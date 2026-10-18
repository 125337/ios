// FUN_00187fe8 @0x187fe8


void FUN_00187fe8(long param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  FUN_002a6080(*(undefined8 *)(param_1 + 0x20),param_2,&cf_combineSendView);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  lVar1 = auVar3._0_8_;

  if (lVar1 != 0) {

    FUN_002a6080(lVar1,auVar3._8_8_,&cf_contentView);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if ((lVar2 != 0) && (auVar3 = FUN_00297a40(lVar2), (auVar3._0_8_ & 1) == 0)) {

      FUN_0029c5a0(lVar2,auVar3._8_8_,0x40);

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

  return;

}




