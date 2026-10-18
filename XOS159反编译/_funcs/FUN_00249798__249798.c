// FUN_00249798 @0x249798


void FUN_00249798(long param_1,long param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  long lVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  

  _objc_retain(param_2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__ld);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002944e0(auVar8._0_8_,auVar8._8_8_,&cf_xzyHomeBottomBarCustomNames);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  FUN_00299540(uVar2,extraout_x1_00,uVar1);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_00297fa0();

  if (lVar4 == 0) {

    if ((-1 < param_1) && (param_2 != 0)) {

      FUN_00297be0(param_2);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      lVar4 = FUN_00293860();

      _objc_release(uVar5);

      if (param_1 < lVar4) {

        FUN_00297be0(param_2);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00299500(auVar8._0_8_,auVar8._8_8_,param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a5360();

        pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_00297fa0();

        pcVar7 = pcVar6;

        if ((lVar4 == 0) &&

           (auVar9 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003bef68),

           param_1 < auVar9._0_8_)) {

          FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bef68,auVar9._8_8_,param_1);

          pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(pcVar6);

        }

        lVar4 = FUN_00297fa0(pcVar7);

        pcVar6 = &cf_Home;

        if (lVar4 != 0) {

          pcVar6 = pcVar7;

        }

        _objc_retain(pcVar6);

        _objc_release(pcVar7);

        _objc_release(uVar5);

        _objc_release(auVar8._0_8_);

        goto LAB_00249950;

      }

    }

    FUN_00237f98(param_1);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(pcVar3);

    pcVar6 = pcVar3;

  }

LAB_00249950:

  _objc_release(pcVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(pcVar6);

  return;

}




