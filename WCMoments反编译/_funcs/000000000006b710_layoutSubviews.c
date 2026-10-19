// layoutSubviews @0x6b710

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::layoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_80;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMYBIBImageCell;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  uVar2 = _objc_msgSend_bounds(local_18,local_80);
  _objc_msgSend_imageScrollView(local_18,local_80);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,in_d1,in_d2,in_d3,uVar1,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

