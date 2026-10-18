// FUN_00100028 @0x100028


void FUN_00100028(undefined8 param_1)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  cfstringStruct *pcVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar7;

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

  lVar1 = FUN_00293860(param_1);

  if (lVar1 == 0) {

    uVar2 = 0;

    goto LAB_001002d0;

  }

  pcVar4 = &cf___;

  lVar1 = FUN_00293860(param_1);

  pcVar5 = pcVar4;

  if (lVar1 != 0) {

    FUN_00295440(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_000ffc74();

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    FUN_00297d80(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_000ffc74();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    if (lVar1 == 0) {

      pcVar4 = &cf___;

      if (lVar3 != 0) goto LAB_0010011c;

LAB_00100168:

      pcVar5 = &cf___;

    }

    else {

      FUN_00298740(lVar1);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__u);

      pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      if (lVar3 == 0) goto LAB_00100168;

LAB_0010011c:

      FUN_00298740(lVar3);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf__u);

      pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    _objc_release(lVar3);

    _objc_release(lVar1);

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

  lVar1 = FUN_00293880(param_1,extraout_x1_01,&local_130,auStack_f0,0x10);

  if (lVar1 != 0) {

    lVar3 = *local_120;

    do {

      lVar7 = 0;

      do {

        if (*local_120 != lVar3) {

          _objc_enumerationMutation(param_1);

        }

        uVar2 = *(undefined8 *)(lStack_128 + lVar7 * 8);

        _object_getClass(uVar2);

        FUN_000ffc74(uVar2);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if (lVar6 != 0) {

          FUN_00298740(lVar6);

          FUN_00298760(lVar6);

        }

        _objc_release(lVar6);

        lVar7 = lVar7 + 1;

      } while (lVar1 != lVar7);

      lVar1 = FUN_00293880(param_1,extraout_x1_02,&local_130,auStack_f0,0x10);

    } while (lVar1 != 0);

  }

  _objc_release(param_1);

  FUN_00293860(param_1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf__lu________llu);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(pcVar5);

  _objc_release(pcVar4);

LAB_001002d0:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




