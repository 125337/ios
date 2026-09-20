// FUN_0041b93c @ 0041b93c

void FUN_0041b93c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  cfstringStruct *local_388;
  cfstringStruct *local_378;
  cfstringStruct *local_2a0;
  cfstringStruct *local_150;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  double local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
     pcVar3 == (cfstringStruct *)0x0)) {
    local_28 = (undefined *)0x0;
    local_50 = 1;
    goto LAB_0041cce4;
  }
  pcVar3 = local_38;
  FUN_00413508(local_38,2000);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_28 = (undefined *)0x0;
    local_50 = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_60 = param_1;
    if (param_1 <= 0.0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = param_1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_150 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_150 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_150;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_30;
    FUN_004055cc(local_30,&cf_miniProgramTitle);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    local_70 = pcVar3;
    FUN_004055cc(local_30,&cf_miniProgramContent);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_70;
    local_78 = pcVar4;
    FUN_0041ff00(local_70,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
    pcVar3 = local_58;
    if (pcVar5 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = pcVar3;
      pcVar3 = local_30;
      FUN_004055cc(local_30,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_30;
      local_90 = pcVar3;
      FUN_0040bb14(local_30,&cf_messageType);
      uVar1 = (int)pcVar4 - 0x31;
      puVar8 = (undefined1 *)(ulong)uVar1;
      if (uVar1 == 0) {
        pcVar3 = local_90;
        FUN_0040ca7c(0);
        puVar8 = (undefined1 *)((long)&pcVar3[-2].field0_0x0 + 7);
        if (puVar8 != (undefined1 *)0x0) goto LAB_0041bed4;
        pcVar4 = local_30;
        FUN_004055cc(local_30,&cf_type57Title);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_30;
        FUN_004055cc(local_30,&cf_type57ReferDisplay);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar4;
        FUN_0041f424();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_88;
        local_88 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      else {
LAB_0041bed4:
        pcVar3 = local_30;
        FUN_0040bb14(puVar8,local_30,&cf_messageType);
        if ((int)pcVar3 == 0x31) {
          pcVar3 = local_30;
          FUN_0040cccc(0,local_30,&cf_structuredTexts);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_98 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
          local_a0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_98;
          local_a8 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
          puVar7 = local_a0;
          puVar2 = local_a8;
          if (pcVar3 != (cfstringStruct *)0x0) {
            pcVar3 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            FUN_0040d1ec(puVar7,puVar2);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          pcVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
          puVar7 = local_a0;
          puVar2 = local_a8;
          if ((cfstringStruct *)0x1 < pcVar3) {
            pcVar3 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectAtIndexedSubscript__0269cc78,1);
            _objc_retainAutoreleasedReturnValue();
            FUN_0040d1ec(puVar7,puVar2);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          puVar2 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_componentsJoinedByString__0269d140,&cf__);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          if (puVar2 != (undefined *)0x0) {
            _objc_storeStrong(puVar2,&local_88,local_b0);
          }
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_98,0);
        }
      }
      pcVar4 = local_88;
      FUN_00420170();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_80;
      local_80 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,&cf_keyword);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_keywords);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,&cf_content);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_time);
    (*(code *)PTR__objc_release_02578630)();
    FUN_0042029c(local_60);
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_2a0 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a0,&cf_timeText);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_30;
    FUN_004055cc(local_30,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_sessionUserName);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf___,&cf_sessionName);
    pcVar3 = local_30;
    FUN_004055cc(local_30,&cf_senderUserName);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_senderUserName);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf___,&cf_senderName);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar3 = local_30;
    FUN_0040bb14(local_30,&cf_messageType);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_messageType);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar3 = local_30;
    FUN_00412e78(local_30,&cf_mesSvrID);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithLongLong__0269d808,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_mesSvrID);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar3 = local_30;
    FUN_0040bb14(local_30,&cf_localID);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_localID);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_30;
    FUN_00413340();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,
                 &cf_messageIdentityKey);
    }
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_capturedDuringWarmUp);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (((ulong)pcVar4 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                 &cf_capturedDuringWarmUp);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    pcVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if ((pcVar3 != (cfstringStruct *)0x0) ||
       (pcVar3 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
       pcVar3 != (cfstringStruct *)0x0)) {
      if (local_70 == (cfstringStruct *)0x0) {
        local_378 = &cf___;
      }
      else {
        local_378 = local_70;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_378,&cf_miniProgramTitle
                );
      if (local_78 == (cfstringStruct *)0x0) {
        local_388 = &cf___;
      }
      else {
        local_388 = local_78;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_388,
                 &cf_miniProgramContent);
    }
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,&cf_dedupKey);
    }
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
    local_50 = 1;
    local_28 = puVar2;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58,0);
LAB_0041cce4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

