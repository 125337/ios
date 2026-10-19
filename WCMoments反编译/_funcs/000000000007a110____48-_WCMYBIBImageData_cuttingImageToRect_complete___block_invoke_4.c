// ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke_4 @0x7a110

void ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke_4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_a0;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 auStack_38 [12];
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  lVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  local_28 = lVar1;
  if (lVar1 != 0) {
    _objc_msgSend_cuttedImageModifier(lVar1,local_a0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    local_60 = PTR___NSConcreteStackBlock_001104f0;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke_5;
    local_48 = &___block_descriptor_48_e8_32bs40w_e17_v16__0__UIImage_8l;
    _objc_copyWeak(auStack_38,param_1 + 0x30);
    local_40 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
    _objc_msgSend_modifyImageWithModifier_image_completion_(lVar1,local_a0,uVar2,uVar3,&local_60);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_storeStrong(&local_40,0);
    _objc_destroyWeak(auStack_38);
  }
  local_2c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

