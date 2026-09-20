// FUN_000d163c @ 000d163c

/* WARNING: Removing unreachable block (ram,0x000d18ac) */

void FUN_000d163c(undefined8 param_1)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  dVar1 = DAT_02323cd0;
  local_20 = (undefined *)0x0;
  dVar5 = DAT_02323cd0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha(puVar2);
    local_18 = local_28;
    if (dVar1 < dVar5) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_000d18f8;
    }
  }
  puVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_28 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_28;
  if (local_28 != (undefined *)0x0) {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha(puVar2);
    local_18 = local_28;
    if (dVar1 < dVar5) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_000d18f8;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGroupedBackgroundColor_0269e878);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
LAB_000d18f8:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

