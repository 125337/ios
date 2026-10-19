// setFrame: @0xbd0e8

/* Function Stack Size: 0x30 bytes */

void WCMTOCropOverlayView::setFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 local_58;
  ID local_50;
  class_t *local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_18 = param_3.field1_0x10.field1_0x8;
  local_20 = param_3.field1_0x10.field0_0x0;
  local_28 = param_3.field0_0x0.field1_0x8;
  local_30 = param_3.field0_0x0.field0_0x0;
  local_48 = &objc::class_t::WCMTOCropOverlayView;
  local_50 = param_1;
  local_40 = param_2;
  local_38 = param_1;
  _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"setFrame:");
  if (*(long *)(local_38 + (long)_outerLineViews) != 0) {
    _objc_msgSend_layoutLines(local_38,local_58);
  }
  return;
}

