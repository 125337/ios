// FUN_0188317c @ 0188317c

void FUN_0188317c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_88;
  undefined *local_28;
  undefined *local_20;
  undefined8 local_18;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),PTR_WCRefineHelper_026ce000,
             PTR_s_pluginPageTableWithFrame_style__026aa9b8,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878,0x12);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_28 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGroupedBackgroundColor_0269e878);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setBackgroundColor__026ca888,local_88);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar6 = 0;
  uVar3 = 0;
  uVar4 = 0x4030000000000000;
  uVar5 = 0;
  FUN_0188c380();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,uVar5,uVar6,local_20,PTR_s_setSeparatorInset__026a2628);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_20,PTR_s_setEstimatedRowHeight__026ae4e0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_20,PTR_s_setEstimatedSectionHeaderHeight__026b70e0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_20,PTR_s_setEstimatedSectionFooterHeight__026b70e8);
  iVar1 = 2;
  ___isPlatformVersionAtLeast(2,0xf,0);
  if (iVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(0,local_20,PTR_s_setSectionHeaderTopPadding__026b46e0);
  }
  puVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

