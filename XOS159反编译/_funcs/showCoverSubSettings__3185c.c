// showCoverSubSettings @0x3185c


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showCoverSubSettings(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  auVar5 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar1 = auVar5._0_8_;

  FUN_002a1f60(uVar1,auVar5._8_8_,&cf_ni_n_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar2 = FUN_00296be0(uVar2,extraout_x1,2);

  _objc_release(uVar3);

  FUN_0029ce00(uVar2,extraout_x1_00,0x12);

  FUN_002a1c80(uVar2,extraout_x1_01,0x3e9);

  FUN_0029dca0(uVar2,extraout_x1_02,param_1);

  FUN_0029db40(uVar2,extraout_x1_03,param_1);

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  auVar5 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar3 = FUN_00296f40(auVar5._0_8_,auVar5._8_8_,&cf__Y_,0,param_1,"showImageSizeSettings");

  uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360;

  local_78 = uVar4;

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  local_70 = auVar5._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar5._8_8_,&local_70,&local_78,1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2060(uVar3,auVar6._8_8_,auVar6._0_8_,0);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  local_88 = uVar4;

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  local_80 = auVar5._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar5._8_8_,&local_80,&local_88,1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2060(uVar3,auVar6._8_8_,auVar6._0_8_,1);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_00299140(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar5._0_8_,auVar5._8_8_,uVar3);

  _objc_release(auVar5._0_8_);

  FUN_002990e0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar5._0_8_,auVar5._8_8_,uVar1,1);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




