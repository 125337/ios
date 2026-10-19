// loadURL_download @0x753c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::loadURL_download(ID param_1,SEL param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_148;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined1 auStack_100 [8];
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78 [3];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    local_30 = param_2;
    local_28 = param_1;
    _objc_msgSend_imageURL(param_1,local_148);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_49 = 0;
    bVar2 = true;
    if (lVar3 != 0) {
      _objc_msgSend_imageURL(local_28,local_148);
      local_38 = _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      _objc_msgSend_absoluteString(local_38,local_148);
      local_48 = _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      lVar4 = _objc_msgSend_length(local_48,local_148);
      bVar2 = lVar4 == 0;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_38);
    }
    (*(code *)PTR__objc_release_00110458)(lVar3);
    if (!bVar2) {
      _objc_msgSend_defaultDecodeDecision(local_28,local_148);
      local_58 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setLoadingStatus_(local_28,local_148,5);
      _objc_initWeak(auStack_60,local_28);
      uVar5 = _objc_msgSend_wcm_yb_webImageMediator(local_28,local_148);
      lVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = (**(code **)(lVar3 + 0x10))();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_imageURL(local_28,local_148);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar1 = PTR___NSConcreteStackBlock_001104f0;
      local_98 = PTR___NSConcreteStackBlock_001104f0;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = ___36__WCMYBIBImageData_loadURL_download__block_invoke;
      local_80 = &___block_descriptor_40_e8_32s_e36___NSURLRequest_16__0__NSURLRequest_8l;
      local_78[0] = (*(code *)PTR__objc_retain_00110460)(local_28);
      local_c0 = puVar1;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_75;
      local_a8 = &___block_descriptor_40_e8_32w_e11_v24__0q8q16l;
      _objc_copyWeak();
      local_f8 = puVar1;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_78;
      local_e0 = &___block_descriptor_56_e8_32s40bs48w_e19_v20__0__NSData_8B16l;
      local_d8 = (*(code *)PTR__objc_retain_00110460)(local_28);
      local_d0 = (*(code *)PTR__objc_retain_00110460)(local_58);
      _objc_copyWeak(auStack_c8,auStack_60);
      local_120 = puVar1;
      local_118 = 0xc2000000;
      local_114 = 0;
      local_110 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_85;
      local_108 = &___block_descriptor_40_e8_32w_e20_v20__0__NSError_8B16l;
      _objc_copyWeak(auStack_100,auStack_60);
      uVar7 = _objc_msgSend_wcm_yb_downloadImageWithURL_requestModifier_progress_success_failed_
                        (uVar5,local_148,uVar6,&local_98,&local_c0,&local_f8,&local_120);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      _objc_storeWeak(local_28 + 8);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(lVar3);
      _objc_destroyWeak(auStack_100);
      _objc_destroyWeak(auStack_c8);
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_d8,0);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(local_78,0);
      _objc_destroyWeak(auStack_60);
      _objc_storeStrong(&local_58,0);
    }
  }
  return;
}

