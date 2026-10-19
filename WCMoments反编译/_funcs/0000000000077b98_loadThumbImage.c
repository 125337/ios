// loadThumbImage @0x77b98

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::loadThumbImage(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_c8;
  undefined8 local_b8;
  byte local_a9;
  long local_a8;
  byte local_99;
  undefined8 local_98;
  byte local_89;
  undefined8 local_88;
  byte local_79;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  SEL local_30;
  ID local_28;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    local_30 = param_2;
    local_28 = param_1;
    _objc_msgSend_thumbImage(param_1,local_c8);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar3 == 0) {
      _objc_msgSend_thumbURL(local_28,local_c8);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      if (lVar3 == 0) {
        _objc_msgSend_projectiveView(local_28,local_c8);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        local_79 = 0;
        local_89 = 0;
        local_99 = 0;
        local_a9 = 0;
        bVar2 = false;
        if (lVar3 != 0) {
          _objc_msgSend_projectiveView(local_28,local_c8);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = uVar4;
          _objc_opt_self(&_OBJC_CLASS___UIImageView);
          local_88 = _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          uVar6 = _objc_opt_isKindOfClass(uVar4);
          bVar2 = false;
          if ((uVar6 & 1) != 0) {
            _objc_msgSend_projectiveView(local_28,local_c8);
            local_98 = _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            _objc_msgSend_image(local_98,local_c8);
            local_a8 = _objc_retainAutoreleasedReturnValue();
            local_a9 = 1;
            bVar2 = local_a8 != 0;
          }
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_a8);
        }
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_98);
        }
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_88);
        }
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_78);
        }
        (*(code *)PTR__objc_release_00110458)(lVar3);
        if (bVar2) {
          _objc_msgSend_projectiveView(local_28,local_c8);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_image(uVar4,local_c8);
          local_b8 = _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          _objc_msgSend_delegate(local_28,local_c8);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_wcm_yb_imageData_readyForThumbImage_(uVar4,local_c8,local_28,local_b8);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          _objc_storeStrong(&local_b8,0);
        }
      }
      else {
        _objc_initWeak(auStack_38,local_28);
        uVar4 = _objc_msgSend_wcm_yb_webImageMediator(local_28,local_c8);
        lVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar4 = (**(code **)(lVar3 + 0x10))();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar5 = _objc_msgSend_thumbURL(local_28,local_c8);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_70 = PTR___NSConcreteStackBlock_001104f0;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = ___34__WCMYBIBImageData_loadThumbImage__block_invoke;
        local_58 = &___block_descriptor_40_e8_32w_e28_v24__0__UIImage_8__NSData_16l;
        _objc_copyWeak(auStack_50,auStack_38);
        _objc_msgSend_wcm_yb_queryCacheOperationForKey_completed_(uVar4,local_c8,uVar5,&local_70);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        (*(code *)PTR__objc_release_00110458)(lVar3);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_38);
      }
    }
    else {
      _objc_msgSend_delegate(local_28,local_c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      _objc_msgSend_thumbImage(local_28,local_c8);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageData_readyForThumbImage_(uVar4,local_c8,IVar1);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
  }
  return;
}

