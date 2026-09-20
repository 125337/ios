// renameModelId:toName: @ 015943d8

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneHelper::renameModelId_toName_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  pcVar4 = local_40;
  if (lVar2 == 0) {
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_models_026b0a68);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    for (local_60 = (cfstringStruct *)0x0; pcVar4 = local_60, pcVar5 = local_58,
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0), pcVar4 < pcVar5;
        local_60 = (cfstringStruct *)((long)&local_60->field0_0x0 + 1)) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_68 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        bVar1 = false;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_70 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_d8 = local_70;
          if (local_70 == (cfstringStruct *)0x0) {
            local_d8 = &cf_r;
          }
          local_c8 = local_d8;
        }
        else {
          local_c8 = local_50;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,&cf_name);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        pcVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_source);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_e8 = &cf_clone;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setObject_forKeyedSubscript__0269d248,local_e8,&cf_source);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,local_68,local_60);
        local_44 = 2;
        _objc_storeStrong(&local_68,0);
        break;
      }
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

