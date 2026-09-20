// FUN_00ef49d8 @ 00ef49d8

void FUN_00ef49d8(undefined8 param_1,cfstringStruct *param_2,ulong *param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_e0;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ulong *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = param_3;
  local_28 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf___;
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getTextAtIndex__026a7c18);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getTextAtIndex__026a7c18,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar1 = local_38;
  if (local_30 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_30 = (ulong)pcVar1;
  }
  pcVar2 = local_20;
  FUN_00eff7ac();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_28;
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  local_51 = false;
  if (pcVar2 <= pcVar1) {
    local_b8 = (cfstringStruct *)0x0;
  }
  else {
    local_b8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_b8;
  }
  local_51 = pcVar2 > pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b8;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar1 = local_48;
  FUN_00eee4f4(local_48,&cf_pathKey);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_d0 = local_38;
  }
  else {
    local_d0 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (local_d0 == (cfstringStruct *)0x0) {
    local_e0 = &cf___;
  }
  else {
    local_e0 = &cf_wcr_attachment_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_wcr_attachment_,PTR_s_stringByAppendingString__0269d398,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_e0;
  if (local_d0 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

