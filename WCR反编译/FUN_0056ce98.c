// FUN_0056ce98 @ 0056ce98

/* WARNING: Removing unreachable block (ram,0x0056cfac) */

void FUN_0056ce98(void)

{
  char *pcVar1;
  char *local_30;
  undefined *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "WCColor";
  _objc_getClass();
  local_28 = PTR_s_backgroundColor_026ca518;
  local_20 = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_backgroundColor_026ca518),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_30,0);
    if (pcVar1 != (char *)0x0) goto LAB_0056cfd8;
  }
  pcVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,
             &PTR___NSConcreteGlobalBlock_0257de58);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
LAB_0056cfd8:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

