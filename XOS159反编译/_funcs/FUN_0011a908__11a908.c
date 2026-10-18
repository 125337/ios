// FUN_0011a908 @0x11a908


/* WARNING: Type propagation algorithm not settling */



void FUN_0011a908(long param_1)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 uVar5;

  undefined8 extraout_x1_00;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  long local_70 [6];

  

  local_70[5] = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 != 0) {

    _objc_retain(param_1);

    if (DAT_003e8418 != -1) {

      FUN_0028f360();

    }

    lVar2 = _object_getClass(param_1);

    if (lVar2 == 0) {

      _objc_release(param_1);

    }

    else {

      _NSStringFromClass(lVar2);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar7._0_8_;

      FUN_00299540(DAT_003e8410,auVar7._8_8_,uVar3);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      auVar7._8_8_ = auVar8._8_8_;

      auVar7._0_8_ = lVar2;

      lVar2 = auVar8._0_8_;

      if (lVar2 == 0) {

        while( true ) {

          uVar5 = auVar7._8_8_;

          lVar2 = auVar7._0_8_;

          if (lVar2 == 0) break;

          auVar7 = _class_getInstanceVariable(lVar2,"m_chatRoomNameLabel");

          uVar5 = auVar7._8_8_;

          if (auVar7._0_8_ != 0) break;

          auVar7 = _class_getSuperclass(lVar2);

        }

        FUN_00299380(&_OBJC_CLASS___NSNumber,uVar5,lVar2 != 0);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002a00a0(DAT_003e8410,auVar7._8_8_,auVar7._0_8_,uVar3);

        _objc_release(auVar7._0_8_);

        _objc_release(uVar3);

        _objc_release(param_1);

        uVar3 = extraout_x1_00;

        if (lVar2 != 0) goto LAB_0011aa48;

      }

      else {

        iVar1 = FUN_002924e0(lVar2);

        _objc_release(lVar2);

        _objc_release(uVar3);

        _objc_release(param_1);

        uVar3 = extraout_x1;

        if (iVar1 != 0) {

LAB_0011aa48:

          FUN_002a6080(param_1,uVar3,&cf_m_chatRoomNameLabel);

          lVar2 = _objc_retainAutoreleasedReturnValue();

          if ((lVar2 != 0) &&

             ((DAT_003e8408 == 0 || (uVar4 = _objc_opt_isKindOfClass(lVar2), (uVar4 & 1) != 0)))) {

            local_70[2] = 0;

            local_70[3] = 0;

            local_70[4] = 0;

            uVar3 = FUN_00121868(param_1,local_70 + 2);

            uVar4 = FUN_00121a10(lVar2,param_1,local_70 + 2,uVar3);

            if ((uVar4 & 1) == 0) {

              _objc_retain(lVar2);

            }

            lVar6 = 0x10;

            do {

              _objc_release(*(undefined8 *)((long)local_70 + lVar6 + 0x10U));

              lVar6 = lVar6 + -8;

            } while (lVar6 != -8);

            if ((uVar4 & 1) == 0) {

              _objc_release(lVar2);

              goto LAB_0011ab10;

            }

          }

          _objc_release(lVar2);

        }

      }

    }

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00121ad8(param_1), (uVar4 & 1) == 0)) {

      _objc_retain(param_1);

      if (DAT_003e8408 == 0) {

        lVar2 = 0;

      }

      else {

        local_70[1] = 0x7fefffffffffffff;

        local_70[2] = 0;

        local_70[3] = 0;

        local_70[4] = 0;

        uVar3 = FUN_00121868(param_1,local_70 + 2);

        local_70[0] = 0;

        FUN_00121ba8(param_1,param_1,DAT_003e8408,local_70,local_70 + 1,0,param_1,local_70 + 2,uVar3

                    );

        lVar2 = local_70[0];

        _objc_retain(local_70[0]);

        lVar6 = 0x10;

        do {

          _objc_release(*(undefined8 *)((long)local_70 + lVar6 + 0x10U));

          lVar6 = lVar6 + -8;

        } while (lVar6 != -8);

      }

      _objc_release(param_1);

      goto LAB_0011ab10;

    }

  }

  lVar2 = 0;

LAB_0011ab10:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70[5]) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




