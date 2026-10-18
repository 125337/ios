// FUN_001c0fe4 @0x1c0fe4


void FUN_001c0fe4(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  int iVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  long local_70;

  undefined8 local_68;

  undefined8 uStack_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  if ((*(long *)(param_1 + 0x20) == DAT_003e97b8) && (iVar3 = FUN_001c0f98(), iVar3 != 0)) {

    uVar4 = FUN_001c009c();

    if ((uVar4 & 1) == 0) {

      if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

        FUN_001c0520(*(undefined4 *)(param_1 + 0x28));

        return;

      }

      goto LAB_001c11a8;

    }

    auVar6 = _objc_alloc(&_OBJC_CLASS___CHHapticDynamicParameter);

    uVar5 = FUN_00296da0(DAT_003e97f0,0,auVar6._0_8_,auVar6._8_8_,

                         *(undefined8 *)

                          PTR__CHHapticDynamicParameterIDHapticIntensityControl_00388660);

    auVar6 = _objc_alloc(&_OBJC_CLASS___CHHapticDynamicParameter);

    auVar6 = FUN_00296da0(DAT_003e97f4,0,auVar6._0_8_,auVar6._8_8_,

                          *(undefined8 *)

                           PTR__CHHapticDynamicParameterIDHapticSharpnessControl_00388668);

    uVar1 = DAT_003e97a0;

    local_68 = uVar5;

    uStack_60 = auVar6._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar6._8_8_,&local_68,2);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    local_70 = 0;

    FUN_0029c5e0(0,uVar1,auVar7._8_8_,auVar7._0_8_,&local_70);

    lVar2 = local_70;

    _objc_retain(local_70);

    _objc_release(auVar7._0_8_);

    if (lVar2 == 0) {

      DAT_003e70b0 = DAT_003e97f0;

      DAT_003e70b4 = DAT_003e97f4;

    }

    else {

      DAT_003e70b0 = 0xbf800000;

      DAT_003e70b4 = 0xbf800000;

      FUN_001c0520(*(undefined4 *)(param_1 + 0x28));

    }

    _objc_release(auVar6._0_8_);

    _objc_release(uVar5);

    _objc_release(lVar2);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

LAB_001c11a8:

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




