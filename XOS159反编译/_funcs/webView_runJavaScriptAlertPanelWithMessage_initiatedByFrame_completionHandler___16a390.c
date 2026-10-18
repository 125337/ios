// webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:completionHandler: @0x16a390


/* Function Stack Size: 0x30 bytes */



void CadisHTMLUIDelegate::

     webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,

               undefined4 param_7)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  ID local_80;

  undefined8 *local_78;

  undefined8 local_70;

  undefined8 *puStack_68;

  undefined8 local_60;

  undefined1 local_58;

  

  _objc_retain(param_6);

  pcVar1 = &::cf___;

  if (param_4 != 0) {

    pcVar1 = (cfstringStruct *)param_4;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,0,pcVar1,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = &local_70;

  local_70 = 0;

  local_60 = 0x2020000000;

  local_58 = 0;

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_0016a570;

  puStack_88 = &DAT_00388c30;

  puStack_68 = local_78;

  _objc_retain(param_6);

  local_80 = param_6;

  uVar4 = _objc_retainBlock(&local_a0);

  local_c8 = puVar2;

  local_c0 = 0xc2000000;

  local_b8 = FUN_0016a59c;

  puStack_b0 = &DAT_00389110;

  _objc_retain();

  local_a8 = uVar4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_nx_,0,&local_c8);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0016a5a8(uVar3,uVar4,2);

  _objc_release(local_a8);

  _objc_release(uVar4);

  _objc_release(local_80);

  __Block_object_dispose(&local_70,8);

  _objc_release(uVar3);

  _objc_release(param_6);

  return;

}




