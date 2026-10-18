// persistOnlineCache @0x2687fc


/* Function Stack Size: 0x10 bytes */



void XZYDockPlayerEngine::persistOnlineCache(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  cfstringStruct *pcVar5;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  cfstringStruct *pcVar8;

  undefined8 extraout_x1;

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  undefined1 auVar12 [16];

  undefined8 local_180;

  long lStack_178;

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  cfstringStruct *local_140;

  cfstringStruct *local_138;

  cfstringStruct *local_130;

  cfstringStruct *local_128;

  cfstringStruct *local_120;

  cfstringStruct *local_118;

  cfstringStruct *local_110;

  cfstringStruct *local_108;

  cfstringStruct *local_100;

  cfstringStruct *local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lStack_178 = 0;

  local_180 = 0;

  uStack_168 = 0;

  local_170 = (long *)0x0;

  uStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  uStack_150 = 0;

  FUN_00299840(param_1);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar12._0_8_;

  lVar3 = FUN_00293880(uVar2,auVar12._8_8_,&local_180,auStack_f0,0x10);

  if (lVar3 != 0) {

    lVar11 = *local_170;

    do {

      lVar9 = 0;

      do {

        if (*local_170 != lVar11) {

          _objc_enumerationMutation(uVar2);

        }

        uVar10 = *(undefined8 *)(lStack_178 + lVar9 * 8);

        local_140 = &cf_i;

        FUN_002a3ea0(uVar10);

        pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        local_118 = &::cf___;

        if (pcVar4 != (cfstringStruct *)0x0) {

          local_118 = pcVar4;

        }

        local_138 = &cf_t;

        FUN_002a5360(uVar10);

        pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        local_110 = &::cf___;

        if (pcVar5 != (cfstringStruct *)0x0) {

          local_110 = pcVar5;

        }

        local_130 = &cf_a;

        FUN_00291e20(uVar10);

        pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        local_108 = &::cf___;

        if (pcVar6 != (cfstringStruct *)0x0) {

          local_108 = pcVar6;

        }

        local_128 = &cf_c;

        FUN_002939a0(uVar10);

        pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        local_100 = &::cf___;

        if (pcVar7 != (cfstringStruct *)0x0) {

          local_100 = pcVar7;

        }

        local_120 = &cf_h;

        FUN_00296200(uVar10);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        pcVar8 = auVar12._0_8_;

        local_f8 = &::cf___;

        if (pcVar8 != (cfstringStruct *)0x0) {

          local_f8 = pcVar8;

        }

        FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar12._8_8_,&local_118,&local_140,5);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar1,auVar12._8_8_,auVar12._0_8_);

        _objc_release(auVar12._0_8_);

        _objc_release(pcVar8);

        _objc_release(pcVar7);

        _objc_release(pcVar6);

        _objc_release(pcVar5);

        _objc_release(pcVar4);

        lVar9 = lVar9 + 1;

      } while (lVar3 != lVar9);

      lVar3 = FUN_00293880(uVar2,extraout_x1,&local_180,auStack_f0,0x10);

    } while (lVar3 != 0);

  }

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar12._0_8_,auVar12._8_8_,uVar1,&cf_xzy_dock_player_cachedSongs);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




