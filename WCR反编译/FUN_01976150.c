// FUN_01976150 @ 01976150

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01976150(long param_1,byte param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  undefined *local_110;
  undefined *local_100;
  undefined *local_c8;
  undefined *local_b8;
  undefined *local_80;
  undefined *local_70;
  ulong local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  long local_40;
  byte local_31;
  long local_30;
  undefined *local_28;
  
  local_48 = 0.0;
  local_50 = 0.0;
  local_58 = 0.0;
  local_60 = 1.0;
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_40 = param_1;
  local_31 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar2 = 2;
  if ((local_31 & 1) == 0) {
    uVar2 = 1;
  }
  puVar4 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
  local_68 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITraitCollection_026ce138,
             PTR_s_traitCollectionWithUserInterface_026ba1c0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_resolvedColorWithTraitCollection_0269fc58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_68;
  local_68 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_getRed_green_blue_alpha__026ca660,&local_48,&local_50,&local_58,
             &local_60);
  if ((uVar3 & 1) == 0) {
    bVar1 = (local_31 & 1) == 0;
    local_100 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_100;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_100;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_100;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
  }
  else {
    dVar6 = 0.0;
    if ((local_31 & 1) == 0) {
      dVar6 = 1.0;
    }
    bVar1 = DAT_02339df8 * (dVar6 * (1.0 - local_60) + local_60 * local_50) +
            (dVar6 * (1.0 - local_60) + local_60 * local_48) * DAT_02339df0 +
            (dVar6 * (1.0 - local_60) + local_60 * local_58) * DAT_02339de8 <= DAT_02323c98;
    local_110 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_110;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_110;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_110;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
  }
  _objc_storeStrong(&local_68,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

