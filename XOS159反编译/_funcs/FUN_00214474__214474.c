// FUN_00214474 @0x214474


void FUN_00214474(cfstringStruct *param_1,cfstringStruct *param_2)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  bool bVar8;

  undefined8 unaff_x24;

  undefined1 auVar9 [16];

  cfstringStruct *local_78;

  cfstringStruct *local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_alloc(&_OBJC_CLASS___UIView);

  uVar2 = FUN_00296b80(0,0,0x404b000000000000,0x4038000000000000);

  lVar3 = FUN_00297fa0(param_1);

  local_78 = &cf_8E8E93;

  if (lVar3 != 0) {

    local_78 = param_1;

  }

  auVar9 = FUN_00297fa0(param_2);

  local_70 = &cf_8E8E93;

  if (auVar9._0_8_ != 0) {

    local_70 = param_2;

  }

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar9._8_8_,&local_78,2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar3 = 0;

  bVar1 = true;

  do {

    bVar8 = bVar1;

    _objc_alloc(&_OBJC_CLASS___UIView);

    auVar9 = FUN_00296b80((double)(ulong)(lVar3 * 0x1e),0,0x4038000000000000,0x4038000000000000);

    uVar5 = auVar9._0_8_;

    FUN_00299500(uVar4,auVar9._8_8_,lVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0020d76c();

    auVar9 = _objc_retainAutoreleasedReturnValue();

    lVar3 = auVar9._0_8_;

    if (lVar3 == 0) {

      FUN_002a4b60(&_OBJC_CLASS___UIColor,auVar9._8_8_,0);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      unaff_x24 = auVar9._0_8_;

    }

    FUN_0029cf60(uVar5,auVar9._8_8_,auVar9._0_8_);

    if (lVar3 == 0) {

      _objc_release(unaff_x24);

    }

    _objc_release(lVar3);

    _objc_release(uVar6);

    FUN_00297e40(uVar5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4028000000000000);

    _objc_release(uVar6);

    FUN_00297e40(uVar5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0x3ff0000000000000);

    _objc_release(uVar6);

    FUN_0029c620(&_OBJC_CLASS___UIColor);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar7 = FUN_00290a20(uVar6);

    FUN_00297e40(uVar5);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar7);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar6);

    FUN_00291380(uVar2,extraout_x1,uVar5);

    _objc_release(uVar5);

    lVar3 = 1;

    bVar1 = false;

  } while (bVar8);

  _objc_release(uVar4);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    _objc_autoreleaseReturnValue(uVar2);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




