// cropHeaderImage:account: @0x4fba8

/* Function Stack Size: 0x20 bytes */

void WCMFeedController::cropHeaderImage_account_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_40;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_account(local_18,local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_isEqual_(uVar3,local_58,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    _objc_msgSend_setCropAccount_(local_18,local_58,local_30);
    uVar3 = _objc_alloc(&objc::class_t::WCMTOCropViewController);
    local_40 = _objc_msgSend_initWithImage_(uVar3,local_58,local_28);
    _objc_msgSend_setDelegate_(local_40,local_58,local_18);
    _objc_msgSend_setDoneButtonTitle_(local_40,local_58,&cf__O_uVGr);
    _objc_msgSend_setCancelButtonTitle_(local_40,local_58,&cf_Sm);
    _objc_msgSend_setTitle_(local_40,local_58,&cf_jRhVGr);
    _objc_msgSend_host(local_18,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_presentViewController_animated_completion_(uVar3,local_58,local_40,1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

