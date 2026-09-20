// canUploadModelToCatalog: @ 0159bfa0

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoiceCloneHelper::canUploadModelToCatalog_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_voiceCloneVisibleForCurrentUser_026a9dd8);
      if (((ulong)puVar2 & 1) == 0) {
        local_11 = 0;
        local_34 = 1;
      }
      else {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalog);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_49 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_a0 = &::cf___;
          }
          else {
            local_a0 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_48 = local_a0;
          }
          local_49 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = local_a0;
          if ((local_49 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_48);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerVoiceId);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_61 = ((ulong)pcVar5 & 1) == 0;
          if (local_61) {
            local_b8 = &::cf___;
          }
          else {
            local_b8 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerVoiceId);
            _objc_retainAutoreleasedReturnValue();
            local_60 = local_b8;
          }
          local_61 = !local_61;
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = local_b8;
          if (local_61) {
            (*(code *)PTR__objc_release_02578630)(local_60);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          local_11 = true;
          if (pcVar3 == (cfstringStruct *)0x0) {
            pcVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
            local_11 = pcVar3 != (cfstringStruct *)0x0;
          }
          local_34 = 1;
          _objc_storeStrong(&local_58);
          _objc_storeStrong(&local_40,0);
        }
        else {
          local_11 = 0;
          local_34 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

