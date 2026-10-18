// FUN_0020eb40 @0x20eb40


undefined8 FUN_0020eb40(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  auVar2 = _objc_opt_respondsToSelector(param_1,"logicGetCountForSection:");

  if ((auVar2._0_8_ & 1) == 0) {

    uVar1 = 0;

  }

  else {

    uVar1 = FUN_00298460(param_1,auVar2._8_8_,param_2);

  }

  _objc_release(param_1);

  return uVar1;

}




