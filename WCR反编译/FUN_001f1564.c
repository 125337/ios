// FUN_001f1564 @ 001f1564

byte FUN_001f1564(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    if (uVar2 == 0) {
      local_11 = 0;
    }
    else {
      FUN_001f16ec();
      local_11 = (byte)uVar2 & 1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

