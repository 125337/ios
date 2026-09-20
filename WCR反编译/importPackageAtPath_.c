// importPackageAtPath: @ 01dfdae8

/* Function Stack Size: 0x18 bytes */

long_long WCRefineSuperFloatBallWarehouseViewController::importPackageAtPath_
                    (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint local_64;
  undefined *local_60;
  undefined *local_58;
  ulong local_50;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_39 = 0;
  local_64 = 1;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_64 = (uint)puVar2 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_64 & 1) == 0) {
    puVar2 = PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920,PTR_s_new_0269d288);
    uVar1 = local_30;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_zip);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_50;
      FUN_01dfde78();
      if ((uVar1 & 1) == 0) {
        local_18 = (undefined *)0x0;
        local_40 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_30
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_48;
        uVar1 = local_50;
        uVar3 = local_30;
        local_58 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_saveImportedData_preferredExt_ap_026c5bd0,puVar4,uVar1,0);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar2;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        local_18 = (undefined *)(long)(int)(uint)(puVar2 != (undefined *)0x0);
        local_40 = 1;
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_importZipAtPath__026ae3f8,local_30);
      local_40 = 1;
      local_18 = puVar2;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_18 = (undefined *)0x0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

