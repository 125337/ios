// galleryPlaceholder @0x49cc4

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::galleryPlaceholder(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_galleryPlaceholder_once;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_2035);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  IVar1 = _objc_retainAutoreleaseReturnValue(_galleryPlaceholder_image);
  return IVar1;
}

