// FUN_001e7328 @0x1e7328


void FUN_001e7328(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  cfstringStruct *local_88;

  cfstringStruct *pcStack_80;

  cfstringStruct *local_78;

  undefined8 local_70;

  cfstringStruct *pcStack_68;

  undefined *local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_retain(pcVar1);

  if (DAT_003eaa10 == 0) {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    lVar6 = DAT_003eaa10;

    DAT_003eaa10 = lVar5;

    _objc_release(lVar6);

  }

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(pcVar1,auVar7._8_8_,auVar7._0_8_);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  lVar6 = FUN_00297fa0(pcVar4);

  if (lVar6 == 0) {

    _objc_release(pcVar4);

    pcVar4 = &cf__IN;

  }

  FUN_00290c60(&_OBJC_CLASS___NSUUID);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290c80();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  FUN_002a44a0(&cf_c_,extraout_x1,uVar3);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  local_88 = &cf_id;

  pcStack_80 = &cf_name;

  local_78 = &cf_members;

  local_60 = PTR____NSArray0__struct_00388308;

  local_70 = auVar7._0_8_;

  pcStack_68 = pcVar4;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar7._8_8_,&local_70,&local_88,3);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar8._0_8_;

  FUN_00291240(DAT_003eaa10,auVar8._8_8_,uVar2);

  FUN_0020be94();

  FUN_0020bf0c();

  DAT_003eaab4 = DAT_003eaab4 + 1;

  _objc_release(auVar7._0_8_);

  _objc_release(uVar3);

  _objc_release(pcVar4);

  _objc_release(pcVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  FUN_001c9388();

  uVar3 = *(undefined8 *)(param_1 + 0x28);

  FUN_00299540(uVar2,extraout_x1_00,&cf_id);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_002991c0(uVar3,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  if (lVar6 != 0) {

    FUN_002990e0(*(undefined8 *)(param_1 + 0x28));

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029aa80(auVar7._0_8_,auVar7._8_8_,lVar6,1);

    _objc_release(auVar7._0_8_);

  }

  _objc_release(lVar6);

  _objc_release(uVar2);

  _objc_release(pcVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




