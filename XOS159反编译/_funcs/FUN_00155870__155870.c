// FUN_00155870 @0x155870


void FUN_00155870(undefined8 param_1)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined *puVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  long local_b0;

  undefined8 uStack_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  cfstringStruct *local_80;

  undefined8 uStack_78;

  

  FUN_00136588();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar7._0_8_,auVar7._8_8_,&cf_CadisWeatherCity);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(auVar7._0_8_);

  FUN_00136588();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_00297480(auVar7._0_8_,auVar7._8_8_,&cf_CadisWeatherLang);

  _objc_release(auVar7._0_8_);

  pcVar4 = &cf_English;

  if (lVar5 != 1) {

    pcVar4 = &cf__Ne;

  }

  _objc_retain(pcVar4);

  auVar7 = FUN_00297fa0(pcVar1);

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_S_MRW__);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar7._8_8_,&cf__Yln_,auVar7._0_8_,1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  puVar3 = PTR___NSConcreteStackBlock_003886f0;

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_00166040;

  puStack_88 = &DAT_0038d688;

  _objc_retain(pcVar1);

  local_80 = pcVar1;

  uStack_78 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_n_W_,0,&local_a0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar6,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  pcVar2 = &cf_Rbc_N_Ne;

  if (lVar5 != 1) {

    pcVar2 = &cf_SwitchtoEnglish;

  }

  _objc_retain(pcVar2);

  local_d0 = puVar3;

  local_c8 = 0xc0000000;

  local_c0 = FUN_00166488;

  puStack_b8 = &DAT_0038d668;

  local_b0 = lVar5;

  uStack_a8 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,pcVar2,0,&local_d0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar6,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  local_f8 = puVar3;

  local_f0 = 0xc0000000;

  local_e8 = FUN_001665c8;

  puStack_e0 = &DAT_0038aac0;

  local_d8 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_7Re_Yl,0,&local_f8);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar6,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_Sm,1,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar6,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar6,1,0);

  _objc_release(pcVar2);

  _objc_release(local_80);

  _objc_release(uVar6);

  _objc_release(auVar7._0_8_);

  _objc_release(pcVar4);

  _objc_release(pcVar1);

  return;

}




