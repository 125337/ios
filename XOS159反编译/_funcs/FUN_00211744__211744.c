// FUN_00211744 @0x211744


byte FUN_00211744(undefined8 param_1,undefined8 param_2,ulong param_3)



{

  ulong uVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  byte bVar7;

  ulong uVar8;

  long lVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  byte local_99;

  cfstringStruct *local_98;

  cfstringStruct *local_90;

  cfstringStruct *local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  bVar7 = 0;

  if ((0 < (long)param_3) && ((DAT_003e7158 & 1) == 0)) {

    local_99 = 0;

    iVar2 = FUN_00212b7c(param_1,param_2,param_3,&local_99);

    bVar7 = local_99;

    if (iVar2 == 0) {

      _objc_retain(param_1);

      uVar8 = 0;

      lVar9 = 0;

      uVar3 = extraout_x1;

      uVar1 = param_3;

      if (9 < param_3) {

        uVar1 = 10;

      }

      do {

        FUN_00296780(&_OBJC_CLASS___NSIndexPath,uVar3,uVar8,param_2);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        FUN_00211d9c(param_1,uVar3);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar3);

        if (lVar4 != 0) {

          uVar5 = FUN_00212d60(lVar4);

          if ((uVar5 & 1) == 0) goto LAB_00211980;

          lVar9 = lVar9 + 1;

        }

        _objc_release(lVar4);

        uVar8 = uVar8 + 1;

        uVar3 = extraout_x1_00;

      } while (uVar1 != uVar8);

      _objc_release(param_1);

      if (lVar9 < 1) {

        bVar7 = 0;

      }

      else {

        _objc_retain(param_1);

        auVar10 = FUN_00293860(DAT_003eaa18);

        uVar3 = auVar10._8_8_;

        if (auVar10._0_8_ != 0) {

          uVar8 = 0;

          uVar1 = param_3;

          if (99 < param_3) {

            uVar1 = 100;

          }

LAB_00211884:

          FUN_00296780(&_OBJC_CLASS___NSIndexPath,uVar3,uVar8,param_2);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          FUN_00211d9c(param_1,uVar3);

          lVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar3);

          uVar3 = extraout_x1_01;

          if (lVar4 == 0) goto LAB_00211938;

          FUN_002a6080(lVar4,extraout_x1_01,&cf_m_nsUserName);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          uVar6 = _objc_opt_class(&_OBJC_CLASS___NSString);

          uVar5 = _objc_opt_isKindOfClass(uVar3,uVar6);

          if ((uVar5 & 1) == 0) {

LAB_00211928:

            _objc_release(uVar3);

            _objc_release(lVar4);

            uVar3 = extraout_x1_02;

            goto LAB_00211938;

          }

          auVar10 = FUN_00297fa0(uVar3);

          if (auVar10._0_8_ == 0) goto LAB_00211928;

          FUN_00299540(DAT_003eaa18,auVar10._8_8_,uVar3);

          lVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar9 == 0) goto LAB_00211928;

          _objc_release(uVar3);

LAB_00211980:

          _objc_release(lVar4);

          bVar7 = 0;

          goto LAB_0021198c;

        }

LAB_00211968:

        bVar7 = 1;

LAB_0021198c:

        _objc_release(param_1);

      }

      _objc_getAssociatedObject(param_1,&DAT_003ead88);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      if (auVar10._0_8_ == 0) {

        FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,&DAT_003ead88,uVar3,1);

        auVar10._8_8_ = extraout_x1_03;

        auVar10._0_8_ = uVar3;

      }

      local_98 = &cf_v;

      FUN_00299460(&_OBJC_CLASS___NSNumber,auVar10._8_8_,DAT_003eaab4);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      local_90 = &cf_raw;

      local_80 = auVar11._0_8_;

      FUN_00299400(&_OBJC_CLASS___NSNumber,auVar11._8_8_,param_3);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      local_88 = &cf_skip;

      local_78 = auVar12._0_8_;

      FUN_00299380(&_OBJC_CLASS___NSNumber,auVar12._8_8_,bVar7);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      local_70 = auVar13._0_8_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&local_80,&local_98,3);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_00299400(&_OBJC_CLASS___NSNumber,auVar14._8_8_,param_2);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(auVar10._0_8_,auVar15._8_8_,auVar14._0_8_,auVar15._0_8_);

      _objc_release(auVar15._0_8_);

      _objc_release(auVar14._0_8_);

      _objc_release(auVar13._0_8_);

      _objc_release(auVar12._0_8_);

      _objc_release(auVar11._0_8_);

      _objc_release(auVar10._0_8_);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return bVar7 & 1;

LAB_00211938:

  uVar8 = uVar8 + 1;

  if (uVar1 == uVar8) goto LAB_00211968;

  goto LAB_00211884;

}




