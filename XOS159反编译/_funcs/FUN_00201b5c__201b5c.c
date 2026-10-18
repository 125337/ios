// FUN_00201b5c @0x201b5c


/* WARNING: Type propagation algorithm not settling */



long FUN_00201b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  byte bVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  ulong uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  undefined1 auVar15 [16];

  long local_158;

  long local_150;

  long local_148;

  long local_140;

  long local_138 [3];

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  byte local_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  if ((DAT_003eaa30 & 1) == 0) {

    lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

    goto LAB_00201f80;

  }

  if (DAT_003ead50 == '\x01' && DAT_003ead51 != '\0') {

    local_140 = 0;

    FUN_0021ab24(param_1,&local_140);

    local_158 = _objc_retainAutoreleasedReturnValue();

    lVar3 = local_140;

    _objc_retain(local_140);

    if ((local_158 == 0) || (lVar3 == 0)) {

      FUN_0021ad34(param_1);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 == 0) {

        lVar9 = 0;

LAB_00201eb0:

        lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

      }

      else {

        uVar5 = FUN_002974a0(lVar7);

        FUN_0021adac(param_1,uVar5);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        if ((lVar9 == 0) || (lVar4 = FUN_002974a0(lVar7), param_4 != lVar4)) goto LAB_00201eb0;

        FUN_00294d00(lVar9);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_00293860();

        _objc_release(uVar5);

      }

      _objc_release(lVar9);

    }

    else {

      lVar4 = FUN_002974a0(lVar3);

      if (param_4 == lVar4) {

        FUN_00294d00(local_158);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_00293860();

      }

      else {

        _objc_getAssociatedObject(param_1,&DAT_003ead87);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        lVar7 = auVar15._0_8_;

        FUN_00299420(&_OBJC_CLASS___NSNumber,auVar15._8_8_,param_4);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        iVar2 = FUN_00293560(lVar7,auVar15._8_8_,auVar15._0_8_);

        _objc_release(auVar15._0_8_);

        if (iVar2 == 0) {

          lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

        }

        else {

          local_f0[0] = 0;

          bVar1 = FUN_00212b7c(param_1,param_4,0,local_f0);

          if ((bVar1 & local_f0[0]) == 1) {

            lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

          }

          else {

            lVar4 = 0;

          }

        }

      }

    }

    _objc_release(lVar7);

  }

  else if (DAT_003ead50 == '\0') {

    lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

    FUN_0021a5b8(param_1);

    FUN_0020e91c(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002115b0(param_1);

    local_158 = _objc_retainAutoreleasedReturnValue();

    if ((lVar3 == 0) && (0 < lVar4)) {

      iVar2 = FUN_00211660(param_1,param_4,lVar4);

      if (iVar2 == 0) goto LAB_00202208;

      iVar2 = FUN_00211744(param_1,param_4,lVar4);

      if (iVar2 == 0) {

        FUN_0021af00(param_1,param_4);

        FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_02,param_4);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(local_158,auVar15._8_8_,auVar15._0_8_);

        _objc_release(auVar15._0_8_);

        FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_03,param_4);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        goto LAB_00202078;

      }

      FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1,param_4);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(local_158,auVar15._8_8_,auVar15._0_8_);

      _objc_release(auVar15._0_8_);

      lVar3 = 0;

    }

    else {

LAB_00202078:

      if (lVar3 == 0) {

LAB_00202208:

        local_150 = 0;

        FUN_0021ab24(param_1,&local_150);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        lVar7 = local_150;

        _objc_retain(local_150);

        if (lVar9 == 0) {

          lVar10 = lVar4;

          lVar3 = 0;

        }

        else {

          _objc_retain(lVar7);

          FUN_002115b0(param_1);

          lVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(local_158);

          auVar15 = FUN_002974a0(lVar7);

          lVar3 = lVar7;

          local_158 = lVar10;

          if (param_4 == auVar15._0_8_) {

            FUN_0020b734(param_1,1);

            FUN_00294d00(lVar9);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            lVar10 = FUN_00293860();

            _objc_release(uVar5);

          }

          else {

            FUN_00299420(&_OBJC_CLASS___NSNumber,auVar15._8_8_,param_4);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00293560(lVar10,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            lVar10 = 0;

            if (iVar2 == 0) {

              lVar10 = lVar4;

            }

          }

        }

        lVar4 = lVar10;

        _objc_release(lVar9);

        _objc_release(lVar7);

      }

      else {

        auVar15 = FUN_002974a0(lVar3);

        if (param_4 != auVar15._0_8_) {

          FUN_00299420(&_OBJC_CLASS___NSNumber,auVar15._8_8_,param_4);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          iVar2 = FUN_00293560(local_158,auVar15._8_8_,auVar15._0_8_);

          _objc_release(auVar15._0_8_);

          if (iVar2 == 0) {

            if ((lVar4 < 1) || (iVar2 = FUN_00211660(param_1,param_4,lVar4), iVar2 == 0))

            goto LAB_00201f70;

            FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_06,param_4);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_00291240(local_158,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            _objc_setAssociatedObject(param_1,&DAT_003ead5c,0,1);

            iVar2 = FUN_00211744(param_1,param_4,lVar4);

          }

          else {

            iVar2 = FUN_00211744(param_1,param_4,lVar4);

          }

          if (iVar2 == 0) {

            lVar4 = 0;

          }

          goto LAB_00201f70;

        }

        _objc_retain(param_1);

        FUN_002101cc(param_1);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar15._0_8_;

        FUN_00299400(&_OBJC_CLASS___NSNumber,auVar15._8_8_,param_4);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_00299540(uVar5,auVar15._8_8_,auVar15._0_8_);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar15._0_8_);

        FUN_002115b0(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        uStack_108 = 0;

        local_110 = 0;

        uStack_f8 = 0;

        uStack_100 = 0;

        local_138[2] = 0;

        local_138[1] = 0;

        uStack_118 = 0;

        local_120 = (long *)0x0;

        _objc_retain();

        lVar10 = FUN_00293880(uVar6,extraout_x1_04,local_138 + 1,local_f0,0x10);

        lVar7 = lVar4;

        if (lVar10 != 0) {

          lVar13 = *local_120;

          do {

            lVar12 = 0;

            do {

              if (*local_120 != lVar13) {

                _objc_enumerationMutation(uVar6);

              }

              uVar14 = *(undefined8 *)(local_138[2] + lVar12 * 8);

              auVar15 = FUN_002974a0(uVar14);

              uVar8 = auVar15._8_8_;

              if (auVar15._0_8_ != param_4) {

                uVar8 = FUN_002974a0(uVar14);

                auVar15 = FUN_0020eb40(param_1,uVar8);

                uVar8 = auVar15._8_8_;

                lVar7 = auVar15._0_8_ + lVar7;

              }

              lVar12 = lVar12 + 1;

            } while (lVar10 != lVar12);

            lVar10 = FUN_00293880(uVar6,uVar8,local_138 + 1,local_f0,0x10);

          } while (lVar10 != 0);

        }

        _objc_release(uVar6);

        if ((((lVar9 == 0) || (iVar2 = FUN_00297aa0(lVar9), iVar2 == 0)) ||

            (lVar10 = FUN_00299960(lVar9), lVar10 != lVar7)) ||

           (iVar2 = FUN_002a28a0(lVar9), iVar2 != DAT_003eaab4)) {

          FUN_0020ec88(param_1,param_4,lVar4);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar9);

          iVar2 = FUN_00297aa0(lVar7);

          if (iVar2 == 0) {

            local_138[0] = 0;

            FUN_0021ab24(param_1,local_138);

            lVar9 = _objc_retainAutoreleasedReturnValue();

            lVar10 = local_138[0];

            _objc_retain(local_138[0]);

            uVar8 = extraout_x1_07;

            if (lVar9 != 0) {

              if (lVar10 != 0) {

                auVar15 = FUN_002974a0(lVar10);

                uVar8 = auVar15._8_8_;

                if (auVar15._0_8_ != param_4) goto LAB_00202598;

              }

              _objc_release(lVar10);

              goto LAB_002025e4;

            }

LAB_00202598:

            FUN_00299400(&_OBJC_CLASS___NSNumber,uVar8,param_4);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b4a0(uVar5,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            _objc_release(lVar9);

            _objc_release(lVar10);

          }

          else {

            FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_05,param_4);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_002a00a0(uVar5,auVar15._8_8_,lVar7,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            FUN_0021027c(param_1,lVar7);

          }

          _objc_retain(lVar7);

          lVar9 = lVar7;

        }

        else {

          _objc_retain(lVar9);

          lVar7 = lVar9;

        }

LAB_002025e4:

        _objc_release(uVar6);

        _objc_release(lVar7);

        _objc_release(uVar5);

        _objc_release(param_1);

        uVar11 = FUN_00297aa0(lVar9);

        if ((uVar11 & 1) == 0) {

          FUN_0020e940(param_1,lVar3,1);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          iVar2 = FUN_00297aa0();

          if (iVar2 == 0) {

            uVar6 = FUN_002974a0(lVar3);

            FUN_0021adac(param_1,uVar6);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00297aa0();

            if (iVar2 != 0) {

              FUN_0020b734(param_1,1);

              FUN_00294d00(uVar6);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              lVar4 = FUN_00293860();

              _objc_release(uVar8);

            }

          }

          else {

            FUN_0020b734(param_1,1);

            FUN_00294d00(uVar5);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            lVar4 = FUN_00293860();

          }

          _objc_release(uVar6);

        }

        else {

          FUN_0020b734(param_1,1);

          FUN_00294d00(lVar9);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          lVar4 = FUN_00293860();

        }

        _objc_release(uVar5);

        _objc_release(lVar9);

      }

    }

  }

  else {

    FUN_0020e91c(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_1,&DAT_003ead87);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    local_158 = lVar4;

    if (lVar3 == 0) {

      local_148 = 0;

      FUN_0021ab24(param_1,&local_148);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      lVar3 = local_148;

      _objc_retain(local_148);

      if (lVar7 == 0) {

        _objc_release(lVar3);

        lVar3 = 0;

        uVar5 = extraout_x1_01;

      }

      else {

        _objc_retain(lVar3);

        FUN_002115b0(param_1);

        local_158 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar4);

        _objc_release(lVar7);

        _objc_release(lVar3);

        uVar5 = extraout_x1_00;

        if (lVar3 != 0) goto LAB_00201c04;

      }

    }

    else {

LAB_00201c04:

      auVar15 = FUN_002974a0(lVar3);

      uVar5 = auVar15._8_8_;

      if (param_4 == auVar15._0_8_) {

        FUN_0020e940(param_1,lVar3,1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        iVar2 = FUN_00297aa0();

        if (iVar2 == 0) {

          uVar6 = FUN_002974a0(lVar3);

          FUN_0021adac(param_1,uVar6);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          iVar2 = FUN_00297aa0();

          if (iVar2 == 0) {

            lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

          }

          else {

            FUN_00294d00(uVar6);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            lVar4 = FUN_00293860();

            _objc_release(uVar8);

          }

        }

        else {

          FUN_00294d00(uVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          lVar4 = FUN_00293860();

        }

        _objc_release(uVar6);

        _objc_release(uVar5);

        goto LAB_00201f70;

      }

    }

    FUN_00299420(&_OBJC_CLASS___NSNumber,uVar5,param_4);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00293560(local_158,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    if (iVar2 == 0) {

      lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

    }

    else {

      local_f0[0] = 0;

      bVar1 = FUN_00212b7c(param_1,param_4,0,local_f0);

      if ((bVar1 & local_f0[0]) == 1) {

        lVar4 = (*DAT_003eabf0)(param_1,param_2,param_3,param_4);

      }

      else {

        lVar4 = 0;

      }

    }

  }

LAB_00201f70:

  _objc_release(local_158);

  _objc_release(lVar3);

LAB_00201f80:

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return lVar4;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




