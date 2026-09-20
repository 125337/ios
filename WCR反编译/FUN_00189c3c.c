// FUN_00189c3c @ 00189c3c

/* WARNING: Removing unreachable block (ram,0x00189e10) */

void FUN_00189c3c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_88;
  undefined *local_40;
  undefined *local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_20;
  if ((uVar3 & 1) == 0) {
    local_18 = 0;
  }
  else {
    bVar1 = local_28 == (undefined *)0x0;
    if (bVar1) {
      local_88 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_88;
    }
    else {
      local_88 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_resolvedColorWithTraitCollection_0269fc58,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

