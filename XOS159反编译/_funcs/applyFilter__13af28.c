// applyFilter @0x13af28


/* Function Stack Size: 0x10 bytes */



void CadisContactPickerViewController::applyFilter(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  byte bVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  ulong uVar6;

  undefined8 uVar7;

  long lVar8;

  cfstringStruct *pcVar9;

  cfstringStruct *pcVar10;

  cfstringStruct *pcVar11;

  cfstringStruct *pcVar12;

  undefined8 uVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar14;

  undefined8 uVar15;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  cfstringStruct *local_148;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_0029bf00();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar3);

  FUN_002a64e0(&_OBJC_CLASS___NSCharacterSet);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(pcVar1,auVar16._8_8_,auVar16._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(pcVar1);

  _objc_release(auVar16._0_8_);

  lVar5 = FUN_00297fa0(uVar3);

  if (lVar5 == 0) {

    local_148 = &::cf___;

  }

  else {

    FUN_002984e0(uVar3);

    local_148 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e460(param_1,auVar16._8_8_,auVar16._0_8_);

  _objc_release(auVar16._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  FUN_002915a0(param_1);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  uVar13 = auVar16._0_8_;

  auVar16 = FUN_00293880(uVar13,auVar16._8_8_,&local_130,auStack_f0,0x10);

  if (auVar16._0_8_ != 0) {

    lVar5 = *local_120;

    do {

      uVar7 = auVar16._8_8_;

      lVar14 = 0;

      do {

        if (*local_120 != lVar5) {

          _objc_enumerationMutation(uVar13);

          uVar7 = extraout_x1;

        }

        uVar15 = *(undefined8 *)(lStack_128 + lVar14 * 8);

        FUN_00299540(uVar15,uVar7,&cf_userName);

        pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        pcVar1 = &::cf___;

        if (pcVar4 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar4;

        }

        _objc_retain(pcVar1);

        _objc_release(pcVar4);

        FUN_0029c200(param_1);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        uVar6 = FUN_00293560(auVar17._0_8_,auVar17._8_8_,pcVar1);

        _objc_release(auVar17._0_8_);

        if ((uVar6 & 1) == 0) {

          FUN_00299540(uVar15,extraout_x1_00,&cf_isGroup);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          bVar2 = FUN_002924e0();

          _objc_release(uVar7);

          lVar8 = FUN_00295240(param_1);

          if (((lVar8 == 1 & bVar2) == 0) &&

             (lVar8 = FUN_00295240(param_1), lVar8 != 2 || (bVar2 & 1) != 0)) {

            auVar17 = FUN_00297fa0(local_148);

            if (auVar17._0_8_ != 0) {

              FUN_00299540(uVar15,auVar17._8_8_,&cf__nameLC);

              pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar4 = &::cf___;

              if (pcVar9 != (cfstringStruct *)0x0) {

                pcVar4 = pcVar9;

              }

              _objc_retain();

              _objc_release(pcVar9);

              FUN_00299540(uVar15,extraout_x1_01,&cf__remarkLC);

              pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar9 = &::cf___;

              if (pcVar10 != (cfstringStruct *)0x0) {

                pcVar9 = pcVar10;

              }

              _objc_retain(pcVar9);

              _objc_release(pcVar10);

              FUN_00299540(uVar15,extraout_x1_02,&cf__pinyinLC);

              pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar10 = &::cf___;

              if (pcVar11 != (cfstringStruct *)0x0) {

                pcVar10 = pcVar11;

              }

              _objc_retain(pcVar10);

              _objc_release(pcVar11);

              FUN_00299540(uVar15,extraout_x1_03,&cf__unLC);

              pcVar12 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar11 = &::cf___;

              if (pcVar12 != (cfstringStruct *)0x0) {

                pcVar11 = pcVar12;

              }

              _objc_retain(pcVar11);

              _objc_release(pcVar12);

              auVar17 = FUN_00293580(pcVar4,extraout_x1_04,local_148);

              if ((auVar17._0_8_ & 1) == 0) {

                auVar17 = FUN_00293580(pcVar9,auVar17._8_8_,local_148);

                if ((auVar17._0_8_ & 1) == 0) {

                  auVar17 = FUN_00293580(pcVar10,auVar17._8_8_,local_148);

                  if ((auVar17._0_8_ & 1) == 0) {

                    uVar6 = FUN_00293580(pcVar11,auVar17._8_8_,local_148);

                    _objc_release(pcVar11);

                    _objc_release(pcVar10);

                    _objc_release(pcVar9);

                    _objc_release(pcVar4);

                    if ((uVar6 & 1) == 0) goto LAB_0013b2c0;

                    goto LAB_0013b29c;

                  }

                }

              }

              _objc_release(pcVar11);

              _objc_release(pcVar10);

              _objc_release(pcVar9);

              _objc_release(pcVar4);

            }

LAB_0013b29c:

            FUN_002952c0(param_1);

            auVar17 = _objc_retainAutoreleasedReturnValue();

            FUN_00291240(auVar17._0_8_,auVar17._8_8_,uVar15);

            _objc_release(auVar17._0_8_);

          }

        }

LAB_0013b2c0:

        _objc_release(pcVar1);

        lVar14 = lVar14 + 1;

        uVar7 = extraout_x1_05;

      } while (auVar16._0_8_ != lVar14);

      auVar16 = FUN_00293880(uVar13,extraout_x1_05,&local_130,auStack_f0,0x10);

    } while (auVar16._0_8_ != 0);

  }

  _objc_release(uVar13);

  FUN_002a5b20(param_1);

  FUN_002a4dc0(param_1);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar13);

  _objc_release(local_148);

  _objc_release(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




