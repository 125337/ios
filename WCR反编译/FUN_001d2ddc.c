// FUN_001d2ddc @ 001d2ddc

byte FUN_001d2ddc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_001d3818();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_bottom_right_shadow);
      local_11 = (byte)uVar2 & 1;
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
      goto LAB_001d2f78;
    }
  }
  local_11 = 0;
  local_30 = 1;
LAB_001d2f78:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

