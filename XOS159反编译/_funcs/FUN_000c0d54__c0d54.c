// FUN_000c0d54 @0xc0d54


bool FUN_000c0d54(long param_1)



{

  bool bVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined1 auVar9 [16];

  

  _objc_retain();

  if ((param_1 == 0) || (iVar2 = FUN_00298760(param_1), iVar2 != 0x31)) {

    bVar1 = false;

  }

  else {

    FUN_000c12c8(param_1,&cf_m_nsAppFileExt);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

    uVar4 = uVar3;

    if ((uVar5 & 1) == 0) {

      uVar4 = 0;

    }

    FUN_002984e0(uVar4);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar5 = FUN_00297820(auVar9._0_8_,auVar9._8_8_,&cf_xosconfig);

    _objc_release(auVar9._0_8_);

    if ((uVar5 & 1) == 0) {

      FUN_000c12c8(param_1,&cf_m_nsTitle);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

      uVar5 = _objc_opt_isKindOfClass(uVar6,uVar4);

      uVar4 = uVar6;

      if ((uVar5 & 1) == 0) {

        uVar4 = 0;

      }

      _objc_retain(uVar4);

      FUN_00299b20(uVar4);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002984e0();

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_00297820(auVar9._0_8_,auVar9._8_8_,&cf_xosconfig);

      _objc_release(auVar9._0_8_);

      _objc_release(uVar7);

      if ((uVar5 & 1) == 0) {

        FUN_002985a0(param_1);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        lVar8 = FUN_00297fa0();

        _objc_release(uVar7);

        bVar1 = false;

        if (lVar8 != 0) {

          FUN_002985a0(param_1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar8 = FUN_0029abc0(auVar9._0_8_,auVar9._8_8_,&cf_<fileext>xosconfig<_fileext>,1);

          bVar1 = lVar8 != 0x7fffffffffffffff;

          _objc_release(auVar9._0_8_);

        }

      }

      else {

        bVar1 = true;

      }

      _objc_release(uVar4);

      _objc_release(uVar6);

    }

    else {

      bVar1 = true;

    }

    _objc_release(uVar3);

  }

  _objc_release(param_1);

  return bVar1;

}




