// FUN_01e9ea5c @ 01e9ea5c

void FUN_01e9ea5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_d0;
  cfstringStruct *local_b8;
  cfstringStruct *local_98;
  ulong local_68;
  ulong local_60;
  cfstringStruct *local_58;
  int local_50;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_49 = 0;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_98 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_98;
  }
  else {
    local_98 = local_20;
  }
  local_49 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_98;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf___localStorage___);
  pcVar3 = local_40;
  if (((ulong)pcVar4 & 1) == 0) {
    local_50 = 1;
  }
  else {
    pcVar4 = &cf___localStorage___;
    (*(code *)PTR__objc_msgSend_02578628)(&cf___localStorage___,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_substringFromIndex__0269d120,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_WCR_TM_);
    uVar5 = local_28;
    if (((ulong)pcVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      bVar1 = (uVar5 & 1) == 0;
      if (bVar1) {
        local_d0 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_d0;
      }
      else {
        local_d0 = local_28;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_d0;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if ((pcVar3 != (cfstringStruct *)0x0) && (local_60 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                   local_60,local_58);
      }
      _objc_storeStrong(&local_60,0);
      local_50 = 0;
    }
    else {
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

