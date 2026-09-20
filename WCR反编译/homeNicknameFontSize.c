// homeNicknameFontSize @ 01e53da0

/* Function Stack Size: 0x10 bytes */

double WCRefineTelegramTabStripView::homeNicknameFontSize(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double local_60;
  undefined *local_48;
  double local_40;
  cfstringStruct *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  pcVar1 = "UIFont";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  pcVar2 = &cf_dynamicLength_;
  local_30 = pcVar1;
  _NSSelectorFromString();
  local_38 = pcVar2;
  if ((local_30 != (char *)0x0) &&
     (pcVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar1 & 1) != 0)) {
    dVar5 = 17.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
    local_40 = dVar5;
    if (1.0 < dVar5) {
      return dVar5;
    }
  }
  puVar4 = PTR_WCRefineOfficialTheme_026ce620;
  local_60 = 17.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_dynamicSystemFontForProperty_inR_026c68f0,&cf_cell_name_font_size,
             &cf__mainframe_table);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pointSize_026a1d68);
  if (local_60 <= 1.0) {
    local_60 = 17.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pointSize_026a1d68);
  }
  local_18 = local_60;
  _objc_storeStrong(&local_48,0);
  return local_18;
}

