// encodeImage:type:quality: @0x99f40

/* Function Stack Size: 0x28 bytes */

ID WCMYYImageEncoder::encodeImage_type_quality_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,double param_5)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_68;
  undefined8 local_40;
  double local_38;
  unsigned_long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = param_5;
  local_30 = param_4;
  uVar1 = _objc_alloc(&objc::class_t::WCMYYImageEncoder);
  local_40 = _objc_msgSend_initWithType_(uVar1,local_68,local_30);
  _objc_msgSend_setQuality_(local_38,local_40,local_68);
  _objc_msgSend_addImage_duration_(0,local_40,local_68,local_28);
  _objc_msgSend_encode(local_40,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

