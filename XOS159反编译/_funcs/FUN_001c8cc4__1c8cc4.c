// FUN_001c8cc4 @0x1c8cc4


void FUN_001c8cc4(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar4;

  long lVar5;

  undefined1 auVar6 [16];

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  cfstringStruct *local_120;

  cfstringStruct *pcStack_118;

  cfstringStruct *local_110;

  cfstringStruct *pcStack_108;

  cfstringStruct *local_100;

  cfstringStruct *pcStack_f8;

  cfstringStruct *local_f0;

  cfstringStruct *pcStack_e8;

  cfstringStruct *local_e0;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  lStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  local_150 = (long *)0x0;

  uStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  uStack_130 = 0;

  local_120 = &cf_xzyDesktopLyricsPosition;

  pcStack_118 = &cf_xzyDesktopLyricsYOffset;

  local_110 = &cf_xzyDesktopLyricsFontSize;

  pcStack_108 = &cf_xzyDesktopLyricsColorLight;

  local_100 = &cf_xzyDesktopLyricsColorDark;

  pcStack_f8 = &cf_xzyDesktopLyricsBGOpacity;

  local_f0 = &cf_xzyDesktopLyricsBold;

  pcStack_e8 = &cf_xzyDesktopLyricsShadow;

  local_e0 = &cf_xzyDesktopLyricsMaxWidth;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar6._8_8_,&local_120,9);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar6._0_8_;

  auVar6 = FUN_00293880(uVar2,auVar6._8_8_,&local_160,auStack_d8,0x10);

  if (auVar6._0_8_ != 0) {

    lVar4 = *local_150;

    do {

      uVar3 = auVar6._8_8_;

      lVar5 = 0;

      do {

        if (*local_150 != lVar4) {

          _objc_enumerationMutation(uVar2);

          uVar3 = extraout_x1;

        }

        FUN_0029b4a0(uVar1,uVar3,*(undefined8 *)(lStack_158 + lVar5 * 8));

        lVar5 = lVar5 + 1;

        uVar3 = extraout_x1_00;

      } while (auVar6._0_8_ != lVar5);

      auVar6 = FUN_00293880(uVar2,extraout_x1_00,&local_160,auStack_d8,0x10);

    } while (auVar6._0_8_ != 0);

  }

  _objc_release(uVar2);

  FUN_002a4a40(uVar1);

  FUN_001c478c();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  if (DAT_003ea920 == '\x01') {

    FUN_001c3d54(&cf_j_);

  }

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




