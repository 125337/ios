// FUN_00212374 @0x212374


long FUN_00212374(long param_1,ulong param_2,long param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar9;

  double dVar10;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  

  _objc_retain();

  lVar9 = 0;

  if ((((param_2 & 1) != 0) || (param_3 < 1)) ||

     (_objc_retain(param_1), lVar9 = param_3, param_1 == 0)) goto LAB_002127b8;

  FUN_002a6080(param_1,extraout_x1,&cf_m_nsUserName);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

  if (((uVar4 & 1) == 0) || (lVar5 = FUN_00297fa0(uVar2), lVar5 == 0)) {

    bVar1 = false;

LAB_002124d4:

    uVar4 = FUN_002130b0(uVar2);

    if (((uVar4 & 1) == 0) && (uVar4 = FUN_0021314c(param_1,uVar2), (uVar4 & 1) == 0)) {

      if (DAT_003eae10 != -1) {

        FUN_0028fa20();

      }

      uVar3 = _objc_opt_class(param_1);

      auVar11 = FUN_002135cc(uVar3,DAT_003eae00,DAT_003eae08);

      uVar3 = auVar11._8_8_;

      _objc_retain();

      _objc_retain(uVar3);

      uVar4 = FUN_00213b3c(param_1,auVar11._0_8_,uVar3);

      if ((uVar4 & 1) == 0 && !(bool)(bVar1 ^ 1)) {

        lVar5 = _NSClassFromString(&cf_MMContext);

        lVar6 = _NSClassFromString(&cf_CContactMgr);

        uVar4 = 0;

        if ((lVar5 != 0) && (lVar6 != 0)) {

          uVar7 = _sel_registerName("currentContext");

          _objc_msgSend(lVar5,uVar7);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          if (lVar5 == 0) {

            lVar6 = 0;

LAB_00212774:

            uVar4 = 0;

          }

          else {

            uVar7 = _sel_registerName("getService:");

            _objc_msgSend(lVar5,uVar7,lVar6);

            lVar6 = _objc_retainAutoreleasedReturnValue();

            if ((lVar6 == 0) ||

               (uVar4 = _objc_opt_respondsToSelector(lVar6,"getContactByName:"), (uVar4 & 1) == 0))

            goto LAB_00212774;

            uVar7 = _sel_registerName("getContactByName:");

            _objc_msgSend(lVar6,uVar7,uVar2);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            if (lVar8 == 0) {

              uVar4 = 0;

            }

            else {

              if (DAT_003eae28 != -1) {

                FUN_0028fa34();

              }

              uVar7 = _objc_opt_class(lVar8);

              auVar12 = FUN_002135cc(uVar7,DAT_003eae18,DAT_003eae20);

              uVar7 = auVar12._8_8_;

              _objc_retain();

              _objc_retain(uVar7);

              uVar4 = FUN_00213b3c(lVar8,auVar12._0_8_,uVar7);

              _objc_release(uVar7);

              _objc_release(auVar12._0_8_);

            }

            _objc_release(lVar8);

          }

          _objc_release(lVar6);

          _objc_release(lVar5);

        }

      }

      _objc_release(uVar3);

      _objc_release(auVar11._0_8_);

    }

    else {

      uVar4 = 1;

    }

    if (bVar1) {

      _os_unfair_lock_lock(&DAT_003eadf0);

      dVar10 = (double)FUN_002a5220(&_OBJC_CLASS___NSDate);

      if ((DAT_003eaa68 == 0) || (uVar3 = extraout_x1_02, 60.0 < dVar10 - DAT_003eadf8)) {

        FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        lVar5 = DAT_003eaa68;

        DAT_003eaa68 = lVar6;

        _objc_release(lVar5);

        uVar3 = extraout_x1_03;

        DAT_003eadf8 = dVar10;

      }

      FUN_00299380(&_OBJC_CLASS___NSNumber,uVar3,uVar4);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(DAT_003eaa68,auVar11._8_8_,auVar11._0_8_,uVar2);

      _objc_release(auVar11._0_8_);

      _os_unfair_lock_unlock(&DAT_003eadf0);

      _objc_release(uVar2);

      _objc_release(param_1);

      goto joined_r0x002125b8;

    }

    _objc_release(uVar2);

    _objc_release(param_1);

    if ((int)uVar4 == 0) goto LAB_002127b8;

  }

  else {

    dVar10 = (double)FUN_002a5220(&_OBJC_CLASS___NSDate);

    _os_unfair_lock_lock(&DAT_003eadf0);

    if ((DAT_003eaa68 == 0) || (uVar3 = extraout_x1_00, 60.0 < dVar10 - DAT_003eadf8)) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      lVar5 = DAT_003eaa68;

      DAT_003eaa68 = lVar6;

      _objc_release(lVar5);

      uVar3 = extraout_x1_01;

      DAT_003eadf8 = dVar10;

    }

    FUN_00299540(DAT_003eaa68,uVar3,uVar2);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      _os_unfair_lock_unlock(&DAT_003eadf0);

      bVar1 = true;

      goto LAB_002124d4;

    }

    uVar4 = FUN_002924e0(lVar5);

    _os_unfair_lock_unlock(&DAT_003eadf0);

    _objc_release(lVar5);

    _objc_release(uVar2);

    _objc_release(param_1);

joined_r0x002125b8:

    if ((uVar4 & 1) == 0) goto LAB_002127b8;

  }

  lVar9 = 0;

LAB_002127b8:

  _objc_release(param_1);

  return lVar9;

}




