// FUN_0023898c @0x23898c


void FUN_0023898c(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (param_1 != lVar1) {

      uVar2 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

      uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

      if ((uVar3 & 1) == 0) {

        uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

        if ((uVar3 & 1) == 0) {

          uVar2 = 0;

        }

        else {

          FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

          auVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_002a45c0(param_1,auVar8._8_8_,auVar8._0_8_);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar8._0_8_);

        }

        lVar1 = FUN_00297fa0(uVar2);

        if (lVar1 == 0) goto LAB_00238b20;

        FUN_002984e0(uVar2);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar8._0_8_;

        auVar8 = FUN_00297820(uVar5,auVar8._8_8_,&cf_0);

        if ((((auVar8._0_8_ & 1) == 0) &&

            (auVar8 = FUN_00297820(uVar5,auVar8._8_8_,&cf_none), (auVar8._0_8_ & 1) == 0)) &&

           (uVar3 = FUN_00297820(uVar5,auVar8._8_8_,&cf_null), (uVar3 & 1) == 0)) {

          FUN_002941e0(&_OBJC_CLASS___NSCharacterSet);

          auVar8 = _objc_retainAutoreleasedReturnValue();

          uVar6 = auVar8._0_8_;

          lVar1 = FUN_0029ab40(uVar2,auVar8._8_8_,uVar6);

          if (lVar1 == 0x7fffffffffffffff) {

            pcVar4 = &cf___;

          }

          else {

            FUN_00297580(uVar6);

            auVar8 = _objc_retainAutoreleasedReturnValue();

            FUN_00293260(uVar2,auVar8._8_8_,auVar8._0_8_);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_00293240(auVar9._0_8_,auVar9._8_8_,&cf___);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar9._0_8_);

            _objc_release(auVar8._0_8_);

            lVar1 = FUN_00297fa0(uVar7);

            if ((lVar1 == 0) || (auVar8 = FUN_002974a0(uVar7), (long)auVar8._0_8_ < 1)) {

              pcVar4 = &cf___;

            }

            else if ((auVar8._0_8_ < 100) &&

                    (auVar8 = FUN_0029aba0(uVar2,auVar8._8_8_,&cf__),

                    auVar8._0_8_ == 0x7fffffffffffffff)) {

              FUN_002a4680(&_OBJC_CLASS___NSString,auVar8._8_8_,&cf__ld);

              pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            }

            else {

              pcVar4 = &cf_99_;

            }

            _objc_release(uVar7);

          }

          _objc_release(uVar6);

        }

        else {

          pcVar4 = (cfstringStruct *)0x0;

        }

        _objc_release(uVar5);

      }

      else {

        auVar8 = FUN_002974a0(param_1);

        if ((long)auVar8._0_8_ < 1) {

          uVar2 = 0;

LAB_00238b20:

          pcVar4 = (cfstringStruct *)0x0;

        }

        else if (auVar8._0_8_ < 100) {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar8._8_8_,&cf__ld);

          pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          uVar2 = 0;

        }

        else {

          uVar2 = 0;

          pcVar4 = &cf_99_;

        }

      }

      _objc_release(uVar2);

      goto LAB_00238b3c;

    }

  }

  pcVar4 = (cfstringStruct *)0x0;

LAB_00238b3c:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar4);

  return;

}




