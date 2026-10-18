// FUN_000ac7fc @0xac7fc


void FUN_000ac7fc(long param_1)



{

  cfstringStruct *pcVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  if (((DAT_003e7a2e & 1) != 0) || (DAT_003e7a2f != '\0')) {

    if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

      _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e64b8,0,3);

      return;

    }

    goto LAB_000acb70;

  }

  if (DAT_003e7668 != 0) {

    FUN_0029b240();

  }

  pcVar1 = DAT_003e7488;

  DAT_003e7488 = &cf___;

  _objc_release(pcVar1);

  DAT_003e7678 = 0;

  DAT_003e7680 = 0;

  DAT_003e7688 = 0;

  FUN_002a6080(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_m_arrMessageNodeData);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if ((lVar2 == 0) || (lVar3 = FUN_00293860(lVar2), lVar3 == 0)) {

    _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e64b8,0,3);

  }

  else {

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    _objc_retain(lVar2);

    lVar3 = FUN_00293880(lVar2,extraout_x1_00,&local_130,auStack_e8,0x10);

    if (lVar3 != 0) {

      lVar6 = *local_120;

      do {

        lVar7 = 0;

        do {

          if (*local_120 != lVar6) {

            _objc_enumerationMutation(lVar2);

          }

          uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);

          FUN_000acbc0(uVar5);

          FUN_000acd04(uVar5,1);

          FUN_000acd80(uVar5,1);

          lVar7 = lVar7 + 1;

        } while (lVar3 != lVar7);

        lVar3 = FUN_00293880(lVar2,extraout_x1_01,&local_130,auStack_e8,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(lVar2);

    auVar8 = _objc_opt_respondsToSelector(*(undefined8 *)(param_1 + 0x20),"GetContact");

    if ((auVar8._0_8_ & 1) == 0) {

      lVar3 = 0;

    }

    else {

      FUN_00299c80(*(undefined8 *)(param_1 + 0x20),auVar8._8_8_,"GetContact");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        FUN_000acf2c(lVar2,lVar3);

      }

    }

    auVar8 = _objc_opt_respondsToSelector(*(undefined8 *)(param_1 + 0x20),"getTableView");

    uVar5 = auVar8._8_8_;

    if ((auVar8._0_8_ & 1) == 0) {

LAB_000aca3c:

      FUN_002a6080(*(undefined8 *)(param_1 + 0x20),uVar5,&cf_m_tableView);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar6 != 0) goto LAB_000aca5c;

    }

    else {

      FUN_00299c80(*(undefined8 *)(param_1 + 0x20),uVar5,"getTableView");

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar8._8_8_;

      lVar6 = auVar8._0_8_;

      if (lVar6 == 0) goto LAB_000aca3c;

LAB_000aca5c:

      uVar5 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar4 = _objc_opt_isKindOfClass(lVar6,uVar5);

      if ((uVar4 & 1) != 0) {

        FUN_000aed10(lVar6,*(undefined8 *)(param_1 + 0x20));

      }

    }

    DAT_003e7678 = FUN_00293860(lVar2);

    DAT_003e7680 = FUN_00295440(lVar2);

    DAT_003e7688 = FUN_00297d80(lVar2);

    _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e64b8,0,3);

    _objc_release(lVar6);

    _objc_release(lVar3);

  }

  _objc_release(lVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

LAB_000acb70:

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




