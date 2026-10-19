// getAVAssetWithPHAsset:completion: @0x84078

/* Function Stack Size: 0x20 bytes */

void WCMYBIBPhotoAlbumManager::getAVAssetWithPHAsset_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = _objc_opt_new(&_OBJC_CLASS___PHVideoRequestOptions);
  _objc_msgSend_setNetworkAccessAllowed_(local_38,local_b0,1);
  _objc_msgSend_defaultManager(&_OBJC_CLASS___PHImageManager,local_b0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  uVar1 = local_38;
  local_40 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_msgSend_requestAVAssetForVideo_options_resultHandler_(uVar3,local_b0,uVar2,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

