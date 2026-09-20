// wxidFilterPromptOK: @ 017234ac

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropLogViewController::wxidFilterPromptOK_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e3f7d);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &::cf___;
  if (local_30 != (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_38;
      local_38 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(local_50,0);
    }
  }
  _objc_setAssociatedObject(local_18,&DAT_028e3f7d,0,1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_narrowPromptFromSegment_026b3b50);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterNarrow__026b3b10,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterWxidText__026b3b20,&::cf___);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNarrowPromptFromSegment__026b3b28,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterWxidText__026b3b20,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterNarrow__026b3b10,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNarrowPromptFromSegment__026b3b28,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

