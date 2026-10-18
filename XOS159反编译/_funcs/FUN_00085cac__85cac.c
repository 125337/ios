// FUN_00085cac @0x85cac


void FUN_00085cac(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_ck_WSMn_,&cf_ck_Wy_hv_QeQzP_,1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar9 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);

  auVar9 = FUN_00296920(auVar9._0_8_,auVar9._8_8_,100);

  uVar2 = auVar9._0_8_;

  FUN_002a21e0(uVar2,auVar9._8_8_,0);

  FUN_002a6220(uVar1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar9._0_8_,auVar9._8_8_,uVar2);

  _objc_release(auVar9._0_8_);

  FUN_00292b20(uVar2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00292b20();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar3);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_78 = uVar6;

  FUN_00292540(uVar2);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc032000000000000,uVar7,auVar9._8_8_,auVar9._0_8_);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  local_70 = auVar10._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_78,2);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  FUN_002a4160(uVar2);

  _objc_release(uVar2);

  local_b0 = PTR___NSConcreteStackBlock_003886f0;

  local_a8 = 0xc2000000;

  local_a0 = FUN_00086038;

  puStack_98 = &DAT_0038a3c0;

  uVar2 = *(undefined8 *)(param_1 + 0x20);

  uVar3 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar3);

  uVar4 = *(undefined8 *)(param_1 + 0x30);

  local_90 = uVar3;

  local_88 = uVar1;

  _objc_retain(uVar4);

  local_80 = uVar4;

  _objc_retain(uVar1);

  FUN_0029a500(uVar2,extraout_x1,uVar1,1,&local_b0);

  _objc_release(local_80);

  _objc_release(local_88);

  _objc_release(local_90);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




