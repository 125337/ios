// ___36-[WCMFeedController_customizeHeader]_block_invoke.2114 @0x53450

void ___36__WCMFeedController_customizeHeader__block_invoke_2114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = param_1;
  local_30 = _objc_opt_new(&_OBJC_CLASS___PHPickerConfiguration);
  _objc_msgSend_imagesFilter(&_OBJC_CLASS___PHPickerFilter,local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFilter_(local_30,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setSelectionLimit_(local_30,local_70,1);
  uVar1 = _objc_alloc(&_OBJC_CLASS___PHPickerViewController);
  local_38 = _objc_msgSend_initWithConfiguration_(uVar1,local_70,local_30);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_setDelegate_(local_38,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_account(uVar1,local_70);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_setHeaderPickerAccount_(uVar3,local_70,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_host(uVar1,local_70);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_presentViewController_animated_completion_(uVar2,local_70,local_38,1,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

