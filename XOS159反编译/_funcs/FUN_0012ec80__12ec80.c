// FUN_0012ec80 @0x12ec80


uint FUN_0012ec80(long param_1)



{

  int iVar1;

  uint uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 local_120;

  long lStack_118;

  long *local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 != 0) {

    uVar3 = _object_getClass(param_1);

    if (DAT_003e85e8 == 0) {

      DAT_003e85e8 = _CFDictionaryCreateMutable(0,0,0,0);

    }

    lVar4 = _CFDictionaryGetValue(DAT_003e85e8,uVar3);

    if (lVar4 == 1) {

      uVar2 = 1;

      goto LAB_0012ee70;

    }

    if (lVar4 != 2) {

      if (DAT_003e85f8 != -1) {

        FUN_0028f49c();

      }

      uVar5 = DAT_003e85f0;

      uStack_f8 = 0;

      local_100 = 0;

      uStack_e8 = 0;

      uStack_f0 = 0;

      lStack_118 = 0;

      local_120 = 0;

      uStack_108 = 0;

      local_110 = (long *)0x0;

      _objc_retain(DAT_003e85f0);

      lVar4 = FUN_00293880(uVar5,extraout_x1,&local_120,auStack_d8,0x10);

      if (lVar4 != 0) {

        lVar6 = *local_110;

        do {

          lVar7 = 0;

          do {

            if (*local_110 != lVar6) {

              _objc_enumerationMutation(uVar5);

            }

            auVar8 = _objc_opt_isKindOfClass(param_1,*(undefined8 *)(lStack_118 + lVar7 * 8));

            if ((auVar8._0_8_ & 1) != 0) {

              _objc_release(uVar5);

              uVar5 = 1;

              uVar2 = 1;

              goto LAB_0012ee64;

            }

            lVar7 = lVar7 + 1;

          } while (lVar4 != lVar7);

          lVar4 = FUN_00293880(uVar5,auVar8._8_8_,&local_120,auStack_d8,0x10);

        } while (lVar4 != 0);

      }

      _objc_release(uVar5);

      _NSStringFromClass(uVar3);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      auVar8 = FUN_00297fa0();

      if (auVar8._0_8_ == 0) {

LAB_0012ee54:

        _objc_release(uVar5);

        uVar2 = 0;

        uVar5 = 2;

      }

      else {

        iVar1 = FUN_00293580(uVar5,auVar8._8_8_,&cf_FileMessageCellView);

        if (iVar1 == 0) {

          iVar1 = FUN_00293580(uVar5,extraout_x1_00,&cf_AppFile);

          if (iVar1 == 0) goto LAB_0012ee54;

          uVar2 = FUN_00293580(uVar5,extraout_x1_01,&cf_MessageCell);

          _objc_release(uVar5);

          uVar5 = 1;

          if ((uVar2 & 1) == 0) {

            uVar5 = 2;

          }

        }

        else {

          _objc_release(uVar5);

          uVar2 = 1;

          uVar5 = 1;

        }

      }

LAB_0012ee64:

      _CFDictionarySetValue(DAT_003e85e8,uVar3,uVar5);

      goto LAB_0012ee70;

    }

  }

  uVar2 = 0;

LAB_0012ee70:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return uVar2 & 1;

}




