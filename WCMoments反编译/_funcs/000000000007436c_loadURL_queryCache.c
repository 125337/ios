// loadURL_queryCache @0x7436c

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::loadURL_queryCache(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    local_20 = param_2;
    local_18 = param_1;
    _objc_msgSend_imageURL(param_1,local_90);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    local_29 = 0;
    local_39 = 0;
    bVar1 = true;
    if (lVar2 != 0) {
      _objc_msgSend_imageURL(local_18,local_90);
      local_28 = _objc_retainAutoreleasedReturnValue();
      local_29 = 1;
      _objc_msgSend_absoluteString(local_28,local_90);
      local_38 = _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      lVar3 = _objc_msgSend_length(local_38,local_90);
      bVar1 = lVar3 == 0;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_38);
    }
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_28);
    }
    (*(code *)PTR__objc_release_00110458)(lVar2);
    if (!bVar1) {
      _objc_msgSend_defaultDecodeDecision(local_18,local_90);
      local_48 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setLoadingStatus_(local_18,local_90,3);
      _objc_msgSend_wcm_yb_webImageMediator(local_18,local_90);
      lVar2 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_imageURL(local_18,local_90);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_78 = PTR___NSConcreteStackBlock_001104f0;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke;
      local_60 = &___block_descriptor_48_e8_32s40bs_e28_v24__0__UIImage_8__NSData_16l;
      local_58 = (*(code *)PTR__objc_retain_00110460)(local_18);
      local_50 = (*(code *)PTR__objc_retain_00110460)(local_48);
      _objc_msgSend_wcm_yb_queryCacheOperationForKey_completed_(uVar4,local_90,uVar5,&local_78);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(lVar2);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_48,0);
    }
  }
  return;
}

