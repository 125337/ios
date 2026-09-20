// FUN_016ccc60 @ 016ccc60

void FUN_016ccc60(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_1a0;
  cfstringStruct *local_158;
  cfstringStruct *local_120;
  cfstringStruct *local_e8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    local_49 = 0;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) == 0) {
      local_e8 = &cf___;
    }
    else {
      local_e8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_e8;
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_61 = 0;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_html)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) == 0) {
      local_120 = &cf___;
    }
    else {
      local_120 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_120;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_120;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_79 = 0;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) == 0) {
      local_158 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    else {
      local_158 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_158;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_158;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
       pcVar2 == (cfstringStruct *)0x0)) {
      local_38 = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_91 = 0;
      local_1a0 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        local_1a0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_1a0;
      }
      local_91 = puVar5 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_1a0;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_insertObject_atIndex__0269eac0,local_28,0);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar1;
      _WCRefineToDoPersistHTMLLayoutForWork(0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setToDoCardWebHTMLRepositoryItem_026b2db8,local_88);
      FUN_016cedbc(local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setToDoCardSourceMode__026b2dc0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setToDoCardWebHTML__026b2dc8,local_58);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setToDoCardWebHTMLEnabled__026b2dd0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setToDoCardWebRuntimeStorage__026b2dd8,local_70);
      _WCRefineToDoApplyHTMLLayoutForWork(local_40);
      FUN_016cef6c();
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_88,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

