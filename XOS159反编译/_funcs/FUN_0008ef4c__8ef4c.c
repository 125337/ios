// FUN_0008ef4c @0x8ef4c


void FUN_0008ef4c(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined1 auVar6 [16];

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  long local_c0;

  undefined1 local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  cfstringStruct *pcStack_78;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_5);

  if (param_3 < 0x28) {

    FUN_00290be0(&_OBJC_CLASS___NSCharacterSet);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4420(param_1,auVar6._8_8_,auVar6._0_8_);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    if (param_4 == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,

                   &cf_https___voiceai_fineshare_net_api_checkfilechangestatus___);

      auVar6 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf____fvstatus___);

      auVar6 = _objc_retainAutoreleasedReturnValue();

    }

    uVar2 = auVar6._0_8_;

    FUN_00290c20(&_OBJC_CLASS___NSURL,auVar6._8_8_,uVar2);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b720(&_OBJC_CLASS___NSMutableURLRequest,auVar6._8_8_,auVar6._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    FUN_002a1ea0(0x4034000000000000,uVar3);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_Bearer__);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a2480(uVar3,auVar6._8_8_,auVar6._0_8_,&cf_Authorization);

    _objc_release(auVar6._0_8_);

    FUN_002a2480(uVar3,extraout_x1_02,&cf_application_json,&cf_Accept);

    FUN_002a2480(uVar3,extraout_x1_03,&cf_https___finevoice_ai,&cf_Origin);

    FUN_002a2480(uVar3,extraout_x1_04,&cf_https___finevoice_ai_rewards,&cf_Referer);

    FUN_002a2480(uVar3,extraout_x1_05,&cf_Mozilla_5_0FineVoice,&cf_User_Agent);

    FUN_0008a9d4();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    local_f8 = PTR___NSConcreteStackBlock_003886f0;

    local_f0 = 0xc2000000;

    local_e8 = FUN_0008f408;

    puStack_e0 = &DAT_0038a920;

    local_b8 = (undefined1)param_4;

    _objc_retain(param_5);

    local_c8 = param_5;

    _objc_retain(param_1);

    local_d8 = param_1;

    _objc_retain(param_2);

    local_d0 = param_2;

    local_c0 = param_3;

    FUN_00293f60(uVar4,extraout_x1_06,uVar3,&local_f8);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b980();

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(local_d0);

    _objc_release(local_d8);

    _objc_release(local_c8);

    _objc_release(uVar3);

  }

  else {

    local_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

    pcStack_78 = &cf_F;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1,&pcStack_78,&local_80,1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FineVoice,0xfffffffffffffffd,auVar6._0_8_);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    local_b0 = PTR___NSConcreteStackBlock_003886f0;

    local_a8 = 0xc2000000;

    local_a0 = FUN_0008f3e8;

    puStack_98 = &DAT_00389f30;

    _objc_retain(param_5);

    local_90 = uVar1;

    local_88 = param_5;

    _objc_retain(uVar1);

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_b0);

    _objc_release(local_90);

    uVar2 = local_88;

  }

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_5);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




