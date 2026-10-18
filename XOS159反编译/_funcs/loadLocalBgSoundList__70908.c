// loadLocalBgSoundList @0x70908


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::loadLocalBgSoundList(ID param_1,SEL param_2)



{

  byte bVar1;

  byte bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ulong uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  byte local_161;

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

  undefined8 local_108;

  undefined8 uStack_100;

  undefined8 local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002923c0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar3);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  FUN_002a4460(uVar4,extraout_x1,&cf_CoverRes_music);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00293660(auVar13._0_8_,auVar13._8_8_,uVar3,0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  uStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  uStack_130 = 0;

  lStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  local_150 = (long *)0x0;

  _objc_retain(uVar5);

  lVar6 = FUN_00293880(uVar5,extraout_x1_00,&local_160,auStack_f0,0x10);

  if (lVar6 != 0) {

    lVar11 = *local_150;

    do {

      lVar10 = 0;

      do {

        if (*local_150 != lVar11) {

          _objc_enumerationMutation(uVar5);

        }

        uVar12 = *(undefined8 *)(lStack_158 + lVar10 * 8);

        FUN_00299b20(uVar12);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        uVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar7);

        auVar13 = FUN_00293560(&PTR__OBJC_CLASS___NSConstantArray_003bdc00,extraout_x1_01,uVar8);

        if ((auVar13._0_8_ & 1) != 0) {

          FUN_002a4460(uVar3,auVar13._8_8_,uVar12);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          local_161 = 0;

          FUN_00294240(&_OBJC_CLASS___NSFileManager);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          bVar2 = FUN_00295180(auVar13._0_8_,auVar13._8_8_,uVar7,&local_161);

          bVar1 = local_161;

          _objc_release(auVar13._0_8_);

          if (((bVar2 ^ 1 | bVar1) & 1) == 0) {

            FUN_002923c0(param_1);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            local_120 = &cf_name;

            pcStack_118 = &cf_id;

            local_110 = &cf_path;

            local_108 = uVar12;

            uStack_100 = uVar7;

            local_f8 = uVar7;

            FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&local_108,&local_120,3);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            FUN_00291240(auVar13._0_8_,auVar14._8_8_,auVar14._0_8_);

            _objc_release(auVar14._0_8_);

            _objc_release(auVar13._0_8_);

          }

          _objc_release(uVar7);

        }

        _objc_release(uVar8);

        lVar10 = lVar10 + 1;

      } while (lVar6 != lVar10);

      lVar6 = FUN_00293880(uVar5,extraout_x1_02,&local_160,auStack_f0,0x10);

    } while (lVar6 != 0);

  }

  _objc_release(uVar5);

  FUN_002923c0(param_1);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002a3ee0(auVar13._0_8_,auVar13._8_8_,&PTR___NSConcreteGlobalBlock_0038a1a0);

  _objc_release(auVar13._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar13._0_8_;

  FUN_002a45e0(uVar7,auVar13._8_8_,&cf_ttsSelectedBgSound);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  auVar13 = FUN_00297fa0();

  if ((auVar13._0_8_ != 0) &&

     (uVar9 = FUN_00297820(uVar8,auVar13._8_8_,&cf___xzy_tts_random_bg_sound__), (uVar9 & 1) == 0))

  {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar9 = FUN_00295160(auVar13._0_8_,auVar13._8_8_,uVar8);

    _objc_release(auVar13._0_8_);

    if ((uVar9 & 1) == 0) {

      FUN_0029b4a0(uVar7,extraout_x1_03,&cf_ttsSelectedBgSound);

      FUN_002a1140(param_1,extraout_x1_04,0);

    }

  }

  FUN_002923c0(param_1);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(uVar7,auVar13._8_8_,auVar13._0_8_,&cf_ttsLocalBgSoundCatalog);

  _objc_release(auVar13._0_8_);

  FUN_002a4a40(uVar7);

  FUN_002a4dc0(param_1);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar12);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




