// importRepositoryTextURL: @ 01ee9f9c

/* Function Stack Size: 0x18 bytes */

bool WCRefineToDoHTMLRepositoryViewController::importRepositoryTextURL_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *local_168;
  cfstringStruct *local_138;
  cfstringStruct *local_120;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  ID local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  int local_ac;
  cfstringStruct *local_a8;
  bool local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_e0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_e0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  FUN_01eea788();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  FUN_01eea960();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_40;
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar3;
  _WCRefineToDoHTMLLayoutFromCompanionJSONAtPath();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_json);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    local_79 = false;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_f8 = (cfstringStruct *)0x0;
    }
    else {
      local_f8 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_68,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_f8;
    }
    local_79 = pcVar2 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_f8;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    pcVar2 = local_70;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar3 = local_70;
    if (((ulong)pcVar2 & 1) == 0) {
LAB_01eea530:
      local_ac = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_html)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar2 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_99 = false;
      bVar1 = ((ulong)pcVar2 & 1) == 0;
      if (bVar1) {
        local_120 = (cfstringStruct *)0x0;
      }
      else {
        local_120 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_120;
      }
      local_99 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_120;
      if ((local_99 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_138 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_138 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = local_138;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_containsString__0269d0b0,&cf_<html);
        if ((((ulong)pcVar2 & 1) == 0) &&
           (pcVar2 = local_a8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_a8,PTR_s_containsString__0269d0b0,&cf_<_doctype),
           ((ulong)pcVar2 & 1) == 0)) {
          local_21 = 0;
          local_ac = 1;
        }
        else {
          local_ac = 0;
        }
        _objc_storeStrong(&local_a8,0);
        if (local_ac == 0) goto LAB_01eea4cc;
      }
      else {
        pcVar3 = local_90;
        FUN_01eea960(pcVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
LAB_01eea4cc:
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          _objc_storeStrong(&local_60,local_88);
        }
        local_ac = 0;
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
      if (local_ac == 0) goto LAB_01eea530;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    if (local_ac != 0) goto LAB_01eea730;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_ac = 1;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_URLByDeletingPathExtension_026c3d28);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_168 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_168 = &cf__g_TTNx;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_168;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    FUN_01eeac88();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_30;
    local_c0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addRepositoryItemWithName_author_026c7e90,local_b8,&cf_WCR,local_58,
               pcVar2,0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
    if ((IVar5 != 0) &&
       (pcVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0),
       pcVar2 != (cfstringStruct *)0x0)) {
      _WCRefineToDoSeedHTMLLayoutJSONForWork(pcVar2,local_c8,local_60);
    }
    local_21 = 1;
    local_ac = 1;
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
  }
LAB_01eea730:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

