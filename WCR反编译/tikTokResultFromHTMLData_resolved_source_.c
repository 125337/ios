// tikTokResultFromHTMLData:resolved:source: @ 0105c370

/* Function Stack Size: 0x28 bytes */

ID WCRefineLinkParser::tikTokResultFromHTMLData_resolved_source_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_e0;
  ID local_c8;
  undefined *local_90;
  bool local_81;
  ID local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  undefined *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_28 = (undefined *)0x0;
    local_54 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar4 = local_30;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_JSONScriptWithID_inHTML__026ae0b8,
               &cf___UNIVERSAL_DATA_FOR_REHYDRATION__,puVar3);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_30;
    local_68 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_firstDictionaryInObject_containi_026ae0c0,IVar4);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_itemStruct);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    IVar4 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_81 = false;
    bVar1 = (IVar4 & 1) == 0;
    if (bVar1) {
      local_c8 = 0;
    }
    else {
      local_c8 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_itemStruct);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_c8;
    }
    local_81 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_c8;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    if (local_78 == 0) {
      local_28 = (undefined *)0x0;
      local_54 = 1;
    }
    else {
      puVar3 = PTR_WCRefineLinkParseResult_026cecb0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288)
      ;
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setPlatform__026adde8,5);
      if (local_50 == (cfstringStruct *)0x0) {
        local_e0 = &::cf___;
      }
      else {
        local_e0 = local_50;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setSourceURL__026addf0,local_e0);
      if (local_48 == (cfstringStruct *)0x0) {
        if (local_50 == (cfstringStruct *)0x0) {
          local_100 = &::cf___;
        }
        else {
          local_100 = local_50;
        }
        local_f0 = local_100;
      }
      else {
        local_f0 = local_48;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setResolvedURL__026addf8,local_f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_fillTikTokResult_fromItem__026ae0c8,local_90,local_78);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_normalizeVideoVersusCover__026adff8,local_90);
      puVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (puVar6 == (undefined *)0x0) {
        puVar6 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_imageURLs_026adac8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar7 == (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_28 = local_90;
      if (bVar1) {
        local_28 = (undefined *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_54 = 1;
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

