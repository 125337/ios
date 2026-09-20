// wcRefine_cleanSearchInput: @ 01d77660

/* Function Stack Size: 0x18 bytes */

bool WCRefineSearchSettingsViewController::wcRefine_cleanSearchInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_a0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  byte local_31;
  undefined8 local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isCleaningSearchInput_026c4ab8);
  if ((((IVar1 & 1) == 0) &&
      (pcVar2 = local_50,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
      ((ulong)pcVar2 & 1) != 0)) &&
     (pcVar2 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_text);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    FUN_01d77a54();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_60;
    local_68 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,pcVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsCleaningSearchInput__026c4ac0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setValue_forKey__0269d300,local_68,&cf_text);
      pcVar2 = local_50;
      puVar4 = PTR__OBJC_CLASS___UITextView_026ce1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      pcVar3 = local_50;
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_font_0269ea00);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar3 == (cfstringStruct *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFont__026ca958);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_30 = 0;
        local_18 = 0;
        local_28 = pcVar3;
        local_20 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSelectedRange__026a0d48,pcVar3,0);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        _objc_storeStrong(&local_70,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsCleaningSearchInput__026c4ac0,0);
      local_31 = 1;
    }
    else {
      local_31 = 0;
    }
    local_54 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_31 = 0;
    local_54 = 1;
  }
  _objc_storeStrong(&local_50,0);
  return local_31 & 1;
}

