// initWithFrame: @0xbcb20

/* Function Stack Size: 0x30 bytes */

ID WCMTOCropOverlayView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  ID IVar2;
  undefined8 local_68;
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
  local_48 = &objc::class_t::WCMTOCropOverlayView;
  local_50 = param_1;
  local_40 = param_2;
  lVar1 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");
  local_38 = lVar1;
  _objc_storeStrong(&local_38);
  if (lVar1 != 0) {
    _objc_msgSend_setClipsToBounds_(local_38,local_68,0);
    _objc_msgSend_setup(local_38,local_68);
  }
  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38,0);
  return IVar2;
}

