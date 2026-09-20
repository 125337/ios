// entryFromOfficialItem:meta: @ 01f143ec

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoStore::entryFromOfficialItem_meta_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  undefined8 uVar9;
  uint local_124;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e0;
  ID local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  int local_68;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR_WCRefineToDoEntry_026cf6a8;
  _objc_alloc_init();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setBackend__026c81d0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOfficialItem__026c8220,local_38);
  pcVar3 = local_38;
  FUN_01f14f50();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = local_50;
  local_50 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar7 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_textSnapshot);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_61 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_e0 = &::cf___;
  }
  else {
    local_e0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_textSnapshot);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_e0;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_e0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  pcVar7 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar7 == (cfstringStruct *)0x0) {
    pcVar7 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_f8 = &cf__e_R;
    }
    else {
      local_f8 = local_58;
    }
    local_f0 = local_f8;
  }
  else {
    local_f0 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setText__026caa88,local_f0);
  pcVar7 = local_38;
  FUN_01f15094();
  _objc_retainAutoreleasedReturnValue();
  local_108 = pcVar7;
  if (pcVar7 == (cfstringStruct *)0x0) {
    local_108 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEntryId__026c81d8,local_108);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDone__026a15a0,0);
  pcVar7 = local_38;
  FUN_01f151bc();
  local_68 = (int)pcVar7;
  if (local_68 != 0) {
    uVar9 = NEON_ucvtf((ulong)pcVar7 & 0xffffffff);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDueDate__026c7688,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setStartTime__026c7690,local_70);
    _objc_storeStrong(&local_70,0);
  }
  pcVar7 = local_38;
  FUN_01f15254();
  local_78 = pcVar7;
  if (pcVar7 == (cfstringStruct *)0x0) {
    pcVar7 = local_38;
    FUN_01f152ec(0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar7;
    if (pcVar7 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCreatedAt__026a58e0,pcVar7);
    }
    _objc_storeStrong(&local_80,0);
  }
  else {
    uVar9 = NEON_ucvtf(pcVar7);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCreatedAt__026a58e0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  pcVar7 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_daily);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_89 = 0;
    local_124 = 1;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_starred);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_124 = (uint)pcVar3;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDaily__026c76a0,local_124 & 1);
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    pcVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_note)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_note);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setNote__026c7680);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
    }
    IVar8 = local_28;
    pcVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_endTime);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_dateFromTimestamp__026c81e0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    if (local_98 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEndTime__026c7698,local_98);
    }
    pcVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMessageSessionUserName__026c8228);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
    }
    pcVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMessageLocalID__026c8230,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    pcVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMessageServerID__026c8238,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    _objc_storeStrong(&local_98,0);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_messageSessionUserName_026c8240);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar5 == (undefined *)0x0) {
    pcVar7 = local_38;
    FUN_01f15414();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMessageSessionUserName__026c8228);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_messageServerID_026c8248);
  if ((long)puVar2 < 1) {
    pcVar7 = local_38;
    FUN_01f15558(puVar2,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMessageServerID__026c8238,pcVar7);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

