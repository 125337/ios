// floatingBackgroundLayoutFileKey @ 019c33a8

/* Function Stack Size: 0x10 bytes */

ID WCRefineFloatingTabBarSettingsViewController::floatingBackgroundLayoutFileKey
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_floatingTabBarExtraButtonEnabled_0269e4c0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_no_extra;
  }
  else {
    local_80 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatingTabBarExtraButtonPositio_0269e4c8);
    if ((long)local_80 < 1) {
      local_80 = (undefined1 *)0x0;
    }
    if ((long)local_80 < 3) {
      local_88 = local_80;
    }
    else {
      local_88 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    }
    if (local_88 == (undefined1 *)0x0) {
      local_90 = &cf_extra_left;
    }
    else {
      local_90 = &cf_extra_center;
      if (local_88 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        local_90 = &cf_extra_right;
      }
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

