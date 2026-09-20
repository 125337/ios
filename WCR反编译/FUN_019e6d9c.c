// FUN_019e6d9c @ 019e6d9c

void FUN_019e6d9c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *local_158;
  undefined *local_60;
  undefined *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0.0;
  local_40 = 0.0;
  local_48 = 0.0;
  local_50 = 1.0;
  bVar1 = local_30 == (undefined *)0x0;
  if (bVar1) {
    local_158 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_158;
  }
  else {
    local_158 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_158;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  puVar4 = local_58;
  puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_resolvedColorWithTraitCollection_0269fc58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_58;
  local_58 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_getRed_green_blue_alpha__026ca660,&local_38,&local_40,&local_48,
             &local_50);
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__000000FF;
  }
  else {
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf___02lX_02lX_02lX_02lX);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar5;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

