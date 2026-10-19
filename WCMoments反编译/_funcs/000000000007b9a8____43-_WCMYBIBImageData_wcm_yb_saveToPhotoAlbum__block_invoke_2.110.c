// ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110 @0x7b9a8

void ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_2_110(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_a8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  byte local_49;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  _objc_msgSend_originImage(*(undefined8 *)(param_1 + 0x20));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_conformsToProtocol_(uVar2,local_a8,&objc::protocol_t::WCMYYAnimatedImage);
  local_39 = 0;
  local_49 = 0;
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    _objc_msgSend_originImage(*(undefined8 *)(param_1 + 0x20),local_a8);
    local_38 = _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    uVar3 = _objc_opt_respondsToSelector(local_38,"animatedImageData");
    bVar1 = false;
    if ((uVar3 & 1) != 0) {
      _objc_msgSend_originImage(*(undefined8 *)(param_1 + 0x20),local_a8);
      local_48 = _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      lVar4 = _objc_msgSend_performSelector_(local_48,local_a8,"animatedImageData");
      bVar1 = lVar4 != 0;
    }
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (bVar1) {
    _objc_msgSend_originImage(*(undefined8 *)(param_1 + 0x20),local_a8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_performSelector_(uVar2,local_a8,"animatedImageData");
    local_58 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if (local_58 == 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_58);
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    _objc_msgSend_originImage(*(undefined8 *)(param_1 + 0x20),local_a8);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar4 == 0) {
      _objc_msgSend_imageURL(*(undefined8 *)(param_1 + 0x20),local_a8);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      if (lVar4 == 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
      }
      else {
        _objc_msgSend_wcm_yb_webImageMediator(*(undefined8 *)(param_1 + 0x20),local_a8);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))();
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_imageURL(*(undefined8 *)(param_1 + 0x20),local_a8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        local_90 = PTR___NSConcreteStackBlock_001104f0;
        local_88 = 0xc2000000;
        local_84 = 0;
        local_80 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_3;
        local_78 = &___block_descriptor_56_e8_32bs40bs48bs_e28_v24__0__UIImage_8__NSData_16l;
        local_70 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
        local_68 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x38));
        local_60 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));
        _objc_msgSend_wcm_yb_queryCacheOperationForKey_completed_(uVar2,local_a8,uVar5,&local_90);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        (*(code *)PTR__objc_release_00110458)(uVar2);
        (*(code *)PTR__objc_release_00110458)(lVar4);
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x38);
      _objc_msgSend_originImage(*(undefined8 *)(param_1 + 0x20),local_a8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))();
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
  }
  return;
}

