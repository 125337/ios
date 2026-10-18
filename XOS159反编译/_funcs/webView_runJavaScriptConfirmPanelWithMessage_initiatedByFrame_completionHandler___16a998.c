// webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:completionHandler: @0x16a998


/* Function Stack Size: 0x30 bytes */



void CadisHTMLUIDelegate::

     webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,

               undefined4 param_7)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar5 [16];

  undefined *local_128;

  undefined8 local_120;

  code *local_118;

  undefined *puStack_110;

  undefined8 local_108;

  undefined *local_100;

  undefined8 local_f8;

  code *local_f0;

  undefined *puStack_e8;

  undefined8 local_e0;

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  undefined8 local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  ID local_90;

  undefined8 *local_88;

  undefined8 local_80;

  undefined8 *puStack_78;

  undefined8 local_70;

  undefined1 local_68;

  

  _objc_retain(param_6);

  pcVar1 = &::cf___;

  if (param_4 != 0) {

    pcVar1 = (cfstringStruct *)param_4;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,0,pcVar1,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = &local_80;

  local_80 = 0;

  local_70 = 0x2020000000;

  local_68 = 0;

  local_b0 = PTR___NSConcreteStackBlock_003886f0;

  local_a8 = 0xc2000000;

  local_a0 = FUN_0016ac3c;

  puStack_98 = &DAT_0038d998;

  puStack_78 = local_88;

  _objc_retain(param_6);

  local_90 = param_6;

  uVar4 = _objc_retainBlock(&local_b0);

  local_d8 = puVar2;

  local_d0 = 0xc2000000;

  local_c8 = FUN_0016ac68;

  puStack_c0 = &DAT_00389110;

  _objc_retain();

  local_b8 = uVar4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,&local_d8);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_100 = puVar2;

  local_f8 = 0xc2000000;

  local_f0 = FUN_0016ac78;

  puStack_e8 = &DAT_00389110;

  _objc_retain(uVar4);

  local_e0 = uVar4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_100);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_128 = puVar2;

  local_120 = 0xc2000000;

  local_118 = FUN_0016ac88;

  puStack_110 = &DAT_00389f60;

  _objc_retain(uVar4);

  local_108 = uVar4;

  FUN_0016a5a8(uVar3,&local_128,2);

  _objc_release(local_108);

  _objc_release(local_e0);

  _objc_release(local_b8);

  _objc_release(uVar4);

  _objc_release(local_90);

  __Block_object_dispose(&local_80,8);

  _objc_release(uVar3);

  _objc_release(param_6);

  return;

}




