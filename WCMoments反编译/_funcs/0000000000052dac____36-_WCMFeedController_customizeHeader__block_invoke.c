// ___36-[WCMFeedController_customizeHeader]_block_invoke @0x52dac

void ___36__WCMFeedController_customizeHeader__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_c8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = param_1;
  _objc_msgSend_alertControllerWithTitle_message_preferredStyle_
            (&_OBJC_CLASS___UIAlertController,local_c8,&cf_veW_,&cf___,1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_001104f0;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = ___36__WCMFeedController_customizeHeader__block_invoke_2;
  local_50 = &___block_descriptor_40_e8_32w_e21_v16__0__UITextField_8l;
  local_40 = uVar1;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_msgSend_addTextFieldWithConfigurationHandler_(uVar1,local_c8,&local_68);
  uVar1 = local_40;
  uVar2 = _objc_msgSend_actionWithTitle_style_handler_
                    (&_OBJC_CLASS___UIAlertAction,local_c8,&cf_Sm,1,0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  _objc_msgSend_addAction_(uVar1,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_initWeak(auStack_80,local_40);
  uVar1 = local_40;
  local_b0 = PTR___NSConcreteStackBlock_001104f0;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = ___36__WCMFeedController_customizeHeader__block_invoke_2111;
  local_98 = &___block_descriptor_48_e8_32w40w_e23_v16__0__UIAlertAction_8l;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_copyWeak(auStack_88,auStack_80);
  uVar2 = _objc_msgSend_actionWithTitle_style_handler_
                    (&_OBJC_CLASS___UIAlertAction,local_c8,&cf_OX_,0,&local_b0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  _objc_msgSend_addAction_(uVar1,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  uVar2 = _objc_msgSend_host(uVar1,local_c8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  _objc_msgSend_presentViewController_animated_completion_(uVar2,local_c8,local_40,1,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return;
}

