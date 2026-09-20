// FUN_00225e3c @ 00225e3c

void FUN_00225e3c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__UIImagePickerControllerEditedImage_02578168);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_38;
    if ((uVar3 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_02578188);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_18 = local_40;
      if ((uVar2 & 1) == 0) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_30 = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

