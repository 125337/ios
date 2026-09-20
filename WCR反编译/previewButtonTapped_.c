// previewButtonTapped: @ 01f5b0d8

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneListViewController::previewButtonTapped_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_78;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  pcVar2 = local_18;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_visibleModels_026b51b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar1 < pcVar3) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_visibleModels_026b51b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_78 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isPreviewingModelId__026c94f0,local_48);
    pcVar2 = local_18;
    pcVar1 = local_48;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_a0 = &cf_r;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_previewModelId_name__026c9518,pcVar1,local_a0);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_34 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stopPreview_026c9510);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_34 = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_34 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

