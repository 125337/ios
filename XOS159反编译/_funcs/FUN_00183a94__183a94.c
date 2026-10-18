// FUN_00183a94 @0x183a94


void FUN_00183a94(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  double local_58;

  double local_50;

  double local_48;

  double local_40;

  double local_38;

  

  _objc_retain();

  if (param_1 == 0) {

    pcVar3 = &cf_rgba_0_0_0_0_;

  }

  else {

    _objc_retain(param_1);

    FUN_00293e40(&_OBJC_CLASS___UITraitCollection);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b8e0(param_1,auVar5._8_8_,auVar5._0_8_);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_1);

    _objc_release(auVar5._0_8_);

    local_40 = 0.0;

    local_38 = 0.0;

    local_50 = 0.0;

    local_48 = 0.0;

    auVar5 = FUN_00295ac0(uVar2,extraout_x1,&local_38,&local_40,&local_48,&local_50);

    uVar4 = auVar5._8_8_;

    if ((auVar5._0_8_ & 1) == 0) {

      local_58 = 0.0;

      iVar1 = FUN_00295bc0(uVar2,uVar4,&local_58,&local_50);

      uVar4 = extraout_x1_00;

      if (iVar1 != 0) {

        local_40 = local_58;

        local_38 = local_58;

        local_48 = local_58;

      }

    }

    FUN_002a4680(&_OBJC_CLASS___NSString,uVar4,&cf_rgba__d__d__d___3f_);

    pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar3);

  return;

}




