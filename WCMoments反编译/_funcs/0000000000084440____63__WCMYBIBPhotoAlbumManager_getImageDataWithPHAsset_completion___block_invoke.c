// ___63+[WCMYBIBPhotoAlbumManager_getImageDataWithPHAsset:completion:]_block_invoke @0x84440

void ___63__WCMYBIBPhotoAlbumManager_getImageDataWithPHAsset_completion___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_78;
  uint local_68;
  undefined8 local_60;
  long local_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  _objc_msgSend_objectForKey_(local_38,local_78,*(undefined8 *)PTR__PHImageCancelledKey_00110300);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_boolValue(uVar3,local_78);
  bVar2 = false;
  bVar1 = false;
  local_68 = 0;
  if ((uVar4 & 1) == 0) {
    _objc_msgSend_objectForKey_(local_38,local_78,*(undefined8 *)PTR__PHImageErrorKey_00110308);
    local_50 = _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_68 = 0;
    if (local_50 == 0) {
      _objc_msgSend_objectForKey_
                (local_38,local_78,*(undefined8 *)PTR__PHImageResultIsDegradedKey_00110310);
      local_60 = _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_68 = _objc_msgSend_boolValue(local_60,local_78);
      local_68 = local_68 ^ 1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_00110458)(local_50);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (((local_68 & 1) == 0) || (local_20 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_20);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

