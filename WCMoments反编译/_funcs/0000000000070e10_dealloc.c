// dealloc @0x70e10

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  uint local_54;
  ID local_50;
  class_t *local_48;
  byte local_39;
  undefined8 local_38;
  byte local_29;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  lVar1 = _objc_loadWeakRetained(param_1 + 8);
  local_29 = 0;
  local_39 = 0;
  local_54 = 0;
  if (lVar1 != 0) {
    _objc_msgSend_wcm_yb_webImageMediator(local_18,local_70);
    local_28 = _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    (**(code **)(local_28 + 0x10))();
    local_38 = _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_54 = _objc_opt_respondsToSelector(local_38,"wcm_yb_cancelTaskWithDownloadToken:");
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_28);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if ((local_54 & 1) != 0) {
    _objc_msgSend_wcm_yb_webImageMediator(local_18,local_70);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_loadWeakRetained(local_18 + 8);
    _objc_msgSend_wcm_yb_cancelTaskWithDownloadToken_(uVar2,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_msgSend_imageCache(local_18,local_70);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cacheKey(local_18,local_70);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeForKey_(uVar2,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_50 = local_18;
  local_48 = &objc::class_t::WCMYBIBImageData;
  _objc_msgSendSuper2(&local_50,"dealloc");
  return;
}

