// FUN_006d662c @ 006d662c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d662c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_1b0;
  cfstringStruct *local_138;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  undefined *puStack_c8;
  cfstringStruct *local_b8;
  undefined *puStack_b0;
  cfstringStruct *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_1);
  local_138 = local_80;
  if (local_80 == (cfstringStruct *)0x0) {
    local_138 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_138;
  puVar3 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_rangeOfString_options__0269d118,&cf_bIQ,4);
  pcVar1 = local_88;
  puVar4 = PTR_s_rangeOfString_options__0269d118;
  local_98 = local_138;
  local_90 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_rangeOfString_options__0269d118,&cf_format_s_,4);
  local_b8 = pcVar1;
  puStack_b0 = puVar4;
  if (((local_98 == (cfstringStruct *)0x7fffffffffffffff) ||
      (pcVar1 == (cfstringStruct *)0x7fffffffffffffff)) ||
     (local_d0 = pcVar1, puStack_c8 = puVar4, local_30 = pcVar1, local_28 = puVar4,
     local_98 <= (cfstringStruct *)(puVar4 + (long)&pcVar1->field0_0x0))) {
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = &cf___;
    local_d4 = 1;
  }
  else {
    local_68 = (undefined *)((long)&pcVar1->field0_0x0 + (long)puVar4);
    local_70 = (long)local_98 - (long)((long)&pcVar1->field0_0x0 + (long)puVar4);
    pcVar2 = local_88;
    local_60 = local_68;
    local_58 = local_70;
    local_50 = pcVar1;
    local_48 = puVar4;
    local_40 = pcVar1;
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_substringWithRange__0269d138,local_68,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1b0 = &cf___;
    }
    else {
      local_1b0 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_stringByAppendingString__0269d398,&cf_b_)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_118 = local_1b0;
    }
    local_119 = pcVar2 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_1b0;
    if (local_119) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    local_d4 = 1;
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue(local_78);
  return;
}

