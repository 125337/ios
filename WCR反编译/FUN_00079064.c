// FUN_00079064 @ 00079064

void FUN_00079064(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_headImageView);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if (uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar1;
      FUN_0006faf4(uVar1);
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_valueForKey__0269d128,&cf_wxHighlightedImageView);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      if (uVar2 != 0) {
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) != 0) {
          FUN_0006faf4(local_48);
        }
      }
      uVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_38 = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      goto LAB_000792b0;
    }
  }
  local_18 = 0;
  local_38 = 1;
LAB_000792b0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

