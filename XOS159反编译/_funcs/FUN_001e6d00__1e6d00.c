// FUN_001e6d00 @0x1e6d00


void FUN_001e6d00(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined *puVar5;

  long lVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar9;

  long lVar10;

  undefined1 auVar11 [16];

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

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar11 = FUN_00297fa0(uVar4);

  if (auVar11._0_8_ == 0) {

    FUN_0029b4a0(uVar2,auVar11._8_8_,&cf_xzyChatListGroupingHorizontalSearchOrbTitle);

  }

  else {

    FUN_002a0060(uVar2,auVar11._8_8_,uVar4,&cf_xzyChatListGroupingHorizontalSearchOrbTitle);

  }

  _os_unfair_lock_lock(&DAT_003ead54);

  puVar5 = PTR____NSArray0__struct_00388308;

  if (DAT_003eaa70 != 0) {

    FUN_00291620();

    puVar5 = (undefined *)_objc_retainAutoreleasedReturnValue();

  }

  _os_unfair_lock_unlock(&DAT_003ead54);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(puVar5);

  lVar6 = FUN_00293880(puVar5,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar6 != 0) {

    lVar10 = *local_120;

    do {

      lVar9 = 0;

      do {

        if (*local_120 != lVar10) {

          _objc_enumerationMutation(puVar5);

        }

        _objc_getAssociatedObject(*(undefined8 *)(lStack_128 + lVar9 * 8),&DAT_003eae52);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        if (lVar7 != 0) {

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          FUN_002a45e0(auVar11._0_8_,auVar11._8_8_,&cf_xzyChatListGroupingHorizontalSearchOrbTitle);

          pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(auVar11._0_8_);

          pcVar1 = &cf_d__;

          if (pcVar8 != (cfstringStruct *)0x0) {

            pcVar1 = pcVar8;

          }

          FUN_0029d600(lVar7,extraout_x1_00,pcVar1);

          FUN_002933c0(lVar7);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          FUN_002a53a0(lVar7);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,uVar3);

          _objc_release(auVar11._0_8_);

          _objc_release(uVar3);

          FUN_0029ff40(lVar7);

          FUN_00297ee0(lVar7);

          _objc_release(pcVar8);

        }

        _objc_release(lVar7);

        lVar9 = lVar9 + 1;

      } while (lVar6 != lVar9);

      lVar6 = FUN_00293880(puVar5,extraout_x1_01,&local_130,auStack_f0,0x10);

    } while (lVar6 != 0);

  }

  _objc_release(puVar5);

  _objc_release(puVar5);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar4);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




