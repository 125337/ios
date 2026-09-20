// FUN_01500174 @ 01500174

void FUN_01500174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  pcVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((((ulong)pcVar2 & 1) == 0) ||
      (pcVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
      pcVar2 <= (cfstringStruct *)((long)&MACH_HEADER.cputype + 3))) ||
     (lVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = &cf___;
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    lVar3 = local_c8;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_c0;
    puVar7 = PTR_s_rangeOfString_options__0269d118;
    local_e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rangeOfString_options__0269d118,local_d8,1)
    ;
    pcVar2 = local_c0;
    puVar1 = local_e0;
    if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = &cf___;
    }
    else {
      puVar4 = puVar7 + (long)&pcVar5->field0_0x0;
      pcVar6 = local_c0;
      local_30 = pcVar5;
      local_28 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      local_90 = (long)pcVar6 - (long)(puVar7 + (long)&pcVar5->field0_0x0);
      local_88 = puVar4;
      local_80 = puVar4;
      local_78 = local_90;
      local_40 = pcVar5;
      local_38 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_rangeOfString_options_range__0269d130,puVar1,1,puVar4,local_90,in_x6,
                 in_x7,lVar3);
      if ((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) ||
         (local_50 = pcVar5, local_48 = puVar7,
         pcVar2 < (cfstringStruct *)(puVar7 + (long)&pcVar5->field0_0x0))) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = &cf___;
      }
      else {
        local_a8 = puVar7 + (long)&pcVar5->field0_0x0;
        local_b0 = (long)pcVar2 - (long)(puVar7 + (long)&pcVar5->field0_0x0);
        pcVar2 = local_c0;
        local_a0 = local_a8;
        local_98 = local_b0;
        local_70 = pcVar5;
        local_68 = puVar7;
        local_60 = pcVar5;
        local_58 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_substringWithRange__0269d138,local_a8,local_b0);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = pcVar2;
      }
    }
    local_cc = 1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_autoreleaseReturnValue(local_b8);
  return;
}

