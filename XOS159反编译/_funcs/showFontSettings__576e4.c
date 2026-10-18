// showFontSettings @0x576e4


/* WARNING: Type propagation algorithm not settling */

/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showFontSettings(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 uVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  SEL extraout_x1_13;

  undefined8 uVar13;

  long lVar14;

  long lVar15;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  long local_1f8 [3];

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

  if (DAT_003e7530 != -1) {

    FUN_0028edd4();

    param_2 = extraout_x1_13;

  }

  auVar16 = _objc_alloc_init(DAT_003e7528,param_2);

  uVar2 = auVar16._0_8_;

  FUN_002a1f60(uVar2,auVar16._8_8_,&cf_W_SOn_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar2);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar16._0_8_,auVar16._8_8_,uVar3);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar3);

  FUN_00299140(uVar2);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cec0(auVar16._0_8_,auVar16._8_8_,2);

  _objc_release(auVar16._0_8_);

  uVar3 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar3 = FUN_00296be0(uVar3,extraout_x1,2);

  _objc_release(uVar4);

  FUN_0029ce00(uVar3,extraout_x1_00,0x12);

  FUN_002a1c80(uVar3,extraout_x1_01,&DAT_00001bbc);

  FUN_002a6220(uVar2);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar16._0_8_,auVar16._8_8_,uVar3);

  _objc_release(auVar16._0_8_);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  FUN_002a4460(uVar5,extraout_x1_02,&cf_CoverRes_reFont);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00293660(auVar16._0_8_,auVar16._8_8_,uVar4,0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar16._0_8_);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  _objc_retain(uVar6);

  lVar8 = FUN_00293880(uVar6,extraout_x1_03,&local_1b0,auStack_f0,0x10);

  if (lVar8 != 0) {

    lVar14 = *local_1a0;

    do {

      lVar15 = 0;

      do {

        if (*local_1a0 != lVar14) {

          _objc_enumerationMutation(uVar6);

        }

        uVar13 = *(undefined8 *)(lStack_1a8 + lVar15 * 8);

        FUN_00299b20(uVar13);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        uVar10 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar9);

        auVar16 = FUN_00297820(uVar10,extraout_x1_04,&cf_ttf);

        uVar9 = auVar16._8_8_;

        if (((auVar16._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00297820(uVar10,uVar9,&cf_otf), uVar9 = extraout_x1_05, iVar1 != 0)) {

          FUN_00291240(uVar7,uVar9,uVar13);

        }

        _objc_release(uVar10);

        lVar15 = lVar15 + 1;

      } while (lVar8 != lVar15);

      lVar8 = FUN_00293880(uVar6,extraout_x1_06,&local_1b0,auStack_f0,0x10);

    } while (lVar8 != 0);

  }

  _objc_release(uVar6);

  FUN_002a3f00(uVar7,extraout_x1_07,"localizedCaseInsensitiveCompare:");

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  uStack_1c8 = 0;

  local_1d0 = 0;

  uStack_1b8 = 0;

  uStack_1c0 = 0;

  local_1f8[2] = 0;

  local_1f8[1] = 0;

  uStack_1d8 = 0;

  local_1e0 = (long *)0x0;

  _objc_retain(uVar7);

  auVar16 = FUN_00293880(uVar7,extraout_x1_08,local_1f8 + 1,auStack_170,0x10);

  if (auVar16._0_8_ != 0) {

    lVar8 = *local_1e0;

    do {

      uVar10 = auVar16._8_8_;

      lVar14 = 0;

      do {

        if (*local_1e0 != lVar8) {

          _objc_enumerationMutation(uVar7);

          uVar10 = extraout_x1_09;

        }

        uVar13 = *(undefined8 *)(local_1f8[2] + lVar14 * 8);

        FUN_002a4460(uVar4,uVar10,uVar13);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        FUN_00294020(&_OBJC_CLASS___NSData,auVar17._8_8_,auVar17._0_8_);

        lVar15 = _objc_retainAutoreleasedReturnValue();

        if (lVar15 != 0) {

          uVar10 = _CGDataProviderCreateWithCFData(lVar15);

          lVar11 = _CGFontCreateWithDataProvider();

          _CGDataProviderRelease(uVar10);

          if (lVar11 != 0) {

            uVar10 = _CGFontCopyPostScriptName(lVar11);

            local_1f8[0] = 0;

            _CTFontManagerRegisterGraphicsFont(lVar11,local_1f8);

            if (local_1f8[0] != 0) {

              _CFRelease();

            }

            _CGFontRelease(lVar11);

            auVar18 = FUN_00297fa0(uVar10);

            if (auVar18._0_8_ != 0) {

              FUN_002a00a0(uVar9,auVar18._8_8_,uVar10,uVar13);

            }

            _objc_release(uVar10);

          }

        }

        _objc_release(lVar15);

        _objc_release(auVar17._0_8_);

        lVar14 = lVar14 + 1;

        uVar10 = extraout_x1_10;

      } while (auVar16._0_8_ != lVar14);

      auVar16 = FUN_00293880(uVar7,extraout_x1_10,local_1f8 + 1,auStack_170,0x10);

    } while (auVar16._0_8_ != 0);

  }

  _objc_release(uVar7);

  _objc_setAssociatedObject(uVar2,"fontFiles",uVar7,1);

  _objc_setAssociatedObject(uVar2,"fontDir",uVar4,1);

  _objc_setAssociatedObject(uVar2,"fontPSNames",uVar9,1);

  uVar10 = DAT_003e7528;

  uVar13 = _NSSelectorFromString(&cf_addFontFile);

  uVar12 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389c20);

  _class_addMethod(uVar10,uVar13,uVar12,"v@:");

  uVar10 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  auVar16 = _NSSelectorFromString(&cf_addFontFile);

  uVar10 = FUN_00296960(uVar10,auVar16._8_8_,4,uVar2,auVar16._0_8_);

  FUN_00299140(uVar2);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar16._0_8_,auVar16._8_8_,uVar10);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar10);

  uVar10 = DAT_003e7528;

  uVar13 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389c60);

  _class_addMethod(uVar10,"numberOfSectionsInTableView:",uVar13,"l@:@");

  uVar10 = DAT_003e7528;

  uVar13 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389ca0);

  _class_addMethod(uVar10,"tableView:numberOfRowsInSection:",uVar13,"l@:@l");

  uVar10 = DAT_003e7528;

  uVar13 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389ce0);

  _class_addMethod(uVar10,"tableView:cellForRowAtIndexPath:",uVar13,"@@:@@");

  uVar10 = DAT_003e7528;

  uVar13 = _NSSelectorFromString(&cf_tableView_titleForHeaderInSection_);

  uVar12 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389d20);

  _class_addMethod(uVar10,uVar13,uVar12,"@@:@l");

  uVar10 = DAT_003e7528;

  uVar13 = _NSSelectorFromString(&cf_fontSwitchChanged_);

  uVar12 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389d60);

  _class_addMethod(uVar10,uVar13,uVar12,"v@:@");

  uVar10 = DAT_003e7528;

  uVar13 = _NSSelectorFromString(&cf_webFontSwitchChanged_);

  uVar12 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389d80);

  _class_addMethod(uVar10,uVar13,uVar12,"v@:@");

  uVar10 = DAT_003e7528;

  uVar13 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389dc0);

  _class_addMethod(uVar10,"tableView:didSelectRowAtIndexPath:",uVar13,"v@:@@");

  uVar10 = DAT_003e7528;

  uVar13 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389e20);

  _class_addMethod(uVar10,"tableView:canEditRowAtIndexPath:",uVar13,"B@:@@");

  uVar10 = DAT_003e7528;

  uVar13 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389e60);

  _class_addMethod(uVar10,"tableView:commitEditingStyle:forRowAtIndexPath:",uVar13,"v@:@l@");

  uVar10 = DAT_003e7528;

  uVar13 = _imp_implementationWithBlock(&PTR___NSConcreteGlobalBlock_00389ea0);

  _class_addMethod(uVar10,"documentPicker:didPickDocumentsAtURLs:",uVar13,"v@:@@");

  FUN_0029dca0(uVar3,extraout_x1_11,uVar2);

  FUN_0029db40(uVar3,extraout_x1_12,uVar2);

  FUN_002990e0(param_1);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar16._0_8_,auVar16._8_8_,uVar2,1);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar9);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar4);

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




