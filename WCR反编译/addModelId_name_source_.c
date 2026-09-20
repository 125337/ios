// addModelId:name:source: @ 01593bac

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::addModelId_name_source_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_198;
  cfstringStruct *local_180;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_110;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined4 local_a4;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  long local_90;
  SEL local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_2;
  local_80 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_90,param_3);
  local_98 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_98,param_4);
  local_a0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a0,param_5);
  lVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_a4 = 1;
  }
  else {
    pcVar3 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_110 = &cf_clone;
    }
    else {
      local_110 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_110;
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_models_026b0a68);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_b9 = 0;
    for (local_c8 = (cfstringStruct *)0x0; pcVar3 = local_c8, pcVar4 = local_b8,
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0), pcVar3 < pcVar4;
        local_c8 = (cfstringStruct *)((long)&local_c8->field0_0x0 + 1)) {
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_c8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_c8);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,&cf_id);
        pcVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        bVar1 = false;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_d8 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_160 = local_d8;
          if (local_d8 == (cfstringStruct *)0x0) {
            local_160 = &cf_r;
          }
          local_150 = local_160;
        }
        else {
          local_150 = local_98;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_150,&cf_name);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        pcVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_source);
        _objc_retainAutoreleasedReturnValue();
        local_170 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_170 = local_b0;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_170,&cf_source);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
        _objc_retainAutoreleasedReturnValue();
        local_180 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_e8 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_wcr_currentProviderCode_026b0a78);
          _objc_retainAutoreleasedReturnValue();
          local_180 = local_e8;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_180,&cf_provider);
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_setObject_atIndexedSubscript__0269e970,local_d0,local_c8);
        local_b9 = 1;
        local_a4 = 2;
        _objc_storeStrong(&local_d0,0);
        break;
      }
    }
    pcVar3 = local_b8;
    if ((local_b9 & 1) == 0) {
      local_78 = &cf_id;
      local_50 = local_90;
      local_70 = &cf_name;
      pcVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_198 = &cf_r;
      }
      else {
        local_198 = local_98;
      }
      local_48 = local_198;
      local_68 = &cf_source;
      local_40 = local_b0;
      local_60 = &cf_provider;
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_wcr_currentProviderCode_026b0a78);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = &cf_createdAt;
      puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_38 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    puVar7 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setActiveModelId__026b0a88,local_90);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
    local_a4 = 0;
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

