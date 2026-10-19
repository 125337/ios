// ___45-[WCMFeedController_picker:didFinishPicking:]_block_invoke @0x517a4

void ___45__WCMFeedController_picker_didFinishPicking___block_invoke(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  uVar1 = _objc_opt_class(&_OBJC_CLASS___UIImage);
  uVar2 = _objc_msgSend_canLoadObjectOfClass_(uVar3,local_70,uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = _objc_opt_class(&_OBJC_CLASS___UIImage);
    local_50 = PTR___NSConcreteStackBlock_001104f0;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = ___45__WCMFeedController_picker_didFinishPicking___block_invoke_2;
    local_38 = &___block_descriptor_48_e8_32s40w_e45_v24__0__<NSItemProviderReading>_8__NSError_16l;
    _objc_copyWeak(auStack_28,param_1 + 0x30);
    local_30 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
    uVar1 = _objc_msgSend_loadObjectOfClass_completionHandler_(uVar3,local_70,uVar1,&local_50);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar1);
    _objc_storeStrong(&local_30,0);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

