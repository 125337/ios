// FUN_00030190 @0x30190


undefined8 FUN_00030190(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 local_200;

  long lStack_1f8;

  long *local_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  long lStack_1b8;

  long *local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined1 auStack_168 [128];

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);

  uVar5 = *(undefined8 *)(lVar6 + 0x28);

  FUN_00298780(&_OBJC_CLASS___NSBundle);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00292640();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_00088600(uVar2,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00088600(&cf_com_shtm_cadis,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _CFPreferencesAppSynchronize(uVar2);

  _CFPreferencesAppSynchronize(&cf_com_shtm_cadis);

  uStack_198 = 0;

  local_1a0 = 0;

  uStack_188 = 0;

  uStack_190 = 0;

  lStack_1b8 = 0;

  local_1c0 = 0;

  uStack_1a8 = 0;

  local_1b0 = (long *)0x0;

  _objc_retain(uVar1);

  lVar4 = FUN_00293880(uVar1,extraout_x1,&local_1c0,auStack_e8,0x10);

  if (lVar4 != 0) {

    lVar7 = *local_1b0;

    do {

      lVar8 = 0;

      do {

        if (*local_1b0 != lVar7) {

          _objc_enumerationMutation(uVar1);

        }

        FUN_00004000(*(undefined8 *)(lStack_1b8 + lVar8 * 8));

        lVar8 = lVar8 + 1;

      } while (lVar4 != lVar8);

      lVar4 = FUN_00293880(uVar1,extraout_x1_00,&local_1c0,auStack_e8,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar1);

  uStack_1d8 = 0;

  local_1e0 = 0;

  uStack_1c8 = 0;

  uStack_1d0 = 0;

  lStack_1f8 = 0;

  local_200 = 0;

  uStack_1e8 = 0;

  local_1f0 = (long *)0x0;

  _objc_retain(uVar3);

  lVar4 = FUN_00293880(uVar3,extraout_x1_01,&local_200,auStack_168,0x10);

  if (lVar4 != 0) {

    lVar7 = *local_1f0;

    do {

      lVar8 = 0;

      do {

        if (*local_1f0 != lVar7) {

          _objc_enumerationMutation(uVar3);

        }

        FUN_00004000(*(undefined8 *)(lStack_1f8 + lVar8 * 8));

        lVar8 = lVar8 + 1;

      } while (lVar4 != lVar8);

      lVar4 = FUN_00293880(uVar3,extraout_x1_02,&local_200,auStack_168,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar3);

  _objc_release(uVar3);

  _objc_release(uVar1);

  _objc_release(uVar2);

  _objc_retain(uVar5);

  uVar1 = *(undefined8 *)(lVar6 + 0x28);

  *(undefined8 *)(lVar6 + 0x28) = uVar5;

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return 1;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




