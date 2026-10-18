// FUN_00123bd8 @0x123bd8


uint FUN_00123bd8(undefined8 param_1)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  FUN_00298680(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002985c0(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar4._0_8_;

  auVar4 = FUN_00295fa0(uVar2,auVar4._8_8_,&cf__chatroom);

  if ((((auVar4._0_8_ & 1) == 0) &&

      (auVar4 = FUN_00295fa0(uVar3,auVar4._8_8_,&cf__chatroom), (auVar4._0_8_ & 1) == 0)) &&

     (auVar4 = FUN_00295f60(uVar2,auVar4._8_8_,&cf_gh_), (auVar4._0_8_ & 1) == 0)) {

    uVar1 = FUN_00295f60(uVar3,auVar4._8_8_,&cf_gh_);

    uVar1 = uVar1 ^ 1;

  }

  else {

    uVar1 = 0;

  }

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(param_1);

  return uVar1;

}




