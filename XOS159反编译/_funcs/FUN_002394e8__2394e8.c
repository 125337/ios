// FUN_002394e8 @0x2394e8


undefined1  [16] FUN_002394e8(long param_1)



{

  long lVar1;

  double dVar2;

  undefined8 uVar3;

  undefined8 in_register_00005128;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  undefined8 local_58;

  undefined8 local_50;

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 == 0) {

    uVar3 = *(undefined8 *)PTR__CGSizeZero_00388bf8;

    in_register_00005128 = 0;

  }

  else {

    lVar1 = FUN_00297fa0(param_1);

    if (lVar1 == 0) {

      uVar3 = 0x4022000000000000;

      in_register_00005128 = 0;

    }

    else {

      local_58 = *(undefined8 *)PTR__NSFontAttributeName_00388358;

      FUN_002a4ac0(0x4026000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_00388430,

                   &_OBJC_CLASS___UIFont);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      local_50 = auVar4._0_8_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar4._8_8_,&local_50,&local_58,1);

      auVar5 = _objc_retainAutoreleasedReturnValue();

      dVar2 = (double)FUN_002a3e20(param_1,auVar5._8_8_,auVar5._0_8_);

      _objc_release(auVar5._0_8_);

      _objc_release(auVar4._0_8_);

      dVar2 = (double)(long)dVar2 + 10.0;

      if (dVar2 <= 18.0) {

        dVar2 = 18.0;

      }

      uVar3 = NEON_fminnm(dVar2,0x4041000000000000);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    auVar4._8_8_ = in_register_00005128;

    auVar4._0_8_ = uVar3;

    return auVar4;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




