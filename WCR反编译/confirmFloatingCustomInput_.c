// confirmFloatingCustomInput: @ 019baaa8

/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarButtonActionViewController::confirmFloatingCustomInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  uint local_6c;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_metricAlert_026ba930);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWcr_metricAlert__026ba928,0);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &::cf___;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a8 = &::cf___;
    }
    _objc_storeStrong(&local_48,local_a8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (((pcVar2 == (cfstringStruct *)0x0) && (local_40 != (cfstringStruct *)0x0)) &&
     (pcVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_performSelector__026ca7b8,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    if ((pcVar2 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_b8 = &::cf___;
      }
      _objc_storeStrong(&local_48,local_b8);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_50,0);
  }
  local_c0 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e442a);
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_c0;
  if (local_c0 == (cfstringStruct *)0x0) {
    local_c0 = (cfstringStruct *)0xffffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_integerValue_026ca750);
  }
  local_60 = local_c0;
  pcVar2 = local_28;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  _objc_setAssociatedObject(local_28,&DAT_028e4429,0,3);
  _objc_setAssociatedObject(local_28,&DAT_028e442a,0,1);
  if (local_68 != (cfstringStruct *)0x0) {
    (*(code *)local_68->field2_0x10)();
  }
  pcVar2 = local_48;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_48;
  local_48 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQN_Nzz);
    local_6c = 1;
    goto LAB_019bb1cc;
  }
  if (((long)local_60 < 0) || (3 < (long)local_60)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eHe);
    local_6c = 1;
    goto LAB_019bb1cc;
  }
  local_78 = 0;
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&::cf__);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_48;
    _NSClassFromString();
    puVar3 = PTR_WCRefineHelper_026ce000;
    if (pcVar2 != (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_78,local_48);
      goto LAB_019bb130;
    }
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_6c = 1;
  }
  else {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
    if (pcVar2 == (cfstringStruct *)0x2) {
      pcVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar2;
      _NSClassFromString();
      puVar3 = PTR_WCRefineHelper_026ce000;
      if (pcVar2 != (cfstringStruct *)0x0) {
        _objc_storeStrong(&local_78,local_48);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_6c = (uint)(pcVar2 == (cfstringStruct *)0x0);
      _objc_storeStrong(&local_88,0);
      if (local_6c == 0) {
        local_6c = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h__:NTy_);
      local_6c = 1;
    }
    _objc_storeStrong(&local_80,0);
    if (local_6c == 0) {
LAB_019bb130:
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setStoredAction_forTabIndex__026ba990,local_78,local_60);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      local_6c = 0;
    }
  }
  _objc_storeStrong(&local_78,0);
LAB_019bb1cc:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

