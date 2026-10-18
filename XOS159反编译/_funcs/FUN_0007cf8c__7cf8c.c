// FUN_0007cf8c @0x7cf8c


void FUN_0007cf8c(long param_1,undefined8 param_2,long param_3)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar4 [16];

  undefined8 local_58;

  cfstringStruct *pcStack_50;

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  _objc_retain(param_3);

  if (param_3 == 0) {

    iVar1 = FUN_00297820(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_fish);

    uVar3 = extraout_x1_00;

    if ((iVar1 == 0) || (auVar4 = FUN_00297fa0(param_2), uVar3 = auVar4._8_8_, auVar4._0_8_ == 0)) {

      iVar1 = FUN_00297820(*(undefined8 *)(param_1 + 0x20),uVar3,&cf_fv);

      uVar3 = extraout_x1_01;

      if ((iVar1 == 0) || (auVar4 = FUN_00297fa0(param_2), uVar3 = auVar4._8_8_, auVar4._0_8_ == 0))

      {

        lVar2 = *(long *)(param_1 + 0x40);

        if (lVar2 != 0) {

          local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

          pcStack_50 = &cf__gS0R__r;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar3,&pcStack_50,&local_58,1);

          auVar4 = _objc_retainAutoreleasedReturnValue();

          FUN_00294de0(&_OBJC_CLASS___NSError,auVar4._8_8_,&cf_TTSError,0xfffffffffffffb4e,

                       auVar4._0_8_);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          (**(code **)(lVar2 + 0x10))(lVar2,0,uVar3);

          _objc_release(uVar3);

          _objc_release(auVar4._0_8_);

        }

      }

      else {

        FUN_0006a048(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x28),

                     *(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),

                     *(undefined8 *)(param_1 + 0x48));

      }

    }

    else {

      FUN_00069b88(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,

                   *(undefined8 *)(param_1 + 0x48));

    }

  }

  else {

    lVar2 = *(long *)(param_1 + 0x40);

    if (lVar2 != 0) {

      (**(code **)(lVar2 + 0x10))(lVar2,0,param_3);

    }

  }

  _objc_release(param_3);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




