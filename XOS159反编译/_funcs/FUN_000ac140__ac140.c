// FUN_000ac140 @0xac140


void FUN_000ac140(long param_1,long param_2)



{

  cfstringStruct *pcVar1;

  long lVar2;

  cfstringStruct *pcVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar6;

  undefined8 uVar7;

  cfstringStruct *local_138;

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

  _objc_retain();

  _objc_retain(param_2);

  if (param_1 == 0) {

    uVar7 = 0;

    goto LAB_000ac468;

  }

  lVar2 = FUN_00293860(param_1);

  uVar7 = 0;

  if ((param_2 == 0) || (lVar2 == 0)) goto LAB_000ac468;

  FUN_002986c0(param_2);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar3;

  }

  _objc_retain();

  _objc_release(pcVar3);

  lVar2 = FUN_00293860(param_1);

  if (lVar2 == 0) {

    pcVar3 = &cf___;

    local_138 = &cf___;

  }

  else {

    FUN_00295440(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_000856e8();

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar7);

    FUN_00297d80(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_000856e8();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar7);

    if (lVar2 == 0) {

      local_138 = &cf___;

      if (lVar4 != 0) goto LAB_000ac284;

LAB_000ac2dc:

      pcVar3 = &cf___;

    }

    else {

      FUN_00298740(lVar2);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__u);

      local_138 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      if (lVar4 == 0) goto LAB_000ac2dc;

LAB_000ac284:

      FUN_00298740(lVar4);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf__u);

      pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    _objc_release(lVar4);

    _objc_release(lVar2);

  }

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(param_1);

  lVar2 = FUN_00293880(param_1,extraout_x1_01,&local_130,auStack_f0,0x10);

  if (lVar2 != 0) {

    lVar4 = *local_120;

    do {

      lVar6 = 0;

      do {

        if (*local_120 != lVar4) {

          _objc_enumerationMutation(param_1);

        }

        uVar7 = *(undefined8 *)(lStack_128 + lVar6 * 8);

        _object_getClass(uVar7);

        FUN_000856e8(uVar7);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          FUN_00298740(lVar5);

          FUN_00298760(lVar5);

        }

        _objc_release(lVar5);

        lVar6 = lVar6 + 1;

      } while (lVar2 != lVar6);

      lVar2 = FUN_00293880(param_1,extraout_x1_02,&local_130,auStack_f0,0x10);

    } while (lVar2 != 0);

  }

  _objc_release(param_1);

  FUN_0019225c();

  FUN_00192278();

  FUN_00293860(param_1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf_____lu________llu_a_ld__ld);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(pcVar3);

  _objc_release(local_138);

  _objc_release(pcVar1);

LAB_000ac468:

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(uVar7);

  return;

}




