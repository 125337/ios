// lastCharFromMaskedPayLabel: @ 00ea9ccc

/* Function Stack Size: 0x18 bytes */

ID WCRefineAuthNameHelper::lastCharFromMaskedPayLabel_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined *local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  ulong local_80;
  uint local_74;
  cfstringStruct *local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  long *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_70 = (cfstringStruct *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  pcVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &::cf___;
    local_74 = 1;
    goto LAB_00eaa1d8;
  }
  local_48 = &DAT_028e2948;
  local_50 = 0;
  _objc_storeStrong(&local_50,&PTR___NSConcreteGlobalBlock_02581a40);
  if (*local_48 + 1 != 0) {
    _dispatch_once(*local_48 + 1,local_48,local_50);
  }
  _objc_storeStrong(&local_50,0);
  pcVar2 = local_70;
  uVar4 = DAT_028e2940;
  pcVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  local_38 = 0;
  local_30 = 0;
  local_90 = 0;
  local_88 = pcVar3;
  local_40 = pcVar3;
  local_28 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_firstMatchInString_options_range_0269ef48,pcVar2,0,0,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_80 = uVar4;
  if ((uVar4 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_numberOfRanges_0269ef18), pcVar2 = local_70,
     uVar4 < 2)) {
    pcVar2 = local_70;
    puVar5 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rangeOfString_options__0269d118,&cf__,4);
    local_b0 = pcVar2;
    local_a8 = puVar5;
    if ((pcVar2 != (cfstringStruct *)0x7fffffffffffffff) &&
       (pcVar3 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
       (cfstringStruct *)((long)&pcVar2->field0_0x0 + 1U) < pcVar3)) {
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&local_b0->field0_0x0 + 1));
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
      pcVar2 = local_b8;
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = pcVar2;
      }
      local_74 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_b8,0);
      if (local_74 != 0) goto LAB_00eaa1c8;
    }
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_70;
    local_c0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    pcVar2 = local_c8;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = &::cf___;
    }
    else {
      pcVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      puVar5 = PTR_s_rangeOfComposedCharacterSequence_026aadc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_rangeOfComposedCharacterSequence_026aadc0,
                 (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 7));
      pcVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_substringWithRange__0269d138,pcVar2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
    }
    local_74 = 1;
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
  }
  else {
    uVar4 = local_80;
    puVar5 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeAtIndex__0269ef20,1);
    local_a0 = uVar4;
    local_98 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringWithRange__0269d138,uVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_74 = 1;
    local_58 = pcVar2;
  }
LAB_00eaa1c8:
  _objc_storeStrong(&local_80,0);
LAB_00eaa1d8:
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_58;
}

