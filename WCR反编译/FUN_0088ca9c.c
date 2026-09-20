// FUN_0088ca9c @ 0088ca9c

void FUN_0088ca9c(undefined8 param_1)

{
  qword *pqVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *puStack_58;
  cfstringStruct *local_50;
  undefined *puStack_48;
  uint local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  FUN_008825d8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar3 = local_28;
    puVar5 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeOfString__0269d838,&cf_format_s_);
    local_50 = pcVar3;
    puStack_48 = puVar5;
    if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar3 = local_28;
      puVar5 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeOfString__0269d838,&cf__);
      local_60 = pcVar3;
      puStack_58 = puVar5;
      local_50 = pcVar3;
      puStack_48 = puVar5;
    }
    if ((local_50 != (cfstringStruct *)0x7fffffffffffffff) &&
       (pqVar1 = &local_50->field0_0x0, pcVar3 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
       (cfstringStruct *)((long)pqVar1 + 1U) < pcVar3)) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&local_50->field0_0x0 + 1));
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_008825d8();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      pcVar3 = local_68;
      bVar2 = pcVar4 != (cfstringStruct *)0x0;
      if (bVar2) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      local_38 = (uint)bVar2;
      _objc_storeStrong(bVar2,&local_68,0);
      if (local_38 != 0) goto LAB_0088cd88;
    }
    pcVar3 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_38 = 1;
  }
LAB_0088cd88:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

