// xzy_loadImages @0x11c7a8


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_loadImages(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined1 auVar9 [16];

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

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec60(param_1,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  _NSHomeDirectory();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar9._0_8_,auVar9._8_8_,&cf_Documents_CoverRes_nameplate);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00293660(auVar9._0_8_,auVar9._8_8_,uVar2,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(uVar3);

  lVar4 = FUN_00293880(uVar3,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar4 != 0) {

    lVar8 = *local_120;

    do {

      lVar6 = 0;

      do {

        if (*local_120 != lVar8) {

          _objc_enumerationMutation(uVar3);

        }

        uVar7 = *(undefined8 *)(lStack_128 + lVar6 * 8);

        FUN_00299b20(uVar7);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        auVar9 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_00293560(&PTR__OBJC_CLASS___NSConstantArray_003be200,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        _objc_release(uVar5);

        uVar5 = extraout_x1_00;

        if (iVar1 != 0) {

          FUN_002964e0(param_1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_00291240(auVar9._0_8_,auVar9._8_8_,uVar7);

          _objc_release(auVar9._0_8_);

          uVar5 = extraout_x1_01;

        }

        lVar6 = lVar6 + 1;

      } while (lVar4 != lVar6);

      lVar4 = FUN_00293880(uVar3,uVar5,&local_130,auStack_f0,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar3);

  FUN_002964e0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a3f00(auVar9._0_8_,auVar9._8_8_,"localizedCaseInsensitiveCompare:");

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




