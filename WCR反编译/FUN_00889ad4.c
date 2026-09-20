// FUN_00889ad4 @ 00889ad4

void FUN_00889ad4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00872b3c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_containsString__0269d0b0,&cf_openim_group_hd_icon);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_containsString__0269d0b0,&cf_openim_group_icon);
      if ((uVar1 & 1) == 0) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_openim_group_icon;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_openim_group_hd_icon;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

