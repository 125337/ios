// FUN_0025aeac @0x25aeac


void FUN_0025aeac(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  cfstringStruct *local_68;

  cfstringStruct *pcStack_60;

  cfstringStruct *local_58;

  undefined8 local_50;

  undefined8 uStack_48;

  undefined8 local_40;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  lVar4 = FUN_00297fa0(uVar3);

  uVar1 = uVar3;

  if (lVar4 == 0) {

    FUN_0024d85c();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00293860();

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__IN_);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    _objc_release(uVar2);

  }

  FUN_0024d85c();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_00299020();

  _objc_release(uVar2);

  local_68 = &cf_name;

  pcStack_60 = &cf_code;

  uStack_48 = *(undefined8 *)(param_1 + 0x28);

  local_40 = *(undefined8 *)(param_1 + 0x30);

  local_58 = &cf_type;

  local_50 = uVar1;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_00,&local_50,&local_68,3);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291240(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0024d944(uVar3);

  FUN_00299700(*(undefined8 *)(param_1 + 0x38));

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 != 0) {

    FUN_00299700(*(undefined8 *)(param_1 + 0x38));

    lVar4 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar4 + 0x10))();

    _objc_release(lVar4);

  }

  FUN_002990e0(*(undefined8 *)(param_1 + 0x38));

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a080(auVar5._0_8_,auVar5._8_8_,1);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




