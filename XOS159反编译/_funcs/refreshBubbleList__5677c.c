// refreshBubbleList @0x5677c


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::refreshBubbleList(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  ulong uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar10;

  long lVar11;

  undefined1 auVar12 [16];

  undefined *local_158;

  undefined8 local_150;

  code *local_148;

  undefined *puStack_140;

  long local_138;

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

  FUN_002990e0();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    lVar3 = 0;

  }

  else {

    FUN_00299260(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      _objc_retain(lVar3);

      _objc_release(lVar1);

      lVar1 = lVar3;

    }

  }

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  FUN_002a6260(lVar1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ba20();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  lVar6 = FUN_00293880(lVar5,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar6 != 0) {

    lVar10 = *local_120;

    do {

      lVar11 = 0;

      do {

        if (*local_120 != lVar10) {

          _objc_enumerationMutation(lVar5);

        }

        FUN_002a6220(*(undefined8 *)(lStack_128 + lVar11 * 8));

        auVar12 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar12._8_8_;

        lVar7 = auVar12._0_8_;

        if (lVar7 != 0) {

          FUN_002a62a0(lVar7,uVar4,0x3eb);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          uVar4 = _objc_opt_class(&_OBJC_CLASS___UITableView);

          uVar9 = _objc_opt_isKindOfClass(lVar8,uVar4);

          if ((uVar9 & 1) != 0) {

            _objc_release(lVar7);

            _objc_release(lVar5);

            if (lVar8 == 0) goto LAB_000569e0;

            FUN_00293f40(lVar8);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            if (lVar5 != 0) {

              FUN_00295720(lVar5);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar5,"bubbleFolders",uVar4,1);

              _objc_release(uVar4);

            }

            local_158 = PTR___NSConcreteStackBlock_003886f0;

            local_150 = 0xc2000000;

            local_148 = FUN_00056b00;

            puStack_140 = &DAT_00388e60;

            _objc_retain(lVar8);

            local_138 = lVar8;

            FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_01,&local_158);

            _objc_release(local_138);

            _objc_release(lVar5);

            lVar5 = lVar8;

            goto LAB_000569d8;

          }

          _objc_release(lVar8);

          _objc_release(lVar7);

          uVar4 = extraout_x1_00;

        }

        lVar11 = lVar11 + 1;

      } while (lVar6 != lVar11);

      lVar6 = FUN_00293880(lVar5,uVar4,&local_130,auStack_f0,0x10);

    } while (lVar6 != 0);

  }

LAB_000569d8:

  _objc_release(lVar5);

LAB_000569e0:

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(lVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




