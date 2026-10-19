// setImage:type: @0x6a9b8

/* Function Stack Size: 0x20 bytes */

void WCMYBIBImageScrollView::setImage_type_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _objc_msgSend_imageView(local_18,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_(uVar2,local_48,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setImageType_(local_18,local_48,param_4);
  _objc_storeStrong(&local_28,0);
  return;
}

