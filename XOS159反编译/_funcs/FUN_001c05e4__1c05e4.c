// FUN_001c05e4 @0x1c05e4


void FUN_001c05e4(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  long local_88;

  long local_80;

  long local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 uStack_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  if (*(long *)(param_1 + 0x20) == DAT_003e97b8) {

    if ((DAT_003e9798 == 0) || ((DAT_003e97c0 & 1) == 0)) {

      if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

        FUN_001c0520(*(undefined4 *)(param_1 + 0x28));

        return;

      }

      goto LAB_001c0868;

    }

    auVar7 = _objc_alloc(&_OBJC_CLASS___CHHapticEventParameter);

    uVar1 = FUN_00296d80(*(undefined4 *)(param_1 + 0x28),auVar7._0_8_,auVar7._8_8_,

                         *(undefined8 *)PTR__CHHapticEventParameterIDHapticIntensity_00388670);

    auVar7 = _objc_alloc(&_OBJC_CLASS___CHHapticEventParameter);

    uVar2 = FUN_00296d80(*(undefined4 *)(param_1 + 0x2c),auVar7._0_8_,auVar7._8_8_,

                         *(undefined8 *)PTR__CHHapticEventParameterIDHapticSharpness_00388678);

    auVar7 = _objc_alloc(&_OBJC_CLASS___CHHapticEvent);

    uVar5 = *(undefined8 *)PTR__CHHapticEventTypeHapticTransient_00388688;

    local_68 = uVar1;

    uStack_60 = uVar2;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar7._8_8_,&local_68,2);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar5 = FUN_00296b20(0,auVar7._0_8_,auVar8._8_8_,uVar5,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    auVar7 = _objc_alloc(&_OBJC_CLASS___CHHapticPattern);

    local_70 = uVar5;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar7._8_8_,&local_70,1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    local_78 = 0;

    lVar3 = FUN_00296b60(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_,PTR____NSArray0__struct_00388308,

                         &local_78);

    lVar6 = local_78;

    _objc_retain(local_78);

    _objc_release(auVar8._0_8_);

    if ((lVar6 == 0) && (lVar3 != 0)) {

      local_80 = 0;

      FUN_00293a80(DAT_003e9798,extraout_x1,lVar3,&local_80);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      lVar6 = local_80;

      _objc_retain(local_80);

      if ((lVar6 == 0) && (lVar4 != 0)) {

        local_88 = 0;

        FUN_002a4180(0,lVar4,extraout_x1_00,&local_88);

        lVar6 = local_88;

        _objc_retain(local_88);

        if (lVar6 != 0) {

          FUN_001c0520(*(undefined4 *)(param_1 + 0x28));

        }

      }

      else {

        FUN_001c0520(*(undefined4 *)(param_1 + 0x28));

      }

      _objc_release(lVar4);

    }

    else {

      FUN_001c0520(*(undefined4 *)(param_1 + 0x28));

    }

    _objc_release(lVar3);

    _objc_release(uVar5);

    _objc_release(uVar2);

    _objc_release(uVar1);

    _objc_release(lVar6);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

LAB_001c0868:

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




