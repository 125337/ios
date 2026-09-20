// subtitleForItem: @ 01a028dc

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineFriendRelationResultListViewController::subtitleForItem_
          (WCRefineFriendRelationResultListViewController *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  double in_d0;
  cfstringStruct *local_168;
  cfstringStruct *local_130;
  byte local_f4;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  undefined *local_78;
  double local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_maskTruename);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_d0 = &::cf___;
  }
  else {
    local_d0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_maskTruename);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_d0;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_d0;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_retmsg)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_61 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_e8 = &::cf___;
  }
  else {
    local_e8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_retmsg);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_e8;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_e8;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_checkedAt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_70 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_38;
  local_78 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_retcode);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_f4 = 1;
  local_80 = pcVar4;
  if ((pcVar4 != (cfstringStruct *)&DAT_0000270f) &&
     (local_f4 = 1, pcVar4 != (cfstringStruct *)0xfffffffffffffffe)) {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf_Q__O);
    local_f4 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf_Q___8_);
      local_f4 = (byte)pcVar2;
    }
  }
  local_81 = local_f4 & 1;
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  puVar3 = local_78;
  if (pcVar2 == (cfstringStruct *)0x0) {
    if ((local_81 & 1) == 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,&cf__gV_T);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,local_58);
      }
    }
    else {
      local_91 = false;
      bVar1 = local_80 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_130 = &cf_Q___8_;
      }
      else {
        local_130 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Q___8__)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_130;
      }
      local_91 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,local_130);
      if ((local_91 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,local_40);
  }
  if (0.0 < local_70) {
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    local_a0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setDateFormat__0269d1c8,&cf_MM_ddHH_mm);
    puVar7 = local_78;
    puVar3 = local_a0;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR__OBJC_CLASS___NSDate_026cdf88,
               PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_a0,0);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_168 = &::cf___;
  }
  else {
    local_168 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_168;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_168;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_friendDaysForUserName__026bb600,local_a8);
  puVar3 = local_78;
  if (0 < (long)IVar6) {
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_b_N_YS);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  puVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

