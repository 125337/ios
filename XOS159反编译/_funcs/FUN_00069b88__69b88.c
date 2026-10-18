// FUN_00069b88 @0x69b88


void FUN_00069b88(undefined8 param_1,cfstringStruct *param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined8 local_e8;

  cfstringStruct *local_e0;

  cfstringStruct *local_d8;

  cfstringStruct *pcStack_d0;

  cfstringStruct *local_c8;

  cfstringStruct *pcStack_c0;

  cfstringStruct *local_b8;

  cfstringStruct *pcStack_b0;

  undefined8 local_a8;

  cfstringStruct *pcStack_a0;

  undefined *local_98;

  cfstringStruct *pcStack_90;

  undefined **local_88;

  undefined **ppuStack_80;

  cfstringStruct *local_78;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  iVar1 = FUN_000724dc(&cf_fish);

  if (iVar1 == 0) {

    auVar7._8_8_ = extraout_x1;

    auVar7._0_8_ = &cf_https___api_fish_audio_v1_tts;

  }

  else {

    FUN_002a44a0(&cf_https___ysfd_zyxzy_top,extraout_x1,&cf__v1_tts);

    auVar7 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00290c20(&_OBJC_CLASS___NSURL,auVar7._8_8_,auVar7._0_8_);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_e0 = &cf_text;

  _objc_retain(param_1);

  FUN_0006ae98(&cf_ttsFishEmotion,&PTR__OBJC_CLASS___NSConstantDictionary_003c05b8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0006ae98(&cf_ttsFishEffect,&PTR__OBJC_CLASS___NSConstantDictionary_003c05e0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0008e610(param_1,uVar3,uVar4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(param_1);

  pcStack_a0 = &cf___;

  if (param_2 != (cfstringStruct *)0x0) {

    pcStack_a0 = param_2;

  }

  local_d8 = &cf_reference_id;

  pcStack_d0 = &cf_normalize;

  local_98 = PTR____kCFBooleanTrue_00388320;

  pcStack_90 = &cf_mp3;

  local_c8 = &cf_format;

  pcStack_c0 = &cf_mp3_bitrate;

  local_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfab8;

  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfad0;

  local_b8 = &cf_opus_bitrate;

  pcStack_b0 = &cf_latency;

  local_78 = &cf_normal;

  local_a8 = uVar5;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_00,&local_a8,&local_e0,7);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  FUN_0029b720(&_OBJC_CLASS___NSMutableURLRequest,extraout_x1_01,uVar2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar8._0_8_;

  FUN_0029e7e0(uVar4,auVar8._8_8_,&cf_POST);

  FUN_002a1ea0(0x404e000000000000,uVar4);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf_Bearer__);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2480(uVar4,auVar8._8_8_,auVar8._0_8_,&cf_Authorization);

  _objc_release(auVar8._0_8_);

  FUN_002a2480(uVar4,extraout_x1_03,&cf_s2_1_pro_free,&cf_model);

  FUN_002a2480(uVar4,extraout_x1_04,&cf_application_json,&cf_Content_Type);

  FUN_00294080(&_OBJC_CLASS___NSJSONSerialization,extraout_x1_05,uVar3,0,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e7c0(uVar4,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_0008a9d4();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_108 = PTR___NSConcreteStackBlock_003886f0;

  local_100 = 0xc2000000;

  local_f8 = FUN_0008e0d0;

  puStack_f0 = &DAT_00389860;

  _objc_retain(param_4);

  local_e8 = param_4;

  FUN_00293f60(uVar5,extraout_x1_06,uVar4,&local_108);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b980();

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(local_e8);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(auVar7._0_8_);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




