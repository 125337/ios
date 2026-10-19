// picker:didFinishPicking: @0x515ac

/* Function Stack Size: 0x20 bytes */

void WCMFeedController::picker_didFinishPicking_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 local_a8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_headerPickerAccount(local_18,local_a8);
  local_38 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHeaderPickerAccount_(local_18,local_a8,0);
  _objc_msgSend_firstObject(local_30,local_a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_itemProvider(uVar1,local_a8);
  local_40 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_initWeak(auStack_48,local_18);
  uVar1 = local_28;
  local_80 = PTR___NSConcreteStackBlock_001104f0;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = ___45__WCMFeedController_picker_didFinishPicking___block_invoke;
  local_68 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
  local_60 = (*(code *)PTR__objc_retain_00110460)(local_40);
  _objc_copyWeak(auStack_50,auStack_48);
  local_58 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_msgSend_dismissViewControllerAnimated_completion_(uVar1,local_a8,1,&local_80);
  _objc_storeStrong(&local_58);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

