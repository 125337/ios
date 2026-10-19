// encodeImageWithDecoder:type:quality: @0x9a018

/* Function Stack Size: 0x28 bytes */

ID WCMYYImageEncoder::encodeImageWithDecoder_type_quality_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,double param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID IVar5;
  ulong uVar6;
  undefined8 local_78;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  undefined4 local_44;
  double local_40;
  unsigned_long_long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_40 = param_5;
  local_38 = param_4;
  if ((local_30 == 0) || (lVar1 = _objc_msgSend_frameCount(local_30,local_78), lVar1 == 0)) {
    local_18 = 0;
    local_44 = 1;
  }
  else {
    uVar2 = _objc_alloc(&objc::class_t::WCMYYImageEncoder);
    local_50 = _objc_msgSend_initWithType_(uVar2,local_78,local_38);
    _objc_msgSend_setQuality_(local_40,local_50,local_78);
    for (local_54 = 0; uVar6 = (ulong)local_54, uVar3 = _objc_msgSend_frameCount(local_30,local_78),
        uVar6 < uVar3; local_54 = local_54 + 1) {
      _objc_msgSend_frameAtIndex_decodeForDisplay_(local_30,local_78,(long)local_54,1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_image(uVar2,local_78);
      local_60 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar2);
      uVar2 = local_50;
      _UIImagePNGRepresentation(local_60);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_frameDurationAtIndex_(local_30,local_78,(long)local_54);
      _objc_msgSend_addImageWithData_duration_(uVar2,local_78,uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_storeStrong(&local_60,0);
    }
    _objc_msgSend_encode(local_50,local_78);
    local_18 = _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  IVar5 = _objc_autoreleaseReturnValue(local_18);
  return IVar5;
}

