// initWithFrame: @0x9d708

/* Function Stack Size: 0x30 bytes */

ID WCMYYAnimatedImageView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID local_50;
  class_t *local_48;
  SEL local_40;
  long local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_18 = param_3.field1_0x10.field1_0x8;
  local_20 = param_3.field1_0x10.field0_0x0;
  local_28 = param_3.field0_0x0.field1_0x8;
  local_30 = param_3.field0_0x0.field0_0x0;
  local_38 = 0;
  local_48 = &objc::class_t::WCMYYAnimatedImageView;
  local_50 = param_1;
  local_40 = param_2;
  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_38 + _runloopMode,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);
  *(undefined1 *)(local_38 + _autoPlayAnimatedImage) = 1;
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38,0);
  return IVar1;
}

