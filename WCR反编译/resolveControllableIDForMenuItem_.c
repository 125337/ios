// resolveControllableIDForMenuItem: @ 011046a4

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::resolveControllableIDForMenuItem_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  int local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028e3508);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) == 0) {
LAB_011047c4:
    local_48 = 0;
  }
  else {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar1 = local_38;
    if (pcVar3 == (cfstringStruct *)0x0) goto LAB_011047c4;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  if (local_48 != 0) goto LAB_011049cc;
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_menuTypeOfItem__026aee30,local_30);
  local_58 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_18 = pcVar1;
    goto LAB_011049cc;
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_menuItemTitle__026aee28,local_30);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_20;
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_itemIDMatchingMenuTitle__026aee38,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
LAB_01104944:
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      pcVar1 = &cf_plugin_title_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_plugin_title_,PTR_s_stringByAppendingString__0269d398,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  else {
    pcVar3 = local_68;
    _WCRLongPressMenuItemIsNative();
    pcVar1 = local_68;
    if (((ulong)pcVar3 & 1) != 0) goto LAB_01104944;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  local_48 = 1;
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
LAB_011049cc:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

