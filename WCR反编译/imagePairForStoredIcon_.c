// imagePairForStoredIcon: @ 019b9704

/* Function Stack Size: 0x18 bytes */

ID WCRefineFloatingTabBarButtonActionViewController::imagePairForStoredIcon_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_c8;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &::cf___;
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_imagepair_);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_image_);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,6);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_a0 = &::cf___;
      }
      _objc_storeStrong(&local_48,local_a0);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,10);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_78 = &::cf___;
      }
      _objc_storeStrong(&local_48,local_78);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if ((cfstringStruct *)0x1 < pcVar1) {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_88 = &::cf___;
      }
      _objc_storeStrong(&local_50,local_88);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_relativeFloatingIconPath__026baa10,local_48);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_48;
  local_48 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_relativeFloatingIconPath__026baa10,local_50);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_50;
  local_50 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_48 == (cfstringStruct *)0x0) {
    local_b8 = &::cf___;
  }
  else {
    local_b8 = local_48;
  }
  local_28 = local_b8;
  if (local_50 == (cfstringStruct *)0x0) {
    local_c8 = &::cf___;
  }
  else {
    local_c8 = local_50;
  }
  local_20 = local_c8;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

