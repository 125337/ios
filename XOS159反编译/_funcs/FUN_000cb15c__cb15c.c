// FUN_000cb15c @0xcb15c


void FUN_000cb15c(undefined8 param_1,undefined *param_2,undefined8 *param_3)



{

  int iVar1;

  void *pvVar2;

  undefined8 *puVar3;

  ulong extraout_x1;

  ulong uVar4;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar5;

  undefined *puVar6;

  ulong uVar7;

  long lVar8;

  ulong uVar9;

  undefined1 auVar10 [16];

  ushort local_622;

  uint local_620;

  uint uStack_61c;

  uint local_618;

  code *local_614;

  undefined8 uStack_60c;

  undefined4 local_604;

  undefined8 local_600;

  undefined8 uStack_5f8;

  undefined8 uStack_5f0;

  undefined8 uStack_5e8;

  uint local_5d8;

  undefined1 local_5d2;

  undefined1 local_5d1;

  undefined8 local_5d0;

  cfstringStruct *pcStack_5c8;

  undefined1 auStack_5ba [1250];

  undefined8 local_d8;

  undefined2 local_d0;

  undefined8 local_c8;

  cfstringStruct *pcStack_c0;

  undefined8 local_b8;

  cfstringStruct *pcStack_b0;

  undefined8 local_a8;

  cfstringStruct *pcStack_a0;

  undefined8 local_98;

  cfstringStruct *pcStack_90;

  undefined8 local_88;

  cfstringStruct *pcStack_80;

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  auVar10 = FUN_00297fa0(param_1);

  uVar5 = auVar10._8_8_;

  if ((auVar10._0_8_ == 0) ||

     (auVar10 = FUN_00297fa0(param_1), uVar5 = auVar10._8_8_, (auVar10._0_8_ & 1) != 0)) {

    if (param_3 == (undefined8 *)0x0) goto LAB_000cb254;

    local_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

    pcStack_80 = &cf_P;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar5,&pcStack_80,&local_88,1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar5 = 0xffffffffffffffff;

  }

  else {

    if ((long)param_2 < 16000) {

      if (param_2 != &DAT_00001f40) {

        puVar6 = &UNK_00002ee0;

LAB_000cb2a8:

        if (param_2 != puVar6) {

          if (param_3 == (undefined8 *)0x0) goto LAB_000cb254;

          local_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

          pcStack_90 = &cf_S;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar5,&pcStack_90,&local_98,1);

          auVar10 = _objc_retainAutoreleasedReturnValue();

          uVar5 = 0xfffffffffffffffe;

          goto LAB_000cb230;

        }

      }

    }

    else if (param_2 != &UNK_00003e80) {

      puVar6 = (undefined *)0x5dc0;

      goto LAB_000cb2a8;

    }

    local_5d8 = 0;

    iVar1 = FUN_000d6768(&local_5d8);

    uVar4 = extraout_x1;

    if ((iVar1 == 0) && (uVar4 = (ulong)local_5d8, 0 < (int)local_5d8)) {

      pvVar2 = _calloc(1,uVar4);

      if (pvVar2 == (void *)0x0) {

        if (param_3 == (undefined8 *)0x0) goto LAB_000cb254;

        local_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

        pcStack_b0 = &cf_S;

        FUN_00294560(&_OBJC_CLASS___NSDictionary);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        uVar5 = 0xfffffffffffffffc;

      }

      else {

        uStack_5f8 = 0;

        local_600 = 0;

        uStack_5e8 = 0;

        uStack_5f0 = 0;

        iVar1 = FUN_000d67d8(pvVar2,&local_600);

        if (iVar1 == 0) {

          local_620 = (uint)param_2;

          local_618 = (local_620 >> 1 & 0x7fff) / 0x19;

          uVar7 = (ulong)local_618;

          uStack_60c = 2;

          local_614 = PersonalOBF_CoversSettingViewController::resizeImage_toSize_;

          local_604 = 0;

          uStack_61c = local_620;

          uVar4 = FUN_00297fa0(param_1);

          _objc_retainAutorelease(param_1);

          auVar10 = FUN_00292680();

          lVar8 = auVar10._0_8_;

          local_d8 = 0x5f4b4c4953212302;

          local_d0 = 0x3356;

          FUN_00293fc0(&_OBJC_CLASS___NSMutableData,auVar10._8_8_,&local_d8,10);

          puVar3 = (undefined8 *)_objc_retainAutoreleasedReturnValue();

          if (uVar7 <= uVar4 >> 1) {

            uVar9 = uVar7;

            do {

              local_622 = 0x4e2;

              iVar1 = FUN_000d685c(pvVar2,&local_620,lVar8,uVar7,auStack_5ba,&local_622);

              if ((iVar1 != 0) || (0x4e1 < local_622 - 1)) {

                _free(pvVar2);

                if (param_3 != (undefined8 *)0x0) {

                  local_5d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

                  pcStack_5c8 = &cf_S;

                  FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_03,&pcStack_5c8,&local_5d0,1)

                  ;

                  auVar10 = _objc_retainAutoreleasedReturnValue();

                  FUN_00294de0(&_OBJC_CLASS___NSError,auVar10._8_8_,&cf_XZYSilk,0xfffffffffffffffa,

                               auVar10._0_8_);

                  _objc_retainAutoreleasedReturnValue();

                  uVar5 = _objc_autorelease();

                  *param_3 = uVar5;

                  _objc_release(auVar10._0_8_);

                }

                param_3 = (undefined8 *)0x0;

                goto LAB_000cb604;

              }

              local_5d2 = (undefined1)local_622;

              local_5d1 = (undefined1)(local_622 >> 8);

              FUN_00291960(puVar3,extraout_x1_01,&local_5d2,2);

              FUN_00291960(puVar3,extraout_x1_02,auStack_5ba,(long)(short)local_622);

              uVar9 = uVar9 + uVar7;

              lVar8 = lVar8 + uVar7 * 2;

            } while (uVar9 <= uVar4 >> 1);

          }

          _free(pvVar2);

          _objc_retain(puVar3);

          param_3 = puVar3;

LAB_000cb604:

          _objc_release(puVar3);

          goto LAB_000cb254;

        }

        _free(pvVar2);

        if (param_3 == (undefined8 *)0x0) goto LAB_000cb254;

        local_c8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

        pcStack_c0 = &cf_S;

        FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_00,&pcStack_c0,&local_c8,1);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        uVar5 = 0xfffffffffffffffb;

      }

    }

    else {

      if (param_3 == (undefined8 *)0x0) goto LAB_000cb254;

      local_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_a0 = &cf_elR_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar4,&pcStack_a0,&local_a8,1);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      uVar5 = 0xfffffffffffffffd;

    }

  }

LAB_000cb230:

  FUN_00294de0(&_OBJC_CLASS___NSError,auVar10._8_8_,&cf_XZYSilk,uVar5,auVar10._0_8_);

  _objc_retainAutoreleasedReturnValue();

  uVar5 = _objc_autorelease();

  *param_3 = uVar5;

  _objc_release(auVar10._0_8_);

  param_3 = (undefined8 *)0x0;

LAB_000cb254:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    _objc_autoreleaseReturnValue(param_3);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




