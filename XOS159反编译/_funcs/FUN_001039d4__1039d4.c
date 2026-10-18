// FUN_001039d4 @0x1039d4


void FUN_001039d4(long param_1,long param_2)



{

  int iVar1;

  int iVar2;

  int iVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  ulong uVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar12;

  long lVar13;

  undefined8 uVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined8 local_68;

  

  _objc_retain();

  _objc_retain(param_2);

  lVar4 = FUN_00297fa0(param_1);

  uVar12 = 0;

  if ((param_2 == 0) || (lVar4 == 0)) goto LAB_00103e14;

  lVar4 = FUN_00297fa0(param_2);

  if (lVar4 == 0) {

    uVar12 = 0;

    goto LAB_00103e14;

  }

  _objc_opt_class(&objc::class_t::XOSLoader);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_sync_enter();

  _objc_retain(param_1);

  auVar15 = FUN_00297fa0(param_1);

  if (auVar15._0_8_ == 0) {

    iVar1 = FUN_00297920(&objc::class_t::XOSLoader);

    if (iVar1 != 0) {

      FUN_002a59a0(&objc::class_t::XOSLoader);

    }

    lVar4 = DAT_003e7f08;

    DAT_003e7f08 = 0;

    _objc_release(lVar4);

    lVar4 = DAT_003e7f10;

    DAT_003e7f10 = 0;

  }

  else {

    FUN_002a4460(param_1,auVar15._8_8_,&cf_theme_xos);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar12 = auVar15._0_8_;

    auVar15 = FUN_00295160(uVar12,auVar15._8_8_,lVar4);

    if ((auVar15._0_8_ & 1) == 0) {

      iVar1 = FUN_00297920(&objc::class_t::XOSLoader);

      if (iVar1 != 0) {

        FUN_002a59a0(&objc::class_t::XOSLoader);

      }

      lVar11 = DAT_003e7f08;

      DAT_003e7f08 = 0;

      _objc_release(lVar11);

      lVar11 = DAT_003e7f10;

      DAT_003e7f10 = 0;

    }

    else {

      FUN_00291f00(uVar12,auVar15._8_8_,lVar4,0);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      lVar11 = auVar15._0_8_;

      FUN_00299540(lVar11,auVar15._8_8_,*(undefined8 *)PTR__NSFileModificationDate_00388200);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      lVar6 = auVar15._0_8_;

      if ((DAT_003e7f08 == 0) ||

         (iVar1 = FUN_00297820(DAT_003e7f08,auVar15._8_8_,param_1), iVar1 == 0)) {

LAB_00103b1c:

        FUN_002a59a0(&objc::class_t::XOSLoader);

        iVar1 = FUN_002982e0(&objc::class_t::XOSLoader,extraout_x1_00,lVar4);

        lVar9 = DAT_003e7f08;

        if (iVar1 == 0) {

          DAT_003e7f08 = 0;

          _objc_release(lVar9);

          lVar9 = DAT_003e7f10;

          DAT_003e7f10 = 0;

          _objc_release(lVar9);

        }

        else {

          iVar1 = FUN_0029b7a0(&objc::class_t::XOSLoader);

          if (iVar1 != 0) {

            iVar2 = 0;

            uVar8 = extraout_x1_01;

            do {

              FUN_00295200(&objc::class_t::XOSLoader,uVar8,iVar2);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              FUN_002984e0();

              auVar15 = _objc_retainAutoreleasedReturnValue();

              iVar3 = FUN_00297820(auVar15._0_8_,auVar15._8_8_,&cf_auth_txt);

              _objc_release(auVar15._0_8_);

              if (iVar3 != 0) {

                FUN_002a5080(&objc::class_t::XOSLoader,extraout_x1_02,iVar2);

                lVar9 = _objc_retainAutoreleasedReturnValue();

                if (lVar9 == 0) {

                  lVar13 = 0;

                }

                else {

                  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

                  auVar15 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a45c0(lVar9,auVar15._8_8_,auVar15._0_8_);

                  lVar13 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(lVar9);

                  _objc_release(auVar15._0_8_);

                  _objc_release(uVar8);

                  if ((lVar13 == 0) || (lVar9 = FUN_00297fa0(lVar13), lVar9 == 0))

                  goto LAB_00103d68;

                  lVar9 = _objc_getClass("CContactMgr");

                  lVar10 = _objc_getClass("MMServiceCenter");

                  uVar14 = 0;

                  if ((lVar9 != 0) && (lVar10 != 0)) {

                    FUN_00294200();

                    auVar15 = _objc_retainAutoreleasedReturnValue();

                    FUN_00295b60(auVar15._0_8_,auVar15._8_8_,lVar9);

                    uVar8 = _objc_retainAutoreleasedReturnValue();

                    FUN_00295b20();

                    lVar9 = _objc_retainAutoreleasedReturnValue();

                    if ((lVar9 == 0) ||

                       (auVar16 = _objc_opt_respondsToSelector(lVar9,"m_nsUsrName"),

                       (auVar16._0_8_ & 1) == 0)) {

                      uVar14 = 0;

                    }

                    else {

                      FUN_002a6080(lVar9,auVar16._8_8_,&cf_m_nsUsrName);

                      uVar14 = _objc_retainAutoreleasedReturnValue();

                    }

                    _objc_release(lVar9);

                    _objc_release(uVar8);

                    _objc_release(auVar15._0_8_);

                  }

                  uVar8 = _objc_opt_class(&_OBJC_CLASS___NSString);

                  uVar7 = _objc_opt_isKindOfClass(uVar14,uVar8);

                  if ((uVar7 & 1) == 0) {

                    uVar8 = 0;

                  }

                  else {

                    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

                    auVar15 = _objc_retainAutoreleasedReturnValue();

                    FUN_002a45c0(uVar14,auVar15._8_8_,auVar15._0_8_);

                    uVar8 = _objc_retainAutoreleasedReturnValue();

                    _objc_release(uVar14);

                    uVar14 = auVar15._0_8_;

                  }

                  _objc_release(uVar14);

                  auVar15 = FUN_00297fa0(uVar8);

                  if ((auVar15._0_8_ != 0) &&

                     (uVar7 = FUN_00297820(uVar8,auVar15._8_8_,lVar13), (uVar7 & 1) == 0)) {

                    FUN_002a59a0(&objc::class_t::XOSLoader);

                    lVar9 = DAT_003e7f08;

                    DAT_003e7f08 = 0;

                    _objc_release(lVar9);

                    lVar9 = DAT_003e7f10;

                    DAT_003e7f10 = 0;

                    _objc_release(lVar9);

                    FUN_00294240(&_OBJC_CLASS___NSFileManager);

                    auVar15 = _objc_retainAutoreleasedReturnValue();

                    local_68 = 0;

                    FUN_0029b3c0(auVar15._0_8_,auVar15._8_8_,lVar4,&local_68);

                    _objc_release(auVar15._0_8_);

                    _dispatch_async(PTR___dispatch_main_q_00388740,

                                    &PTR___NSConcreteGlobalBlock_0038c5d0);

                    _objc_release(uVar8);

                    _objc_release(lVar13);

                    goto LAB_00103db0;

                  }

                }

                _objc_release(uVar8);

                goto LAB_00103d68;

              }

              _objc_release(uVar8);

              iVar2 = iVar2 + 1;

              uVar8 = extraout_x1_03;

            } while (iVar1 != iVar2);

          }

          lVar13 = 0;

LAB_00103d68:

          _objc_retain(param_1);

          lVar9 = DAT_003e7f08;

          DAT_003e7f08 = param_1;

          _objc_release(lVar9);

          _objc_retain(lVar6);

          lVar9 = DAT_003e7f10;

          DAT_003e7f10 = lVar6;

          _objc_release(lVar9);

          _objc_release(lVar13);

        }

      }

      else {

        iVar2 = FUN_00297920(&objc::class_t::XOSLoader);

        iVar1 = 0;

        if (DAT_003e7f10 != 0) {

          iVar1 = iVar2;

        }

        if (((iVar1 != 1) || (lVar6 == 0)) ||

           (uVar7 = FUN_00297800(DAT_003e7f10,extraout_x1,lVar6), (uVar7 & 1) == 0))

        goto LAB_00103b1c;

      }

LAB_00103db0:

      _objc_release(lVar6);

    }

    _objc_release(lVar11);

    _objc_release(uVar12);

  }

  _objc_release(lVar4);

  _objc_release(param_1);

  iVar1 = FUN_00297920(&objc::class_t::XOSLoader);

  if (iVar1 == 0) {

    uVar12 = 0;

  }

  else {

    FUN_002964a0(&objc::class_t::XOSLoader,extraout_x1_04,param_2);

    uVar12 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_sync_exit(uVar5);

  _objc_release(uVar5);

LAB_00103e14:

  _objc_release(param_2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar12);

  return;

}




