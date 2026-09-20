// FUN_000f0a44 @ 000f0a44

/* WARNING: Removing unreachable block (ram,0x000f0bb0) */
/* WARNING: Removing unreachable block (ram,0x000f0c20) */
/* WARNING: Removing unreachable block (ram,0x000f0bd8) */
/* WARNING: Removing unreachable block (ram,0x000f0c70) */
/* WARNING: Removing unreachable block (ram,0x000f0c94) */
/* WARNING: Removing unreachable block (ram,0x000f0cac) */
/* WARNING: Removing unreachable block (ram,0x000f0cb4) */
/* WARNING: Removing unreachable block (ram,0x000f0ccc) */

void FUN_000f0a44(byte param_1)

{
  bool bVar1;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 local_28;
  
  bVar1 = (param_1 & 1) == 0;
  local_78 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_autoreleaseReturnValue(local_78);
  return;
}

