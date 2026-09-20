// wcrUsageBadgeForPrompt: @ 017c604c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIPersonaLibraryViewController::wcrUsageBadgeForPrompt_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined *puVar6;
  uint local_134;
  uint local_124;
  uint local_114;
  uint local_f4;
  uint local_a4;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_30;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionField_026b4df0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_48;
  if ((IVar4 & 1) == 0) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionField_026b4df0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) == 0) {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionField_026b4df0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((IVar4 & 1) == 0) {
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        local_124 = 0;
        if (lVar5 != 0) {
          puVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_systemPrompt_0269d0c8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_124 = (uint)puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        if ((local_124 & 1) == 0) {
          lVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          local_134 = 0;
          if (lVar5 != 0) {
            puVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_resolvedGroupChatAnalysisPrompt_0269d210);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_134 = (uint)puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          if ((local_134 & 1) == 0) {
            local_28 = (cfstringStruct *)0x0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_Rg;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_VYN;
        }
      }
      else {
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        local_114 = 0;
        if (lVar5 != 0) {
          local_70 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_resolvedGroupChatAnalysisPrompt_0269d210);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_114 = (uint)puVar2;
        }
        pcVar1 = &cf_S_MR;
        if ((local_114 & 1) == 0) {
          pcVar1 = (cfstringStruct *)0x0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        if (lVar5 != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
      }
    }
    else {
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      local_f4 = 0;
      if (lVar5 != 0) {
        local_60 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_systemPrompt_0269d0c8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_f4 = (uint)puVar2;
      }
      pcVar1 = &cf_S_MR;
      if ((local_f4 & 1) == 0) {
        pcVar1 = (cfstringStruct *)0x0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      if (lVar5 != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
    }
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionSessionID_026b4e78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_sessionOptionsForID__026a0b58);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    puVar2 = local_50;
    local_a4 = 0;
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_a4 = 0;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_40);
        local_a4 = (uint)puVar2;
      }
    }
    pcVar1 = &cf_S_MR;
    if ((local_a4 & 1) == 0) {
      pcVar1 = (cfstringStruct *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

