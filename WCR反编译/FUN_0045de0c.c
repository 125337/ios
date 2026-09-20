// FUN_0045de0c @ 0045de0c

void FUN_0045de0c(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_190;
  undefined *local_90;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = &cf_WCActionSheet;
  _NSClassFromString();
  pcVar3 = &cf_WCActionSheetItem;
  local_30 = pcVar2;
  _NSClassFromString();
  local_48 = pcVar3;
  if ((local_30 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) {
    local_4c = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_58;
    pcVar2 = local_48;
    local_60 = puVar5;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_h__t);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,&cf_manage);
    puVar4 = local_58;
    pcVar2 = local_48;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_h_N_);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,&cf_library);
    puVar5 = local_28;
    FUN_0043afb0();
    puVar4 = local_58;
    if (((ulong)puVar5 & 1) != 0) {
      pcVar2 = local_48;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_fe____R);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,&cf_gender);
      puVar5 = local_28;
      _WCRefineAIGroupAnalysisMenuAvailableForTool();
      puVar4 = local_58;
      if (((ulong)puVar5 & 1) != 0) {
        pcVar2 = local_48;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf__J___);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,&cf_ai_analysis);
      }
    }
    puVar4 = local_58;
    pcVar2 = local_48;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_O_);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,&cf_session_stats);
    FUN_0045e75c();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setToolView__026a3e70,local_28);
    pcVar2 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,0,local_68,&cf_Sm,0);
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_setValue_forKey__0269d300,local_58,&cf_buttonTitleList);
    pcVar2 = local_70;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x24f764);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,puVar4,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_setAssociatedObject(local_70,DAT_026e0360,local_60,3);
    puVar4 = local_28;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    bVar1 = ((ulong)puVar4 & 1) == 0;
    if (bVar1) {
      local_80 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_190 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_190;
    }
    else {
      local_190 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_190;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_showInView__0269d310,local_78);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

