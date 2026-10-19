// setImage:type:forKey:resident: @0x6b158

/* Function Stack Size: 0x2c bytes */

void WCMYBIBImageCache::setImage_type_forKey_resident_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,bool param_6)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  long local_48;
  undefined1 local_39;
  undefined8 local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_39 = (undefined1)param_6;
  _objc_msgSend_objectForKey_(*(undefined8 *)(local_18 + 8),local_50,local_38);
  local_48 = _objc_retainAutoreleasedReturnValue();
  if (local_48 == 0) {
    lVar2 = _objc_opt_new(&objc::class_t::WCMYBIBImageCachePack);
    lVar1 = local_48;
    local_48 = lVar2;
    (*(code *)PTR__objc_release_00110458)(lVar1);
    _objc_msgSend_setObject_forKey_(*(undefined8 *)(local_18 + 8),local_50,local_48,local_38);
  }
  if (local_30 == 0) {
    _objc_msgSend_setOriginImage_(local_48,local_50,local_28);
  }
  else if (local_30 == 1) {
    _objc_msgSend_setCompressedImage_(0,local_48,local_50,local_28);
  }
  _objc_msgSend_setObject_forKey_(*(undefined8 *)(local_18 + 0x10),local_50,local_48,local_38);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

