// FUN_001bac18 @0x1bac18


void FUN_001bac18(void)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  undefined1 auVar8 [16];

  

  auVar8 = _objc_getClass("MMContext");

  if (auVar8._0_8_ == 0) {

    uVar5 = 0;

    goto LAB_001badec;

  }

  FUN_00299c80(auVar8._0_8_,auVar8._8_8_,"currentContext");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if ((lVar1 == 0) || (auVar8 = _objc_getClass("CContactMgr"), auVar8._0_8_ == 0)) {

    uVar5 = 0;

  }

  else {

    FUN_00299ca0(lVar1,auVar8._8_8_,"getService:",auVar8._0_8_);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

LAB_001bad30:

      uVar5 = 0;

    }

    else {

      auVar8 = _objc_opt_respondsToSelector(lVar2,"getSelfContact");

      if ((auVar8._0_8_ & 1) == 0) goto LAB_001bad30;

      FUN_00299c80(lVar2,auVar8._8_8_,"getSelfContact");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 == 0) {

LAB_001bad38:

        uVar5 = 0;

      }

      else {

        auVar8 = _objc_opt_respondsToSelector(lVar3,"m_nsUsrName");

        if ((auVar8._0_8_ & 1) == 0) goto LAB_001bad38;

        FUN_00299c80(lVar3,auVar8._8_8_,"m_nsUsrName");

        uVar4 = _objc_retainAutoreleasedReturnValue();

        uVar5 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar6 = _objc_opt_isKindOfClass(uVar4,uVar5);

        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00297fa0(uVar4), lVar7 == 0)) {

          uVar5 = 0;

        }

        else {

          _objc_retain(uVar4);

          uVar5 = uVar4;

        }

        _objc_release(uVar4);

      }

      _objc_release(lVar3);

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

LAB_001badec:

  _objc_autoreleaseReturnValue(uVar5);

  return;

}




