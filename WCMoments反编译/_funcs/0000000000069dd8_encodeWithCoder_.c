// encodeWithCoder: @0x69dd8

/* Function Stack Size: 0x18 bytes */

void WCMYBImage::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  ID local_38;
  class_t *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_data(*(undefined8 *)(local_18 + (long)_decoder),local_50);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_length(uVar1,local_50);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = local_28;
  if (lVar2 == 0) {
    local_38 = local_18;
    local_30 = &objc::class_t::WCMYBImage;
    _objc_msgSendSuper2(&local_38,"encodeWithCoder:",local_28);
  }
  else {
    _objc_msgSend_scale(local_18,local_50);
    _objc_msgSend_numberWithDouble_(&_OBJC_CLASS___NSNumber,local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_encodeObject_forKey_(uVar1,local_50,uVar3,&cf_WCMYYImageScale);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar1 = local_28;
    _objc_msgSend_data(*(undefined8 *)(local_18 + (long)_decoder),local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_encodeObject_forKey_(uVar1,local_50,uVar3,&cf_WCMYYImageData);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

