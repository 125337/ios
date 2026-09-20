// nsDataFromImageDataOrImage: @ 00f4bb40

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::nsDataFromImageDataOrImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_30;
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar2;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      uVar3 = local_48;
      if (uVar2 == 0) {
        uVar2 = local_40;
        _UIImageJPEGRepresentation(0x3fee666666666666);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_34 = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

