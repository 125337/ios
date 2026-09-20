// FUN_003aebd0 @ 003aebd0

/* WARNING: Removing unreachable block (ram,0x003aed00) */
/* WARNING: Removing unreachable block (ram,0x003aed70) */
/* WARNING: Removing unreachable block (ram,0x003aed28) */
/* WARNING: Removing unreachable block (ram,0x003aedb4) */
/* WARNING: Removing unreachable block (ram,0x003aedd8) */
/* WARNING: Removing unreachable block (ram,0x003aedf0) */
/* WARNING: Removing unreachable block (ram,0x003aedf8) */
/* WARNING: Removing unreachable block (ram,0x003aee10) */

void FUN_003aebd0(byte param_1)

{
  bool bVar1;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 local_28;
  
  bVar1 = (param_1 & 1) == 0;
  local_68 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_autoreleaseReturnValue(local_68);
  return;
}

