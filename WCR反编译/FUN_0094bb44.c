// FUN_0094bb44 @ 0094bb44

void FUN_0094bb44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_20 = param_2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setText__026caa88,local_18);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTextAlignment__026caa90,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe6666666666666,local_28,PTR_s_setMinimumScaleFactor__026ca9d0);
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

