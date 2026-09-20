// FUN_0045d3a4 @ 0045d3a4

void FUN_0045d3a4(undefined8 param_1)

{
  uint uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_58 = &cf_dt_icon;
  }
  else {
    local_58 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_dt_icon);
  uVar1 = (uint)local_58;
  if (((ulong)local_58 & 1) == 0) {
    pcVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_dt_icon_dark);
    local_18 = local_28;
    uVar1 = (uint)pcVar2;
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_0045d56c;
    }
  }
  FUN_004540ac();
  local_18 = &cf_dt_icon_dark;
  if ((uVar1 & 1) == 0) {
    local_18 = &cf_dt_icon;
  }
  (*(code *)PTR__objc_retain_02578638)();
LAB_0045d56c:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

