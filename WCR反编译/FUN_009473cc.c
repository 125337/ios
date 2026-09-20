// FUN_009473cc @ 009473cc

void FUN_009473cc(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_48;
  byte local_39;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    bVar1 = false;
    local_30 = uVar2;
    if (uVar2 == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_images_026ca698);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar2 != 0;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (bVar1) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_images_026ca698);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_48;
      puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_30,local_48);
      }
      _objc_storeStrong(&local_48,0);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

