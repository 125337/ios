// getPhotoAlbumAuthorizationSuccess:failed: @0x84674

/* Function Stack Size: 0x20 bytes */

void WCMYBIBPhotoAlbumManager::getPhotoAlbumAuthorizationSuccess_failed_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,undefined4 param_6)

{
  undefined8 local_78;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = _objc_msgSend_authorizationStatus(&_OBJC_CLASS___PHPhotoLibrary,local_78);
  if (local_38 == 0) {
    local_68 = PTR___NSConcreteStackBlock_001104f0;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = 
    ___69__WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess_failed___block_invoke;
    local_50 = &___block_descriptor_48_e8_32bs40bs_e8_v16__0q8l;
    local_48 = (*(code *)PTR__objc_retain_00110460)(local_28);
    local_40 = (*(code *)PTR__objc_retain_00110460)(local_30);
    _objc_msgSend_requestAuthorization_(&_OBJC_CLASS___PHPhotoLibrary,local_78,&local_68);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_48,0);
  }
  else if (local_38 == 1) {
    if (local_30 != 0) {
      (**(code **)(local_30 + 0x10))();
    }
  }
  else if (local_38 == 2) {
    if (local_30 != 0) {
      (**(code **)(local_30 + 0x10))();
    }
  }
  else if ((local_38 == 3) && (local_28 != 0)) {
    (**(code **)(local_28 + 0x10))();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

