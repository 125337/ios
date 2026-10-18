// FUN_0021676c @0x21676c


void FUN_0021676c(undefined1 param_1 [16],undefined8 param_2,double param_3,long param_4)



{

  char cVar1;

  char cVar2;

  bool bVar3;

  bool bVar4;

  bool bVar5;

  uint uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar10;

  long lVar11;

  long lVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  undefined1 auVar18 [16];

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined1 auStack_108 [128];

  long local_88;

  

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_4 != 0) {

    lStack_148 = 0;

    local_150 = 0;

    uStack_138 = 0;

    local_140 = (long *)0x0;

    uStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    uStack_120 = 0;

    FUN_002a4840(param_4);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar18._0_8_;

    lVar7 = FUN_00293880(uVar9,auVar18._8_8_,&local_150,auStack_108,0x10);

    if (lVar7 != 0) {

      lVar11 = *local_140;

      do {

        lVar12 = 0;

        do {

          if (*local_140 != lVar11) {

            _objc_enumerationMutation(uVar9);

          }

          lVar10 = *(long *)(lStack_148 + lVar12 * 8);

          auVar18 = FUN_002a4e60(lVar10);

          uVar8 = auVar18._8_8_;

          if (auVar18._0_8_ == &UNK_0000271a) {

            uVar8 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

            auVar18 = _objc_opt_isKindOfClass(lVar10,uVar8);

            uVar8 = auVar18._8_8_;

            if ((auVar18._0_8_ & 1) != 0) {

              _objc_retain(lVar10);

              _objc_release(uVar9);

              if (lVar10 != 0) {

                cVar1 = '\0';

                if (DAT_003eaac8 - 1 < 4) {

                  cVar1 = DAT_003eaa30;

                }

                cVar2 = '\0';

                if (DAT_003eaad0 == 0) {

                  cVar2 = cVar1;

                }

                _objc_getAssociatedObject(param_4,&DAT_003eaeb3);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                uVar6 = FUN_002924e0();

                _objc_release(uVar9);

                if (cVar2 == '\0') {

                  if (uVar6 != 0) {

                    FUN_00295600(lVar10);

                    FUN_002925a0(param_4);

                    FUN_0029e5e0(0,param_2,lVar10);

                    FUN_0029d4a0(param_4,extraout_x1_01,1);

                    _objc_setAssociatedObject(param_4,&DAT_003eaeb3,0,1);

                  }

                }

                else {

                  _objc_getAssociatedObject(param_4,&DAT_003eae72);

                  lVar7 = _objc_retainAutoreleasedReturnValue();

                  _objc_getAssociatedObject(param_4,&DAT_003eae71);

                  lVar11 = _objc_retainAutoreleasedReturnValue();

                  dVar13 = 0.0;

                  dVar16 = param_3;

                  if ((lVar7 != 0) && (lVar11 != 0)) {

                    FUN_00290aa0(lVar7);

                    dVar16 = param_3;

                    FUN_00290aa0(lVar11);

                    dVar13 = param_3 - dVar16;

                  }

                  if (dVar13 <= 0.0) {

                    dVar13 = DAT_003eaa38;

                  }

                  if (dVar13 <= 0.0) {

                    _objc_release(lVar11);

                    _objc_release(lVar7);

                  }

                  else {

                    dVar14 = -dVar13;

                    if ((DAT_003eaac8 & 0xfffffffffffffffd) != 1) {

                      dVar14 = 0.0;

                    }

                    FUN_002925a0(param_4);

                    dVar17 = dVar16;

                    dVar15 = (double)FUN_00295600(lVar10);

                    dVar16 = ABS(dVar17 - (dVar13 + dVar16));

                    bVar3 = false;

                    bVar4 = false;

                    bVar5 = false;

                    if (ABS(dVar15 - dVar14) <= 0.5) {

                      bVar3 = false;

                      bVar4 = false;

                      bVar5 = true;

                      if (!NAN(dVar16)) {

                        bVar3 = dVar16 < 0.5;

                        bVar4 = dVar16 == 0.5;

                        bVar5 = false;

                      }

                    }

                    uVar9 = extraout_x1;

                    if (!bVar4 && bVar3 == bVar5) {

                      FUN_0029e5e0(dVar14,lVar10);

                      uVar9 = extraout_x1_00;

                    }

                    if ((uVar6 & 1) == 0) {

                      FUN_0029d4a0(param_4,uVar9,0);

                      _objc_setAssociatedObject

                                (param_4,&DAT_003eaeb3,PTR____kCFBooleanTrue_00388320,1);

                    }

                    _objc_release(lVar11);

                    _objc_release(lVar7);

                  }

                }

              }

              goto LAB_00216a60;

            }

          }

          lVar12 = lVar12 + 1;

        } while (lVar7 != lVar12);

        lVar7 = FUN_00293880(uVar9,uVar8,&local_150,auStack_108,0x10);

      } while (lVar7 != 0);

    }

    _objc_release(uVar9);

    lVar10 = 0;

LAB_00216a60:

    _objc_release(lVar10);

  }

  _objc_release(param_4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_88) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




