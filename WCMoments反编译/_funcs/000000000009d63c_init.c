// init @0x9d63c

/* Function Stack Size: 0x10 bytes */

ID WCMYYAnimatedImageView::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMYYAnimatedImageView;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = _objc_msgSendSuper2(&local_30,"init");
  _objc_storeStrong(&local_18);
  _objc_storeStrong(local_18 + _runloopMode,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);
  *(undefined1 *)(local_18 + _autoPlayAnimatedImage) = 1;
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

