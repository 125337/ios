// inputFieldDidChange: @ 01aa7754

/* Function Stack Size: 0x18 bytes */

void WCRGroupCreateViewController::inputFieldDidChange_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (pcVar1 == (cfstringStruct *)&UNK_0000238d) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_38 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNameDraft__026bdbf8,local_38);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    if (pcVar1 == (cfstringStruct *)&UNK_0000238e) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_48 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDetailDraft__026bdc08,local_48);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
      if (pcVar1 == (cfstringStruct *)&UNK_0000238f) {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_58 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setInlineDetailDraft__026bdc18,local_58);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

