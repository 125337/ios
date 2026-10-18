// FUN_0019ec90 @0x19ec90


bool FUN_0019ec90(long param_1)



{

  long lVar1;

  long *plVar2;

  bool bVar3;

  uint uVar4;

  uint uVar5;

  int iVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  ulong uVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined8 uVar12;

  long lVar13;

  undefined1 auVar14 [16];

  

  _objc_retain();

  if (param_1 != 0) {

    uVar4 = FUN_000048dc(param_1);

    uVar5 = FUN_00004f4c(param_1);

    if ((uVar5 & uVar4 & 1) == 0) {

      _objc_retain(param_1);

      _objc_retain(param_1);

      uVar12 = 0;

      lVar11 = param_1;

      if (DAT_003e95d0 != 0) {

        auVar14 = _objc_opt_isKindOfClass(param_1);

        uVar12 = auVar14._8_8_;

        if ((auVar14._0_8_ & 1) != 0) {

          FUN_002a6080(param_1,uVar12,&cf_parentModel);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          if (lVar7 != 0) {

            _objc_retain(lVar7);

            _objc_release(param_1);

            lVar11 = lVar7;

          }

          _objc_release(lVar7);

          uVar12 = extraout_x1;

        }

      }

      FUN_002a6080(lVar11,uVar12,&cf_messageWrap);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      lVar7 = auVar14._0_8_;

      if (lVar7 == 0) {

        lVar13 = 0;

      }

      else {

        FUN_002a6080(lVar7,auVar14._8_8_,&cf_m_nsToUsr);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        lVar8 = auVar14._0_8_;

        FUN_002a6080(lVar7,auVar14._8_8_,&cf_m_nsFromUsr);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        lVar9 = auVar14._0_8_;

        auVar14 = FUN_00295fa0(lVar8,auVar14._8_8_,&cf__chatroom);

        lVar13 = lVar8;

        if (((auVar14._0_8_ & 1) == 0) &&

           (uVar10 = FUN_00295fa0(lVar9,auVar14._8_8_,&cf__chatroom), lVar13 = lVar9,

           (uVar10 & 1) == 0)) {

          iVar6 = FUN_00191330(param_1);

          if (lVar8 != 0) {

            lVar13 = lVar8;

          }

          lVar1 = lVar8;

          if (lVar9 != 0) {

            lVar1 = lVar9;

          }

          if (iVar6 == 0) {

            lVar13 = lVar1;

          }

        }

        _objc_retain(lVar13);

        _objc_release(lVar9);

        _objc_release(lVar8);

      }

      _objc_release(lVar7);

      _objc_release(lVar11);

      _objc_release(param_1);

      lVar11 = FUN_00297fa0(lVar13);

      if (lVar11 != 0) {

        uVar4 = FUN_0008501c(lVar13);

        uVar5 = FUN_00085074(lVar13);

      }

      _objc_release(lVar13);

      if (((uVar4 & 1) == 0) &&

         (uVar4 = FUN_00005168(param_1), ((uVar4 | uVar5 ^ 0xffffffff) & 1) == 0)) {

        if ((DAT_003e95b0 == 2) || (DAT_003e95b8 == 2)) {

          iVar6 = FUN_00191330(param_1);

          plVar2 = &DAT_003e95b0;

          if (iVar6 == 0) {

            plVar2 = &DAT_003e95b8;

          }

          bVar3 = *plVar2 != 2;

        }

        else {

          bVar3 = true;

        }

        goto LAB_0019ee6c;

      }

    }

  }

  bVar3 = false;

LAB_0019ee6c:

  _objc_release(param_1);

  return bVar3;

}




