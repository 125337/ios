// FUN_0075dd14 @ 0075dd14

void FUN_0075dd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = &cf_wcr_special_original_setPlaceHolderColor_;
  _NSSelectorFromString();
  uVar4 = local_18;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar4 & 1) != 0) && (uVar4 = local_18, FUN_007612d8(), (uVar4 & 1) != 0)) {
    uVar5 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f4640);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_boolValue_026ca540);
    uVar4 = local_18;
    pcVar2 = local_30;
    bVar1 = (uVar5 & 1) != 0;
    if (bVar1) {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_38,0);
    if (bVar1) goto LAB_0075deac;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,local_30,local_28);
LAB_0075deac:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

