// -[UIImage(WCMYYImageCoder)_wcm_yy_isDecodedForDisplay] @0x9a480

byte __UIImage_WCMYYImageCoder__wcm_yy_isDecodedForDisplay_(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_msgSend_images(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_count(uVar2,local_48);
  uVar1 = local_20;
  local_34 = 1;
  if (uVar3 < 2) {
    uVar4 = _objc_opt_class(&objc::class_t::WCMYYSpriteSheetImage);
    local_34 = _objc_opt_isKindOfClass(uVar1,uVar4);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((local_34 & 1) == 0) {
    _objc_getAssociatedObject(local_20,"wcm_yy_isDecodedForDisplay");
    local_30 = _objc_retainAutoreleasedReturnValue();
    local_11 = _objc_msgSend_boolValue(local_30,local_48);
    local_11 = local_11 & 1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_11 = 1;
  }
  return local_11 & 1;
}

