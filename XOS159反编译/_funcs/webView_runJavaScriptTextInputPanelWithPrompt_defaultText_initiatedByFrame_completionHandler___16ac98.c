// webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler: @0x16ac98


/* Function Stack Size: 0x38 bytes */



void CadisHTMLUIDelegate::

     webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,

               undefined4 param_8)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar5 [16];

  undefined *local_160;

  undefined8 local_158;

  code *local_150;

  undefined *puStack_148;

  undefined8 local_140;

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  undefined8 local_118;

  undefined1 auStack_110 [8];

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined8 local_e8;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  ID local_c0;

  undefined8 *local_b8;

  undefined8 local_b0;

  undefined8 *puStack_a8;

  undefined8 local_a0;

  undefined1 local_98;

  undefined1 auStack_90 [8];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  ID local_68;

  

  _objc_retain(param_5);

  _objc_retain(param_7);

  pcVar1 = &::cf___;

  if (param_4 != 0) {

    pcVar1 = (cfstringStruct *)param_4;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,0,pcVar1,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_0016afec;

  puStack_70 = &DAT_00388f20;

  _objc_retain(param_5);

  local_68 = param_5;

  FUN_00291400(uVar3,extraout_x1_00,&local_88);

  _objc_initWeak(auStack_90,uVar3);

  local_b8 = &local_b0;

  local_b0 = 0;

  local_a0 = 0x2020000000;

  local_98 = 0;

  local_e0 = puVar2;

  local_d8 = 0xc2000000;

  local_d0 = FUN_0016b054;

  puStack_c8 = &DAT_0038d9c8;

  puStack_a8 = local_b8;

  _objc_retain(param_7);

  local_c0 = param_7;

  uVar4 = _objc_retainBlock(&local_e0);

  local_108 = puVar2;

  local_100 = 0xc2000000;

  local_f8 = FUN_0016b0c0;

  puStack_f0 = &DAT_00389110;

  _objc_retain();

  local_e8 = uVar4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,&local_108);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_138 = puVar2;

  local_130 = 0xc2000000;

  local_128 = FUN_0016b0d0;

  puStack_120 = &DAT_0038d9f8;

  _objc_copyWeak(auStack_110,auStack_90);

  _objc_retain(uVar4);

  local_118 = uVar4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_138);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_160 = puVar2;

  local_158 = 0xc2000000;

  local_150 = FUN_0016b1e8;

  puStack_148 = &DAT_00389f60;

  _objc_retain(uVar4);

  local_140 = uVar4;

  FUN_0016a5a8(uVar3,&local_160,2);

  _objc_release(local_140);

  _objc_release(local_118);

  _objc_destroyWeak(auStack_110);

  _objc_release(local_e8);

  _objc_release(uVar4);

  _objc_release(local_c0);

  __Block_object_dispose(&local_b0,8);

  _objc_destroyWeak(auStack_90);

  _objc_release(local_68);

  _objc_release(uVar3);

  _objc_release(param_7);

  _objc_release(param_5);

  return;

}




