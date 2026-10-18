// FUN_0016d55c @0x16d55c


void FUN_0016d55c(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_0016cb00();

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._8_8_;

  lVar1 = auVar3._0_8_;

  if ((lVar1 == 0) || (auVar3 = FUN_00297620(lVar1), uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0))

  {

    FUN_002953c0(*(undefined8 *)(param_1 + 0x28),uVar2,0);

  }

  else {

    FUN_0029a500(lVar1,uVar2,*(undefined8 *)(param_1 + 0x20),1,0);

  }

  _objc_release(lVar1);

  return;

}




