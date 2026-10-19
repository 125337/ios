// ___45-[WCMFeedController_picker:didFinishPicking:]_block_invoke_2 @0x518f4

void ___45__WCMFeedController_picker_didFinishPicking___block_invoke_2
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar4 = local_20;
  local_30 = param_1;
  if (local_28 == 0) {
    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIImage);
    uVar3 = _objc_opt_isKindOfClass(uVar4,uVar2);
    puVar1 = PTR___dispatch_main_q_00110528;
    if ((uVar3 & 1) != 0) {
      _objc_retainAutoreleaseReturnValue();
      uVar4 = _objc_retainAutoreleasedReturnValue(puVar1);
      local_68 = PTR___NSConcreteStackBlock_001104f0;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = ___45__WCMFeedController_picker_didFinishPicking___block_invoke_3;
      local_50 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
      _objc_copyWeak(auStack_38,param_1 + 0x28);
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_20);
      local_40 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      _dispatch_async(uVar4,&local_68);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_48,0);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

