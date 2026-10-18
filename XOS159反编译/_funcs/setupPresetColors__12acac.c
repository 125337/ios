// setupPresetColors @0x12acac


/* Function Stack Size: 0x10 bytes */



void XZYColorPickerViewController::setupPresetColors(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar4;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  uVar2 = _objc_alloc_init(&_OBJC_CLASS___UIView);

  lVar6 = (long)_presetContainer;

  uVar5 = *(undefined8 *)(param_1 + lVar6);

  *(undefined8 *)(param_1 + lVar6) = uVar2;

  _objc_release(uVar5);

  FUN_00291380(*(undefined8 *)(param_1 + (long)_scrollView),extraout_x1,

               *(undefined8 *)(param_1 + lVar6));

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar12._0_8_;

  iVar1 = FUN_002924c0(uVar2,auVar12._8_8_,&cf_xzyColorPickerFavoritesInited);

  FUN_00291d40(uVar2,extraout_x1_00,&cf_xzyColorPickerFavorites);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (iVar1 == 0 || lVar6 == 0) {

    uVar5 = FUN_00299020(&PTR__OBJC_CLASS___NSConstantArray_003be278);

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    _objc_retain(lVar6);

    lVar3 = FUN_00293880(lVar6,extraout_x1_01,&local_1b0,auStack_f0,0x10);

    if (lVar3 != 0) {

      lVar9 = *local_1a0;

      do {

        lVar10 = 0;

        do {

          if (*local_1a0 != lVar9) {

            _objc_enumerationMutation(lVar6);

          }

          uVar8 = *(undefined8 *)(lStack_1a8 + lVar10 * 8);

          lStack_1e8 = 0;

          local_1f0 = 0;

          uStack_1d8 = 0;

          local_1e0 = (long *)0x0;

          uStack_1c8 = 0;

          local_1d0 = 0;

          uStack_1b8 = 0;

          uStack_1c0 = 0;

          _objc_retain(uVar5);

          auVar12 = FUN_00293880(uVar5,extraout_x1_02,&local_1f0,auStack_170,0x10);

          if (auVar12._0_8_ != 0) {

            lVar11 = *local_1e0;

            do {

              uVar4 = auVar12._8_8_;

              lVar7 = 0;

              do {

                if (*local_1e0 != lVar11) {

                  _objc_enumerationMutation(uVar5);

                  uVar4 = extraout_x1_03;

                }

                auVar13 = FUN_00292a20(*(undefined8 *)(lStack_1e8 + lVar7 * 8),uVar4,uVar8);

                uVar4 = auVar13._8_8_;

                if (auVar13._0_8_ == 0) {

                  _objc_release(uVar5);

                  uVar8 = extraout_x1_06;

                  goto LAB_0012ae88;

                }

                lVar7 = lVar7 + 1;

              } while (auVar12._0_8_ != lVar7);

              auVar12 = FUN_00293880(uVar5,uVar4,&local_1f0,auStack_170,0x10);

            } while (auVar12._0_8_ != 0);

          }

          _objc_release(uVar5);

          FUN_00291240(uVar5,extraout_x1_04,uVar8);

          uVar8 = extraout_x1_05;

LAB_0012ae88:

          lVar10 = lVar10 + 1;

        } while (lVar10 != lVar3);

        lVar3 = FUN_00293880(lVar6,uVar8,&local_1b0,auStack_f0,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(lVar6);

    uVar8 = *(undefined8 *)(param_1 + (long)_favoriteColors);

    *(undefined8 *)(param_1 + (long)_favoriteColors) = uVar5;

    _objc_release(uVar8);

    FUN_0029bca0(param_1);

    FUN_0029d080(uVar2,extraout_x1_07,1,&cf_xzyColorPickerFavoritesInited);

    FUN_002a4a40(uVar2);

  }

  else {

    uVar5 = FUN_00299020(lVar6);

    uVar8 = *(undefined8 *)(param_1 + (long)_favoriteColors);

    *(undefined8 *)(param_1 + (long)_favoriteColors) = uVar5;

    _objc_release(uVar8);

  }

  FUN_0029ad60(param_1);

  _objc_release(lVar6);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




