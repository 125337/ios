// FUN_0008f950 @0x8f950


void FUN_0008f950(long param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  long local_88;

  undefined8 local_80;

  undefined8 local_78;

  cfstringStruct *pcStack_70;

  undefined8 local_68;

  cfstringStruct *local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  _objc_retain(param_4);

  _objc_retain(param_4);

  if (param_4 != 0) {

    uVar5 = 0;

    lVar4 = param_4;

    goto LAB_0008fb78;

  }

  auVar6 = FUN_00297fa0(param_2);

  if (auVar6._0_8_ == 0) {

    local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

    pcStack_70 = &cf_F;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar6._8_8_,&pcStack_70,&local_78,1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar6._0_8_;

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FineVoice,0xfffffffffffffffc,uVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

LAB_0008fb6c:

    uVar5 = 0;

  }

  else {

    _NSTemporaryDirectory();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c60(&_OBJC_CLASS___NSUUID);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c80();

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar6._8_8_,&cf_xzy_tts____mp3);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(uVar5,auVar7._8_8_,auVar7._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar2);

    _objc_release(uVar5);

    iVar1 = FUN_002a6580(param_2,extraout_x1,uVar3,1);

    if (iVar1 == 0) {

      local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      local_60 = &cf_elOX_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_00,&local_60,&local_68,1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FineVoice,0xfffffffffffffffb,auVar6._0_8_

                  );

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      goto LAB_0008fb6c;

    }

    FUN_002a44a0(&cf_mp3_file___,extraout_x1_00,uVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    lVar4 = 0;

  }

  _objc_release(uVar3);

LAB_0008fb78:

  local_b0 = PTR___NSConcreteStackBlock_003886f0;

  local_a8 = 0xc2000000;

  local_a0 = FUN_0008fcdc;

  puStack_98 = &DAT_0038a3c0;

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar3);

  local_90 = uVar5;

  local_88 = lVar4;

  local_80 = uVar3;

  _objc_retain(lVar4);

  _objc_retain(uVar5);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_b0);

  _objc_release(local_88);

  _objc_release(local_90);

  _objc_release(local_80);

  _objc_release(lVar4);

  _objc_release(uVar5);

  _objc_release(param_4);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




