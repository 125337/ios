// wcRefineSearchComponentsFromIndexComposite: @ 014ce390

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::wcRefineSearchComponentsFromIndexComposite_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_180;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_40 = &::cf___;
    local_38 = &::cf___;
    local_30 = &::cf___;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__C);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_c8;
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_componentsSeparatedByString__0269d3c0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
    if (pcVar2 < (cfstringStruct *)0x3) {
      pcVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
      if (pcVar2 == (cfstringStruct *)0x2) {
        pcVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_68 = &::cf___;
        pcVar5 = local_e8;
        local_70 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_60 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_70,3);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_cc = 1;
      }
      else {
        local_88 = &::cf___;
        local_80 = &::cf___;
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0,local_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_78 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_88,3);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_cc = 1;
      }
    }
    else {
      pcVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_e8;
      pcVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
      local_108 = (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 6);
      local_a0 = 2;
      local_98 = 2;
      local_110 = 2;
      local_a8 = local_108;
      local_90 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_subarrayWithRange__0269d848,2,local_108);
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_componentsJoinedByString__0269d140,local_e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (local_f0 == (cfstringStruct *)0x0) {
        local_160 = &::cf___;
      }
      else {
        local_160 = local_f0;
      }
      local_58 = local_160;
      if (local_f8 == (cfstringStruct *)0x0) {
        local_170 = &::cf___;
      }
      else {
        local_170 = local_f8;
      }
      local_50 = local_170;
      if (local_118 == (cfstringStruct *)0x0) {
        local_180 = &::cf___;
      }
      else {
        local_180 = local_118;
      }
      local_48 = local_180;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_cc = 1;
      local_b0 = puVar1;
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

