// initWithFrame: @0x7fbbc

/* Function Stack Size: 0x30 bytes */

ID WCMYBIBLoadingView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_70;
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
  local_48 = &objc::class_t::WCMYBIBLoadingView;
  local_50 = param_1;
  local_40 = param_2;
  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");
  _objc_storeStrong(&local_38);
  if (local_38 != 0) {
    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_colorWithAlphaComponent_(0,uVar2,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_38,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setUserInteractionEnabled_(local_38,local_70,0);
    lVar1 = local_38;
    _objc_msgSend_drawView(local_38,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(lVar1,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    lVar1 = local_38;
    _objc_msgSend_textLabel(local_38,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(lVar1,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    lVar1 = local_38;
    _objc_msgSend_imageView(local_38,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(lVar1,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar4 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38,0);
  return IVar4;
}

