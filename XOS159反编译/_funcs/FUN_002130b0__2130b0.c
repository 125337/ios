// FUN_002130b0 @0x2130b0


undefined8 FUN_002130b0(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

  if (((uVar2 & 1) == 0) ||

     (auVar3 = FUN_00297fa0(param_1), uVar1 = auVar3._8_8_, auVar3._0_8_ == 0)) {

    uVar1 = 0;

  }

  else {

    if (DAT_003eadd8 != -1) {

      FUN_0028fa48();

      uVar1 = extraout_x1;

    }

    uVar1 = FUN_00293560(DAT_003eadd0,uVar1,param_1);

  }

  _objc_release(param_1);

  return uVar1;

}




