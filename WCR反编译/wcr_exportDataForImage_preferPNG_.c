// wcr_exportDataForImage:preferPNG: @ 01673d28

/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRSuperFloatCropViewController::wcr_exportDataForImage_preferPNG_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,ID param_3,bool *param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  double in_d0;
  ID local_88;
  uint local_70;
  ID local_68;
  ID local_58;
  ID local_50;
  byte local_41;
  ID local_40;
  byte local_31;
  bool *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShape_026b1ea0);
  local_41 = 0;
  local_70 = 1;
  if (IVar2 != 1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShape_026b1ea0);
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropCornerRadius_026b1eb0);
      local_70 = 1;
      if (0.5 < in_d0) goto LAB_01673e90;
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShape_026b1ea0);
    if (IVar2 == 2) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_freeformPath_026b1ee8);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = IVar2;
      if (IVar2 != 0) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_freeformClosed_026b1ef0);
        local_70 = 1;
        if ((IVar2 & 1) != 0) goto LAB_01673e90;
      }
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShadowEnabled_026b1eb8);
    local_70 = (uint)IVar2;
  }
LAB_01673e90:
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_31 = (byte)local_70 & 1;
  if (local_30 != (bool *)0x0) {
    *(byte *)local_30 = local_31;
  }
  bVar1 = (local_70 & 1) == 0;
  local_88 = local_28;
  if (bVar1) {
    _UIImageJPEGRepresentation(0x3fee666666666666);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_88;
  }
  else {
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_88;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    IVar3 = local_28;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_50;
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    IVar3 = local_28;
    _UIImageJPEGRepresentation(0x3fee666666666666);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_50;
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

