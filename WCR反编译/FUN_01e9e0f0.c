// FUN_01e9e0f0 @ 01e9e0f0

void FUN_01e9e0f0(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_80;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_n_lu);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    local_48 = 0xc;
    local_80 = uVar1;
    if (0xb < uVar1) {
      local_80 = 0xc;
    }
    local_50 = local_80;
    local_38 = local_80;
    local_40 = uVar1;
    for (local_58 = 0; pcVar2 = local_30, local_58 < local_38; local_58 = local_58 + 1) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_60 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_entryId_026c7430);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_done_026a1598);
      uVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_appendFormat__0269d148,&cf______d__lu);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(&local_60,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

