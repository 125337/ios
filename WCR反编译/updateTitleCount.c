// updateTitleCount @ 0198dde0

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::updateTitleCount(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_c8;
  undefined *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  cfstringStruct *local_48;
  byte local_39;
  undefined *local_38;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectMode_026ba2a8);
  if ((param_1 & 1) == 0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isRoot_026a9380);
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_70 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_directory_026ba278);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_80;
      FUN_0197ff04();
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_c8;
    }
    else {
      local_c8 = &cf_eN_t;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
      (*(code *)PTR__objc_release_02578630)(local_80);
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,local_68);
    _objc_storeStrong(&local_68,0);
  }
  else {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hiddenSelectionMode_026ba538);
    local_a0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_29 = 0;
    local_39 = 0;
    local_49 = 0;
    local_59 = 0;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedPaths_026ba4d0);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_a0;
    }
    else {
      pcVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedPaths_026ba4d0);
      _objc_retainAutoreleasedReturnValue();
      local_29 = 1;
      local_28 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringWithFormat__0269cca8,&cf_beN_);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = local_a0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,local_a0);
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
  }
  return;
}

