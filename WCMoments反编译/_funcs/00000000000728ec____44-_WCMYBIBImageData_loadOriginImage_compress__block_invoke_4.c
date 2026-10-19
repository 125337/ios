// ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_4 @0x728ec

void ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke_4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [12];
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x28);
  bVar1 = local_28 != 0;
  if (bVar1) {
    _objc_msgSend_setLoadingStatus_(local_28,local_90,0);
    lVar2 = local_28;
    _objc_msgSend_compressedImageModifier(local_28,local_90);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_58 = PTR___NSConcreteStackBlock_001104f0;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke_5;
    local_40 = &___block_descriptor_40_e8_32w_e17_v16__0__UIImage_8l;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_msgSend_modifyImageWithModifier_image_completion_(lVar2,local_90,uVar3,uVar4,&local_58);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

